/*#include <stdio.h>
int main()
{
	struct stu{
		char *name ;
		int count ;
	}
	stu{{"Tom", 90}, {"Jay", 99}} ;
	printf("%s"s)
}
*/
#include <stdio.h>
#include <string.h>
struct stu
{
	char name[20] ;
	int count ;
} stu[3] = {{"Tom", 0}, {"Jam", 0}, {"Hx", 0}} ;

int main()
{
	int i , j ;
		char Cname[20] ;
		for(i=1; i<=5; i++)
		{
			scanf("%s", Cname) ;
			for(j=0; j<3; j++)
			{
				if(strcmp(Cname, stu[j].name)==0)
					stu[j].count++ ;
			}
		}
		for(i=0; i<3; i++)
		{
			printf("%s: %d\n", stu[i].name, stu[i].count) ; 
		}
	return 0 ;
}
