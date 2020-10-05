#include<stdio.h>
#include<conio.h>
int main()
{
char name[100][30];
float price=0,gst=0,total=0,tp=0,pgst=0;
int noitem,i,j;
clrscr();
printf("\nWELCOME TO BILLING SOFTWARE\n");
printf("\n=============================\n");
printf("\nEnter total no of item\n");
scanf("%d",&noitem);
printf("\nEnter the item name\n");
for(i=0;i<noitem;i++)
	{
	scanf(" %[^\n]",&name[i]);
	}
printf("\nEnter item price\n");
for(i=0;i<noitem;i++)
{
scanf("%f",&price);
tp=tp+price;
}
pgst=tp/100;
gst=pgst*18;
total=gst+tp;
printf("\nBill Reciept\n");
printf("\n**********************************************\n");
printf("\n Item name	   Price	        GST	        Total\n");
printf(" %s	           %f	        %f	 = %f",name[100][30],tp,gst,total);
getch();
return 0;
}
/*
char nameprint(int noitem,char name[100][30])
{ int i;
for(i=0;i<noitem;i++)
 {
 printf("\n%s",&name[i]);
 }
} */
