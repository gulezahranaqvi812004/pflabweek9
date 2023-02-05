#include <iostream>
using namespace std;
main()
{
  int array_size=4;
  float price;
  float amount=0;
  float total=0;
  float series[array_size];
  for (int index=0 ; index < array_size ; index++)
  {
    cout << "Enter amount: ";
    cin >> series[index];
    if(index == 0)
    {
      amount=(series[0])*0.25;
      total=total+amount;
    }
    if(index == 1)
    {
      amount=(series[1])*0.1;
      total=total+amount;
    }
    if(index == 2)
    {
      amount=(series[2])*0.05;
      total=total+amount;
    }
    if(index == 3)
    {
      amount=(series[3])*0.01;
      total=total+amount;
    }
  }
 cout << "Enter price: ";
 cin >> price;
 if(total< price)
 {
    cout << "False";
 }
 else
 {
    cout << "True";
 }
}