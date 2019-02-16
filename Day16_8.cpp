#include <iostream>
using namespace std;
int main()
{
  int one, two, three, four, five, six, seven, eight, nine, ten;
  int count;
  cout << "This program accepts 10 integer numbers, the returns\n";
  cout << "the sum of all positive numbers, the sum of all negative\n";
  cout << "numbers and the sum of all the numbers." << endl;
  cout << "Enter 10 whole numbers, each followed by 'Enter': \n ";
  cin >> one >> two >> three >> four >> five >> six >> seven >> eight >> nine >> ten;
  cout << endl;
  cout << "The sum of all 10 numbers = ";
  cout << one + two + three + four + five + six + seven + eight + nine + ten;
  cout << endl;
  return 0;
}
