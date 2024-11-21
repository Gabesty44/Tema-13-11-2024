#include <bits/stdc++.h>

using namespace std;
fstream fin("cochilie.in");
ofstream fout("cochilie.out");
int main()
{
    int cerinta,n,p,v[1005];
    fin>>cerinta;
    if(cerinta==1)
    {
        v[0]=1;
        v[1]=1;
        fin>>n;
        for(int i=2;i<=n;i++)
            v[i]=v[i-1]+v[i-2];
        if(n%2==0)
            fout<<v[n-1]<<" "<<v[n];
        else
            fout<<v[n]<<" "<<v[n-1];
    }
    fin.close();
    fout.close();
    return 0;
}
