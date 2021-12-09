#include <bits/stdc++.h>
#define int long long
#define LoveRem ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int dat[1000000];
bool num[1000000];
signed main()
{
    LoveRem
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>dat[i];
        num[dat[i]]=1;
    }
    for(int i=1;i<=n;i++){
        if(!num[i]) cout<<i<<'\n';
    }

}
