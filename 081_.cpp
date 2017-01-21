#include <stdio.h>
#include <string.h>
struct stu{
	char name[20] ;
	int count ;
} stu[3]={{"Leo", 99}, {"Rom",100}, {"Hx", 90}} ;

int main()
{
	int i = 0 ;
	//getchar() ;
	char figure[20] ;
	scanf("%s", figure) ;
	for(; i<3; i++)
	{
		if(strcmp(figure, stu[i].name) == 0)
			printf("%d\n", stu[i].count) ;
	}
	//printf("\n") ;
	return 0 ;
}