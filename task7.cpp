#include <iostream>
using namespace std;
main()
{
   int array_size;
   int greatest=0;
   cout << "Enter array size ";
   cin >> array_size;
   int number[array_size];
   for (int index=0 ; index<array_size ; index++)
   {
     cout << "Enter a number "; 
     cin >>  number[index] ;
     greatest=number[0];
     if(greatest<number[index])
     {
        greatest=number[index];
     }
   }
  cout << "Greatest number is : " << greatest;
}