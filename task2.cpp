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
     sum = sum + number[index];
   }
     average=sum/array_size;
     cout << "Sum of numbers : " <<  sum << endl;
     cout << "Average: " << average;
}