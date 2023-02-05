#include <iostream>
using namespace std;
main()
{
   string name;
   char null='\0';
   int index=0;
   cout << "Enter your name: ";
   getline(cin , name);
   cout << "Location of characters: " << endl;
   while(name[index] != null)
   {
    cout << name[index] << " at " << index << endl;
    index++;
   }
   
}