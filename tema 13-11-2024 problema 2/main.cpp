#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[420][420];
    int v[100];
    int n,i,j,x,y;
    cin>>n;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) cin>>a[i][j];
    }
    for(x=1;x<=n;x++) {
            i=x;
        for(j=1;j<=n;j++) {
            i++;
            if(a[i][j]) {
                v[x]+=a[i][j];
            } else break;
        }
    }
    for(x=1;x<=n;x++) {
            j=x;
        for(i=1;i<=n;i++) {
            j++;
            if(a[i][j]) {
                v[n+x]+=a[i][j];
            } else break;
        }
    }
    i=j=1;
    while(i<=n && j<=n)
    {
        v[n]+=a[i][j];
        i++;
        j++;
    }
    sort(v,v+n+n);
    for(x=1;x<=n+n-1;x++)
        cout<<v[x]<<" ";
    return 0;
}
