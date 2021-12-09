#include <bits/stdc++.h>
#define int long long
#define LoveRem ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int Mode(int,int,int);

signed main()
{
    LoveRem
    int n;
    cin>>n;
    cout<<Mode(2,n,1000000007);

}

long long Mode(long long a,long long b,long long m)

{
    long long sum=1;
    a=a%m;
    while(b>0)
    {
        if(b%2==1)
        {
            sum=(sum*a)%1000000007;        //sum=(sum*a)%m;
            b--;
        }
        b/=2;
        a=(a*a)%1000000007;                //a=(a*a)%m;
    }
    return sum;
}//§Ö³t¾­¨ú¼Ò
