#include <bits/stdc++.h>
#define int long long
#define LoveRem ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int dat[1000100];

signed main()
{
    LoveRem
    int n,ans=0,les;
    cin>>n;
    cin>>dat[0];
    les = dat[0];
    for(int i=1;i<n;i++){
        cin>>dat[i];
        if(dat[i]<les) {
            ans+=les-dat[i];
        }
        les = max(les,dat[i]);
    }
    cout<<ans<<'\n';
}
