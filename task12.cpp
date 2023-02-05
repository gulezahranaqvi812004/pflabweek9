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
   for (int i=count ; i>=0 ; i--)
   {
    if(find == name[i])
    {
        isFound=true;
        break;
    }
   }
   if ( isFound== true)
   {
    cout << "Exist ";
   }
   else 
   {
    cout << "Does not exist";
   }
}