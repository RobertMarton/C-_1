#include <stdio.h>
int main()
{
struct student_score
{
	int mid ;
	int end ;
	int ave ;
} score ;
printf("Please input:") ;
scanf("%d,%d", &score.mid, &score.end) ;
score.ave = (score.mid + score.end)/2 ;
printf("ave:%d\n", score.ave) ;
return 0 ;
}
/////查问题－－－－1.12/／／／／／／