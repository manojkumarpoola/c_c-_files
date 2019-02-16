#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 void input();
 void writefile();
 void search();
 void output();

 struct date
 {
  int day;
  int month;
  int year;
 };
 struct account
 {
  int number;
  char name[100];
  int account_no;
  float mobile_no;
  char street[100];
  char city[100];
  char account_type;
  float oldbalance;
  float payment;
  struct date lastpayment;
 }customer;
 int t1,t2,t3;
 int main()
 {
  int i,n;
  char c;
  printf("CUSTOMER BILLING SYSTEM\n");
  printf("==========================\n");
  printf("1.Add account on list\n");
  printf("2.Search Account from list\n");
  printf("3.Exit\n");
  printf("\n=========================\n");
  do{
     printf("Select what you want to do:\n");
     c=getche();
     }while(c<='0'||c>'3');
  switch(c)
  {
   case '1':system("cls");
	    printf("How many customer accounts:\n");
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	     input();
	     writefile();
	    }main();
   case '2':system("cls");
	    printf("Search the customer number:\n");
	    printf("Search the customer name:\n");
	    search();
	    c=getche();
	    main();
   case '3':system("cls");
	   //delay(100);
	   exit(1);
  }
 }
 void input()
 {
  FILE *fp=fopen("student.dat","r");
  fseek(fp,0,SEEK_END);
  t1=ftell(fp);
  t2=sizeof(customer);
  t3=t1/t2;
  fseek(fp,(t3-1)*t2,SEEK_SET);
  fread(&customer,sizeof(customer),1,fp);
  printf("Customer number:%d\t\t",customer.number++);
  fclose(fp);
  printf("\nAccount number:\t\t");
  scanf("%d",&customer.account_no);
  printf("\nName:\t\t\t");
  scanf("%s",customer.name);
  printf("Mobile number:\t\t");
  scanf("%f",&customer.mobile_no);
  printf("Street:\t\t\t");
  scanf("%s",customer.street);
  printf("City:\t\t\t");
  scanf("%s",customer.city);
  printf("Account_type:\t\t");
  scanf("%s",customer.account_type);
  printf("Previous balance:\t");
  scanf("%f",customer.oldbalance);
  printf( "Current payment:\t");
  scanf("%f",customer.payment);
  printf("Payment date(dd/mm/yyyy):");
  scanf("%d/%d/%d",&customer.lastpayment.day,&customer.lastpayment.month,&customer.lastpayment.year);
  return;
 }
 void writefile()
 {
  FILE *fp;
  fp=fopen("student.dat","r");
  fwrite(&customer,sizeof(customer),1,fp);
  fclose(fp);
  return;
 }
 void search()
 {
  char c;
  char name[100];
  int n,i,b=1;
  FILE *fp;
  fp=fopen("student.dat","r");
  do
  {
  printf("Enter your choice:\n");
  c=getche();
  }while(c<=1||c<=2);
  switch(c)
  {
   case '1':fseek(fp,0,SEEK_END);
	    t1=ftell(fp);
	    t2=sizeof(customer);
	    t3=t1/t2;
	    do
	    {
		 printf("Choose customer number:");
		 scanf("%d",&n);
		 if(n<=0||n>t3)
		 printf("Enter correct\n");
		 else
		 {
			 fseek(fp,(n-1)*t2,SEEK_SET);
			 fread(&customer,t2,1,fp);
			 output();
		 }
		 printf("\nAgain (y/n)");
		 c=getche();
	    }while(c=='y');
	    fclose(fp);
	    break;
   case '2':fseek(fp,0,SEEK_END);
	    t1=ftell(fp);
	    t2=sizeof(customer);
	    t3=t1/t2;
	    fseek(fp,(t3-1)*t2,SEEK_SET);
	    fread(&customer,sizeof(customer),1,fp);
	    n=customer.number;
	    do
	    {
		printf("Enter the name:");
		scanf("%s",name);
		fseek(fp,0,SEEK_SET);
		for(i=0;i<=n;i++)
		{
			fread(&customer,sizeof(customer),1,fp);
			if(strcmp(customer.name,name)==0)
			{
			    output();
			    b=0;
			    break;
			}
		}
		if(b!=0)
		printf("\ndoes not exist\n");
		printf("\nanother (y/n)");
		c=getche();
	    }while(c=='y');
	    fclose(fp);
  }
  return;
 }
 void output()
 {
  printf("&customer number:%d\n",customer.number);
  printf("Account number:%d\n",customer.account_no);
  printf("Name:%s\n",customer.name);
  printf("Mobile number:%f\n",customer.mobile_no);
  printf("Street:%s\n",customer.street);
  printf("City:%s\n",customer.city);
  printf("Account_type:%s\n",customer.account_type);
  printf("Old balance:%.2f\n",customer.oldbalance);
  printf( "Current payment:%.2f\n",customer.payment);
  printf("Payment date:%d/%d/%d\n",customer.lastpayment.day,customer.lastpayment.month,customer.lastpayment.year);
  printf("Account status:");
  return;
 }
