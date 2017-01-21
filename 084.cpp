#include <stdio.h>
#define N 5
struct order
{
	int num ;
	int con ;
} a[20] ;

int main()
{
	int i, j ,k ;
	for(i=0; i<N; i++)
	{
		scanf("%d", &a[i].num) ;
		a[i].con = 0 ;
	}
	for(i=N-1; i>0; i--)
		for(j=i-1; j>=0; j--)
			if(a[i].num < a[j].num)
				a[j].con++ ;
	else
		a[i].con++ ;
	/*printf("the order is:\n") ;
		for(i=0; i<N; i++)
		{printf("%3d%3d\n",a[i].num,a[i].con) ;
	if(a[i].con > 3)
		printf("%d",a[i].num) ;}*/
	for(k=N-1; k>=0; k--)
		{if(a[k].con > 1)
		printf("%d\n", a[k].num) ;}

}