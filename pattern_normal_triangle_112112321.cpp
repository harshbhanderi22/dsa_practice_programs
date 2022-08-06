#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space >= 0)
        {
            cout << " " << " ";
            space--;
        }
        int column = 1;
        while (column <= row)
        {
            cout << column << " ";
            column++;
        }
        int start = row - 1;
        while (start)
        {
            cout << start<< " ";
            start--;
        }
        
        cout << endl;
        row++;
    }
}

/**
          1 
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
  1 2 3 4 5 4 3 2 1

  */