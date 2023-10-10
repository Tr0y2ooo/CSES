#include <bits/stdc++.h>
using namespace std;
 
//#define int long long
//bitset<99> gray;
bool Compare(const string& str1, const string& str2) {
    return str1 < str2;
}
string ans[20][70000];
signed main()
{
	int n;
	cin>>n;
	ans[1][0] = "1";
	ans[1][1] = "0";
	for(int i=2;i<16;i++){
		for(int j=0;j<pow(2,i-1);j++){
			ans[i][j] = ans[i-1][j]+"0";	
		}
		for(int k=pow(2,i-1);k<pow(2,i);k++){
			int km = k-pow(2,i-1);
			ans[i][k] = ans[i][km];
			int lens = ans[i][k].size();
			ans[i][k][lens-1] = '1';
		}
 
	}
	sort(ans[n], ans[n] + (1 << n), Compare);
	for (int i = 0; i < (1 << n); i++) {
        cout << ans[n][i] << '\n';
    }
	/*
	for(int i=0;i<pow(2,n);i++){
		cout<<ans[n][i]<<'\n';
	}
	*/
	

	
}