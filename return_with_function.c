#include<stdio.h>
int sum();
int sub();
int multi();
int div();
int sum(int a,int b)
{
int c;
c=a+b;
return c;
}
int sub(int a,int b)
{
int c;
c=a-b;
return c;
}
int multi(int a,int b)
{
int c;
c=a*b;
return c;
}
int div(int a,int b)
{
int c;
c=a/b;
return c;
}
int main()
{
int p,q,r,s,t,u,v,w;
printf("\nenter your first number=");
scanf("%d",&p);
printf("\nenter your second number=");
scanf("%d",&q);
printf("\nsum=%d",sum(p,q));
printf("\nenter your first number=");
scanf("%d",&r);
printf("\nenter your second number=");
scanf("%d",&s);
printf("\nsubtraction=%d",sub(r,s));
printf("\nenter your first number=");
scanf("%d",&t);
printf("\nenter your second number=");
scanf("%d",&u);
printf("\nmultiplication=%d",multi(t,u));
printf("\nenter your first number=");
scanf("%d",&v);
printf("\nenter your second number=");
scanf("%d",&w);
printf("\ndivision=%d",div(v,w));
return 0;
}


