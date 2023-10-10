//Tr0y2ooo
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define DEBUG 0
#define LoveRem ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
vector <char> v;
//set <int> st;
//map <int, int> mp;
signed main()
{
    LoveRem
    if(DEBUG) cout<<"-------OUTPUT-------\n";
	//freopen("out.txt", "w", stdout);
 	char c;
 	while(cin>>c){
 		v.emplace_back(c);
 	}
 	sort(v.begin(),v.end());
 	int a=0;
 	do
 	{
 		a+=1;
 		}while(next_permutation(v.begin(),v.end()));
 	cout<<a<<'\n';
 	do
 	{
 		a+=1;
 		for(auto i:v){
 			cout<<i;
 			}
 		cout<<'\n';
 		}while(next_permutation(v.begin(),v.end()));
 		
}
