#include <iostream>
using namespace std;
main()
{
   int array_size;
   int sum=0;
   float average;
   cout << "Enter array size ";
   cin >> array_size;
   float number[array_size];
   for (int index=0 ; index<array_size ; index++)
   {
     cout << "Enter a number "; 
     cin >>  number[index] ;
   }
   cout << "Reversed order: " << endl;
   for ( int index=array_size-1 ; index>=0 ; index--)
   {
    cout << number[index] << endl;
   } 
}