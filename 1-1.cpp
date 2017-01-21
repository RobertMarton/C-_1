#include <iostream>
#include <string>
#include <vector>
#define maxn 1000000
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std ;
int main()
{
	int n ;
		cin>>n ;

	vector<string> s(n) ;
	rep(i,n)
	cin>>s[i] ;
	sort(s.begin(), s.end()) ;
	rep(i,n)
	cout<<s[i]<<endl; 


}