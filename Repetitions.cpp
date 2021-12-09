#include <bits/stdc++.h>
#define int long long
#define LoveRem ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int ans[1000010];
signed main()
{
    LoveRem
    string dat;
    int Max=1,n,len=1;
    cin>>dat;
    n = dat.size();
    for(int i=1;i<n;i++){
        if(dat[i]==dat[i-1]) {
            len+=1;
            Max = max(Max,len);
        }
        else len=1;
    }
    cout<<Max<<'\n';
}
