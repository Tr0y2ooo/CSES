#include <bits/stdc++.h>
#define int long long
#define LoveRem ios::sync_with_stdio(0);cin.tie(0);
#define MaxN 100010
using namespace std;
map<char ,int> m;
set<char> s;
int flag=0;

signed main()
{
    LoveRem
    string dat;
    char mid;
    cin>>dat;
    for(int i=0;i<=dat.size();i++){
        m[dat[i]]++;
        s.insert(dat[i]);
    }
    for(char i='A';i<='Z';i++){
        if(flag==2) {
            cout<<"NO SOLUTION\n";
            break;
        }
        if(m[i]%2!=0){
            mid = i;
            s.erase(i);
            flag++;
        }
    }
    //judge
    for(auto &s : s){
        for(int i=0;i<m[s]/2;i++){
            cout<<s;
            //cout<<1;
        }
    }
    if(flag==1){
        for(int i=0;i<m[mid];i++){
            cout<<mid;
        }
    }
    for(auto r=s.rbegin();r!=s.rend();r++){
        for(int i=0;i<m[*r]/2;i++){
            cout<<*r;
        }
    }
    //out

}
