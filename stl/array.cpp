#include <iostream>
#include <array>

using namespace std;

int main()
{

    array<int, 4> a = {1, 2, 3, 4};

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }

    cout << "Size of array is " << a.size() << endl;
    cout << "Array is Empty or not " << a.empty() << endl;
    cout << "First element of array is " << a.front() << endl;
    cout << "Last element of array is " << a.back() << endl;
    cout << "Element at 2 is " << a.at(2) << endl;
 }