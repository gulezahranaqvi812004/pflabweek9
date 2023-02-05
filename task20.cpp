#include <iostream>
using namespace std;
main()
{
   string name;
   int index=0;
   cout << "Enter your name: ";
   getline(cin , name);
   while (name[index] != '\0')
   {
    if(name[index] != 'a'&& name[index] != 'e'&& name[index] != 'i'&& name[index] != 'o' && name[index] != 'u')
    {
     cout << name[index];   
    }
    index++;
   } 
}