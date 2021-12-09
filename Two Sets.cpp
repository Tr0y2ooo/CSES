#include <bits/stdc++.h>
#define int long long
#define LoveRem ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
set<int> ans1;
set<int> ans2;

signed main()
{
    LoveRem
    int n,sum,nn,left,leftnum=0;
    cin>>n;
    sum = (n+1)*n/2;
    if(n==4){
        cout<<"YES\n2\n4 1\n2\n3 2\n";
        return 0;
    }
    if(sum%2!=0){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        for(int i=1;i<=n;i++){
            ans1.insert(i);
        }
        sum = sum/2;
        nn = sum/n;
        left = sum%n;
        if(left==0){
            leftnum = nn*2;
            for(int i=1;i<=nn;i++){
                if(i!=left){
                    ans2.insert(n-i);
                    ans2.insert(i);
                    ans1.erase(n-i);
                    ans1.erase(i);
                }
            }
        }//¾ã°£
        else{
            leftnum = nn*2 + 1;
            for(int i=1;i<=nn;i++){
                if(i==left){
                    nn+=1;
                    continue;
                }
                else{
                    ans2.insert(n-i);
                    ans2.insert(i);
                    ans1.erase(n-i);
                    ans1.erase(i);
                }
            }
            ans1.erase(left);
            ans2.insert(left);
        }//¦³³Ó

        cout<<n-leftnum<<'\n';
        for(auto it=ans1.begin();it!=ans1.end();it++) cout<<*it<<' ';
        cout<<'\n'<<leftnum<<'\n';
        for(auto it=ans2.begin();it!=ans2.end();it++) cout<<*it<<' ';
    }
}
