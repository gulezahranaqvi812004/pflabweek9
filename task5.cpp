#include <iostream>
using namespace std;
main()
{
   int array_size;
   int multiply;
   int result;
   cout << "Enter array size ";
   cin >> array_size;
   int number[array_size];
   for (int index=0 ; index<array_size ; index++)
   {
     cout << "Enter a number "; 
     cin >>  number[index] ;
   }
   cout << "Enter the number for multiplication: ";
   cin >> multiply;
   for(int index=array_size-1 ; index>=0 ; index--)
   {
     result=multiply*number[index];
     cout << result << " ";
   }
}