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
   cout << "String length: " << count << endl;
   cout << "Reversed String:";
   for (int index=count; index>=0 ; index--)
   {
    cout <<name[index];
   }
   
   
   
}