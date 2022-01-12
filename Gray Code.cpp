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
    int sz=pow(2,n);
    vector<char> ans(n,'0');
    for(int i=0;i<sz;i++){
        do{
            for(int j=0;j<ans.size();j++){
                cout<<ans[j];
            }
            cout<<'\n';
            //cout<<ans.size();
        }while(next_permutation(ans.begin(),ans.end()));
        ans.insert(ans.begin(),'1');
        ans.pop_back();
    }
}

