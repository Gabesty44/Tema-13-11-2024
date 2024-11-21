#include <bits/stdc++.h>

using namespace std;
ifstream fin ("puteri3.in");
ofstream fout("puteri3.out");
long long n,c,k,p,i,j,x,v[101],a,t;
int main()
{
    fin>>c>>n;
    if(c==1)
    {
        p=1;
        while(p<n)
        {
            p*=3;
        	k++;
        }
        fout<<k;
    }
    fin.close();
    fout.close();
    return 0;
}
