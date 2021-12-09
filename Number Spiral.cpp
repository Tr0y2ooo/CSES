#include <bits/stdc++.h>
#define int long long
#define MaxN 100010
#define LoveRem ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

signed main()
{
    LoveRem
    int n;
    cin>>n;
    while(n--){
        int x,y;
        int base,ans=0;
        cin>>y>>x;
        int big = max(y,x);
        int small = min(y,x);
        base = big*big-big+1;
        if(x>y){
            if(x&1){
                ans = base+(big-small);
            }//odd
            else{
                ans = base-(big-small);
            }//even
        }
        else if(y>x){
            if(y&1){
                ans = base-(big-small);
            }//odd
            else{
                ans = base+(big-small);
            }//even
        }
        else
            ans = base;
        cout<<ans<<'\n';

    }
}
