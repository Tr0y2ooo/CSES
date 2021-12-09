#include <bits/stdc++.h>
#define int long long
#define LoveRem ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

signed main()
{
    LoveRem
    int n;
    cin>>n;
    cout<<n<<' ';
    while(n!=1){

        if(n&1)
            n = n*3+1;
        else
            n/=2;
    cout<<n<<' ';
    }

}
