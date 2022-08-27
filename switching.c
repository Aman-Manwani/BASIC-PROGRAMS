#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d;
printf("\t\t\t\twelcome to j2k restaurant\n");
printf("\npress 1 for breakfast");
printf("\npress 2 for lunch");
printf("\npress 3 for dinner");
printf("\nenter you choice= ");
scanf("%d",&a);
switch(a)
{
	case 1:
	printf("\npress 1 for milk bread");
   printf("\npress 2 for juice");
   printf("\npress 3 for paratha-lassi");
   printf("\nenter your choice= ");
	scanf("%d",&b);
   switch(b)
   {
   	case 1:
      printf("please pay 70/-INR");
      break;
      case 2:
      printf("please pay 100/-INR");
      break;
		case 3:
      printf("please pay 120/-INR");
      break;
      default:
      printf("tu khaane ke laayak hi nhi h");
   }
   break;
   case 2:
	printf("\npress 1 for chole bhature");
   printf("\npress 2 for pasta");
   printf("\npress 3 for daal makhni");
   printf("\nenter your choice= ");
	scanf("%d",&c);
   switch(c)
   {
   	case 1:
      printf("please pay 60/-INR");
      break;
      case 2:
      printf("please pay 80/-INR");
      break;
		case 3:
      printf("please pay 100/-INR");
      break;
      default:
      printf("tu khaane ke laayak hi nhi h");
   }
   break;
   case 3:
	printf("\npress 1 for mix veg");
   printf("\npress 2 for masala dosa");
   printf("\npress 3 for shahi paneer");
   printf("\nenter your choice= ");
	scanf("%d",&d);
   switch(b)
   {
   	case 1:
      printf("please pay 55/-INR");
      break;
      case 2:
      printf("please pay 70/-INR");
      break;
		case 3:
      printf("please pay 135/-INR");
      break;
      default:
      printf("tu khaane ke laayak hi nhi h");
   }
   break;
default:
printf("khane ka mn nhi h to chla ja");
}
return 0;
}

