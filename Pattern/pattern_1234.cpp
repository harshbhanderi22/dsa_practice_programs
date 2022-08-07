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
        int j = 1;
        while (j <= c)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

/**
 1 2 3 4 
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/