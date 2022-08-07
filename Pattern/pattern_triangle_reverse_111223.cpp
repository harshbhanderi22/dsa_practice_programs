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
            cout << row << " ";
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
 1 1 1 1 1      
2 2 2 2
3 3 3
4 4
5

*/