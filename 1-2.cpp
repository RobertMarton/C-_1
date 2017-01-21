#include <iostream>
using namespace std ;
class T{
	int val ;
	T left ;
	T right ;
	T(int x) {val=x} ;
} ;
 class tt
{
	 class T d(T a){
	//public d(a)
		if(a==null) return null ;
	a.left = d(a.left) ;
	a.right = d(a.right) ;

	temp=a.left ;
	a.left = a.right ;
	a.right = temp ; 
	return a ;
}} ；
int main()
{
	T c ;
	cin>>c ;
	cout<<tt<<endl ;
}
