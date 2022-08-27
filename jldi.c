#include<stdio.h>
int main()
{
int no[3][3],a,b,c;
for(a=0;a<=2;a++)
{
	for(b=0;b<=2;b++)
   {
   printf("enter your number at location [%d][%d]=",a,b);
   scanf("%d",&no[a][b]);
   }
}
for(a=0;a<=2;a++)
{
	printf("\n");
	for(b=0;b<=2;b++)
   {
   printf("%3d",no[a][b]);
	}
}
printf("\nSUM=%d",no[0][2]+no[1][1]+no[2][0]);
return 0;
}

