#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<float.h>
#include<math.h>
void main()
{
 int a=-5;
 unsigned int b=10;
 short int c=-15;
 unsigned short int d=20;
 long int e=-1000;
 unsigned long int f=10000;
 char g='a';
 unsigned char h='b';
 float i=21.00;
 double j=12345;
 long double k=123456;
 clrscr();
 printf("%d\n%u\n%d\n%u\n%ld\n%lu\n%c\n%c\n%0.02f\n%2.0lf\n%2.0Lf\n",a,b,c,d,e,f,g,h,i,j,k);
 printf("%d\n",sizeof(a));
 printf("%u\n",sizeof(b));
 printf("%d\n",sizeof(c));
 printf("%d\n",sizeof(d));
 printf("%d\n",sizeof(e));
 printf("%d\n",sizeof(f));
 printf("%d\n",sizeof(g));
 printf("%d\n",sizeof(h));
 printf("%d\n",sizeof(i));
 printf("%d\n",sizeof(j));
 printf("%d\n",sizeof(k));
 printf("Range of int %d %d\n",INT_MIN,INT_MAX);
 printf("Range of unsigned int %u\n",UINT_MAX);
 printf("Range of short int %d %d\n",SHRT_MIN,SHRT_MAX);
 printf("Range of unsigned short int %u\n",USHRT_MAX);
 printf("Range of long int %ld %ld\n",LONG_MIN,LONG_MAX);
 printf("Range of unsigned long int%d\n",ULONG_MAX);
 printf("Range of char %d %d\n",SCHAR_MIN,SCHAR_MAX);
 printf("Range of unsigned char %d\n",UCHAR_MAX);
 printf("Range of float %.10e %.10e\n",FLT_MIN,FLT_MAX);
/* printf("Range of double %d%d\n",MINDOUBLE,MAXDOUBLE);
 printf("Range of long double %Lf\n",);
 getch();*/

}

