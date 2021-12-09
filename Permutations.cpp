#include <bits/stdc++.h>
#define int long long
#define MaxN 100010
#define LoveRem ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int dat[1000010];
signed main()
{
    LoveRem
    int n;
    cin>>n;
    if(n==1) cout<<1;
    else if(n<=3) cout<<"NO SOLUTION\n";
    else{
        for(int i=2;i<=n;i+=2){
            cout<<i<<' ';
        }
        for(int i=1;i<=n;i+=2){
            cout<<i<<' ';
        }
    }
}
