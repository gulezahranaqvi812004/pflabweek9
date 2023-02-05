#include <iostream>
using namespace std;
main()
{
   string name;
   char null='\0';
   int count=0;
   int index=0;
   cout << "Enter your name: ";
   getline(cin , name);
   count=name.length();
   if(count%2 == 0)
   {
    cout << "Length is even";
   }
   else
   {
    cout << "Length id odd";
   }
  
   
   
   
}