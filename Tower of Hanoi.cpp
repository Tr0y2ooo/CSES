//Tr0y2ooo
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define DEBUG 0
#define LoveRem ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
//vector <int> v;
//set <int> st;
//map <int, int> mp;
void hanoi(int n,char start,char tmp,char des){
	if(n==1){
		cout<<start<<" "<<des<<'\n';
	}
	else{
		hanoi(n-1,start,des,tmp);
		hanoi(1,start,tmp,des);
		hanoi(n-1,tmp,start,des);
	}
}
signed main()
{
    LoveRem
    if(DEBUG) cout<<"-------OUTPUT-------\n";
	//freopen("out.txt", "w", stdout);
 	int n;
 	cin>>n;
 	cout<<pow(2,n)-1<<'\n';
 	hanoi(n,'1','2','3');
}
