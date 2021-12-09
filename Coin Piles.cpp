#include <bits/stdc++.h>
#define int long long
#define LoveRem ios::sync_with_stdio(0);cin.tie(0);
#define MaxN 100010
using namespace std;

signed main()
{
    LoveRem
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if((a+b)%3==0&&a*2>=b&&b*2>=a) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
