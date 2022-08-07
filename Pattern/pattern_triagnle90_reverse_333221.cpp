#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int column = 1;
        while (column <= (n-row+1))
        {
            cout << n-row+1 << " ";
            column++;
        }
        int space = n - row;
        while (space >= 0)
        {
            cout << " ";
            space--;
        }
        cout << endl;
        
        row++;
    }
}

/**
 5 5 5 5 5      
4 4 4 4
3 3 3
2 2
1

*/