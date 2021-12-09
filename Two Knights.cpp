#include <bits/stdc++.h>
#define int long long
#define LoveRem ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

signed main()
{
    LoveRem
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int ans=0;
        int ii=i*i;
        int all = ii*(ii-1)/2;
        int Not = 4*(i-1)*(i-2);
        ans = all-Not;
        cout<<ans<<'\n';
    }
}
