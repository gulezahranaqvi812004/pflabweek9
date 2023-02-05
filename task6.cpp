#include <iostream>
using namespace std;
main()
{
   int array_size;
   int smallest=0;
   cout << "Enter array size ";
   cin >> array_size;
   int number[array_size];
   for (int index=0 ; index<array_size ; index++)
   {
     cout << "Enter a number "; 
     cin >>  number[index] ;
     smallest=number[0];
     if(smallest>number[index])
     {
        smallest=number[index];
     }
   }
  cout << "Smallest number is : " << smallest;
}