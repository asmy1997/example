#include <stdio.h>
//#include "sumavg.c"
#include "maxmin.h"
//#include "maxmin.h"

int main(void)
{  
	int i, ans1,ans3,ans4,score[5];  
	double ans2;  
	printf("�п�J���ӤH�����Z:\n");  
	
		for (i=0; i<5; i++)
		{    
		scanf("%d",&score[i]);  
		}  
		
	ans1=sum(score);  
	printf("���ӤH�����Z�`�M��: %d ��\n",ans1);  
	ans2=avg(score);
	printf("���ӤH���������Z�� %.2lf ��\n",ans2);
	ans3=max(score);    
	printf("���ӤH���̤j�Ȭ� %d ��\n",ans3);
	ans4=min(score);
	printf("���ӤH���̤p�Ȭ� %d ��\n",ans4);

	return 0;
}
