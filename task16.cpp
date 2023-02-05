#include <iostream>
using namespace std;
main()
{
    int arr_1[2];
    int arr_size;
    cout << "Enter array size: ";
    cin >> arr_size;
    int arr_2[arr_size];
    cout << "Enter first element of array one: ";
    cin >> arr_1[0];
    cout << "Enter second element of array one: ";
    cin >> arr_1[1];
    for (int index=0 ; index<arr_size ; index++)
    {
    cout << "Enter a number: ";
    cin >> arr_2[index];
    }
    cout << arr_1[0] << " ";
    for (int index=0 ; index<arr_size ; index++)
    {
        cout << arr_2[index] << " ";
    }
    cout << arr_1[1];
}