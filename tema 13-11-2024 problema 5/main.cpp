#include <fstream>
using namespace std;
int main()
{
    long long a[101][100]={0};
    int fv[101][101]={0};
    long long n,m,nrModificari,nrIntrebari,nrLiniei,nrAdaugat,i1,i2,i,j,nrSubmatrici,x1,y1,x2,y2,s;
    char cerinta;
    fstream fin("eras.in");
    ofstream fout("eras.out");
    fin>>n>>m>>nrModificari;


    for(i1=1;i1<=nrModificari;++i1) {
        fin>>cerinta>>nrLiniei>>nrAdaugat;
        if(cerinta=='L') {
            for(j=1;j<=m;j++) a[nrLiniei][j]+=nrAdaugat;
        } else for(i=1;i<=n;i++) a[i][nrLiniei]+=nrAdaugat;
    }
    fin>>nrIntrebari;
    for(i1=1;i1<=nrIntrebari;++i1) {
            s=0;
        fin>>nrSubmatrici;
        for(i2=1;i2<=nrSubmatrici;++i2) {
            fin>>x1>>y1>>x2>>y2;
            for(i=x1;i<=x2;++i) {
                for(j=y1;j<=y2;++j) {
                    if(fv[i][j]<1) {
                            s+=a[i][j];
                            fv[i][j]+=10;
                    }
                }

            }
        }
        fout<<s<<endl;
        for(i=1;i<=n;i++) {
            for(j=1;j<=m;j++) fv[i][j]=0;
        }
    }
    fin.close();
    fout.close();
        return 0;
}
