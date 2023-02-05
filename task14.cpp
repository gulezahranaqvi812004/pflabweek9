#include <iostream>
using namespace std;
main()
{
   string name;
   int count;
   int vowel=0;
   cout << "Enter your name: ";
   getline(cin , name);
   count=name.length();
   for (int index=count ; index>=0 ; index--)
   {
    if(name[index]== 'a'||name[index]== 'e'||name[index]== 'i'||name[index]== 'o'||name[index]== 'u')
    {
        vowel++;
    }
   }
   cout << "Number of vowels: " << vowel;
}