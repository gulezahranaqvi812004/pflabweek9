#include <iostream>
using namespace std;
main()
{
   
   int array_size;
   cout << "Enter array size ";
   cin >> array_size;
   float cgpa[array_size];
   for (int index=0 ; index<array_size ; index++)
   {
     cout << "Enter CGPA of student "; 
     cin >>  cgpa[index] ;
   }
   for (int index=0 ; index<array_size ; index++)
   {
     cout << cgpa[index] << " ";
   }
}