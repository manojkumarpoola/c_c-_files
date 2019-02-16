#include<stdio.h>
#include<conio.h>
int main()
{
 FILE *fp;
 char c;
	int L=0,T=0,C=0,S=0;
 clrscr();
 fp=fopen("file2.c","r");
 if(fp==NULL)
 {
	 puts("cant open");
	 exit(0);
 }
 while(1)
 {
	 c=fgetc(fp);
	 if(c==EOF)
	 break;
	 C++;
	 if(c=='\n')
	 L++;
	 if(c=='\t')
	 T++;
	 if(c==' ')
	 S++;
 }
 fclose(fp);
 printf("No of chars:%d\n",C);
 printf("No of Lines:%d\n",L);
 printf("No of Tabs:%d\n",T);
 printf("No of spaces:%d\n",S);
}
