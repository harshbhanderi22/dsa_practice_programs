#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter the number of row ";
    cin >> r;
    cout << "Enter the number of column ";
    cin >> c;
    int i = 1;
    while (i <= r)
    {
        int j = 0;
        while (j < c)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

/**
 1 1 1 1 1 
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
*/