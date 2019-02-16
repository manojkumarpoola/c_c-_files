#include <iostream>
using namespace std;
int main()
 {
   int num, flag = 0;
   cout << "Enter a number \n";
   cin  >> num;
   for (int i = 1; i <= num; i++) 
   {
     if ( i * i == num) 
	 {
         flag = 1;
         break;
     }
     if ( i * i > num) 
	 {
     	break;
      } 
   }
   if (flag) 
   {
     cout << num << " is a perfect square";
   } 
   else 
   {
     cout << num << " is not a perfect square";
   }
 return 0;
}

