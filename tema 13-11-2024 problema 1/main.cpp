#include <iostream>
#include <fstream>

using namespace std;

ifstream cin("terencasa_low.in");
ofstream cout("terencasa_low.out");

int v[1001][1001],n,m,s[1001][1001],nrmax;
int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>v[i][j];
            if(i==1)
            {
                s[1][j]=v[i][j];
            }
            else if(j==1)
            {
                s[i][1]=v[i][j];
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        for(int j=2; j<=m; j++)
        {
            if(v[i][j]==1)
            {
                s[i][j]=min(min(s[i-1][j-1],s[i][j-1]),s[i-1][j])+1;
            }
            if(s[i][j]>nrmax)
            {
                nrmax=s[i][j];
            }
        }
    }
    cout<<nrmax<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s[i][j]==nrmax)
            {
                cout<<i-nrmax+1<<" "<<j-nrmax+1<<" "<<i<<" "<<j;
                i=n+1;
                j=m+1;
            }
        }
    }
    return 0;
}
