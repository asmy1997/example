#include <stdio.h>
#include "progld.h"

int main()
{
	int score[5];
	int i,sum=0;
	float avg;
	
	printf("input 5 num: ");
	for (i=0;i<5;i++){
		scanf("%d",&score[i]);
		sum += score[i];
	}
	printf("total sum = %d \n",sum);
	avg=sum/5.0;
	printf("total avg = %.2f\n",avg);

	printf("max value=%d\n",proglc(score));
	printf("min value=%d\n",proglb(score));
	
	return 0;
}
