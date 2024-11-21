#include <fstream>
using namespace std;
int main()
{
    fstream fin("cartofi.in");
    ofstream fout("cartofi.out");
    int a[100][100];
    int v[1000];
    int n,m,q,c,x=2,i,j,k=0,s=0,i1,max=0,A,B;
    fin>>c;
    fin>>n>>m;
    a[1][1]=1;
    v[1]=1;
    v[2]=1;
    a[1][2]=1;
    i=1;
    for(j=3;j<=m;++j) {
        ++x;
        a[i][j]=(v[x-1]+v[x-2])%10;
        v[x]=a[i][j];
    }
    for(i=2;i<=n;++i) {
        if(i%2==0) {
            for(j=m;j>=1;--j) {
                ++x;
                a[i][j]=(v[x-1]+v[x-2])%10;
                v[x]=a[i][j];
                if(a[i][j]==0) k++;
            }
        } else {
            for(j=1;j<=m;++j) {
                ++x;
                a[i][j]=(v[x-1]+v[x-2])%10;
                v[x]=a[i][j];
                if(a[i][j]==0) k++;
            }
        }
    }
    if(c==1)
    {
    fout<<k;
    }
    if(c==2)
    {
        if(m>n) {
            for(i1=1;i1<=m-n+1;i1++) {

                for(i=1;i<=n;i++) {
                    for(j=i1;j<=i1+n-1;j++)   s=s+a[i][j];

                }
            if(s>max) max=s;


            s=0;
            }
        } else {
            for(i1=1;i1<=n-m+1;i1++) {

                for(i=i1;i<=i1+m-1;i++) {
                    for(j=i1;j<=m;j++) s=s+a[i][j];
                }
            if(s>max) max=s;
            s=0;
            }
        }
        fout<<max;
    } else
    {
        fin>>q;
        for(i1=1;i1<=q;++i1) {
                s=0;
                fin>>A>>B;
                for(i=1;i<=n;i++) {
                    for(j=A;j<=B;j++) s=s+a[i][j];
                }
                fout<<s<<endl;
        }
    }
    fin.close();
    fout.close();
    return 0;
}
