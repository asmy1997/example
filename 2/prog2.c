#include <stdio.h>
#include<string.h>

int main()
{
	FILE *fp1,*fp2;
	char name[20],win_name[20],lose_name[20];
	float a,b,c;
	float src,aver;
	float win_src=0,lose_src = 100;
	int i;
	
	fp1 = fopen("data_in.txt","r");
	fp2 = fopen("data_out.txt","w");
	
  	while(fscanf(fp1,"%s %f %f %f",name,&a,&b,&c)!=EOF)
	{
		src  = a+b+c; 
		aver = src/3.0;
   
		if(win_src < aver)
		{
			win_src =aver;
			strcpy(win_name,name);
		}
		else if(lose_src > aver)
		{
			lose_src = aver;
			strcpy(lose_name,name);
		}
		
		fprintf(fp2,"%10s%10.1f%10.1f%10.1f \n",name,a,b,c);
		printf("%10s%10.1f%10.1f%10.1f \n",name,a,b,c);		
	}
	
	fprintf(fp2,"Max.Num= %6.1f Winer is %s\n",win_src,win_name);
	printf("Max.Num= %6.1f Winer is %s\n",win_src,win_name);
	
	fprintf(fp2,"Min.Num= %6.1f Losser is %s\n",lose_src,lose_name);
	printf("Min.Num= %6.1f Losser is %s\n",lose_src,lose_name);
 
	fclose(fp1);
	fclose(fp2);
  return 0;
}
