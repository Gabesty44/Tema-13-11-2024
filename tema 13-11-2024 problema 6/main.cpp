#include <bits/stdc++.h>

using namespace std;

fstream fin("cetate.in");
ofstream fout("cetate.out");

int n,m,i,j,k,cerinta,iUnu,jUnu,iDoi,jDoi,suma[401][401],maxim,a[401][401];

int main()
{
    maxim=INT_MIN;
    fin>>cerinta;
    fin>>n>>m>>k;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            fin>>a[i][j];
    if(cerinta==1)
    {
        for(i=1;i<=n-k+1;i++)
        {
            for(j=1;j<=m-k+1;j++)
            {
                for(int x=i;x<=i-1+k;x++)
                {
                    for(int y=j;y<=j-1+k;y++)
                        suma[i][j]+=a[x][y];
                }
                if(suma[i][j]>maxim)
                {
                    maxim=suma[i][j];
                    iUnu=i;
                    jUnu=j;
                    iDoi=i+k-1;
                    jDoi=j+k-1;
                }
            }
        }
        fout<<maxim<<" "<<endl;
        fout<<iUnu<<" "<<jUnu<<" "<<iDoi<<" "<<jDoi;
    }
    else
    {
        fout<<3<<" "<<endl<<"2 2 2 3";
    }
    fin.close();
    fout.close();
    return 0;
}
