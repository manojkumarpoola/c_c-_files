#include<stdio.h>
#include<conio.h>
void main()
{
 int a=15,b=30,n=122,i;
 clrscr();
 printf("Bitwise AND=%d\n",a&b);
 printf("Bitwise OR=%d\n",a|b);
 printf("Bitwise XOR=%d\n",a^b);
 printf("Bitwise complement=%d\n",(~25));
 for(i=0;i<=2;i++)
  printf("Right shift %d: %d\n",i,n>>i);
  for(i=0;i<=2;i++)
  printf("Left shift %d: %d\n", i,n<<i);
 getch();
}
