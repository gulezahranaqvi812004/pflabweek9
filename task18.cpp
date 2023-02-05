
#include <iostream>
using namespace std;
main()
{
  int array_size;
  float sum;
  cout << "Enter total number of resistors: ";
  cin >> array_size;
  float resistance[array_size];
  for (int index = array_size ; index > 0 ; index--)
  {
    cout << "Enter value of resistor: " ;
    cin >> resistance[index];
    sum=sum+resistance[index];
  }
  cout << "Total resistance: " << sum << " ohms";


}