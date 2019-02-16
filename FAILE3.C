#include<stdio.h>
#include<conio.h>
int main()
{
 FILE *fs,*ft;
 char c;
 clrscr();
 fs=fopen("file3.c","r");
 if(fs==NULL)
 {
  ptintf("cant open\n");
  exit(0);
 }
  ft=fopen("file4.c","w");
  if(ft==NULL)
  {
   printf("cant open target file\n");
   fclose(fs);
   exit(0);
  }
  while(1)
  {
   c=fgetc(fs);
   if(c==EOF)
   break;
   else
   fputc(c,ft);
  }
  fclose(fs);
  fclose(ft);
}
