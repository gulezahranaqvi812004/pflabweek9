#include <iostream>
using namespace std;
main()
{
   string name;
   bool isFound=false;
   char find;
   int count;
   cout << "Enter your name: ";
   getline(cin , name);
   cout << "Enter the character you want to find: ";
   cin >> find;
   count=name.length();
   if ( name[count-1]== find)
   {
    cout << "Exist ";
   }
   else 
   {
    cout << "Does not exist";
   }
}