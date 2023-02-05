#include <iostream>
using namespace std;
main()
{
   string name;
   char null='\0';
   int index=0;
   cout << "Enter your name: ";
   getline(cin , name);
   while(name[index] != null)
   {
    index++;
   }
   cout << "Numbers of characters: " <<  index;
   
}