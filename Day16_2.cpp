#include<iostream>
using namespace std;
class MNO 
{
private:
   char ch='A';
   int num=15;
public:
   friend class ABC;
};
class ABC 
{
public:
   void disp(MNO obj)
   {
      cout<<obj.ch<<endl;
      cout<<obj.num<<endl;
   }
};
int main() {
   ABC obj;
   MNO obj2;
   obj.disp(obj2);
   return 0;
}
