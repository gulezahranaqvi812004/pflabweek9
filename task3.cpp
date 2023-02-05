#include <iostream>
using namespace std;
main()
{
   int number;
   bool isFound=false; 
   int array_size;
   cout << "Enter array size ";
   cin >> array_size;
   float present[array_size];
   for (int index=0 ; index<array_size ; index++)
   {
     cout << "Enter a number "; 
     cin >>  present[index] ;
   }
   cout << "Enter the number you want to find: ";
   cin >> number;
   for (int index=0 ; index<array_size ; index++)
   {
    if (number ==present[index] )
    {
        isFound=true;
        break;
    }
   }
   if (isFound == true)
   {
    cout << "Number found" ;
   }
   else
   {
    cout << "Not found";
   }
   
}