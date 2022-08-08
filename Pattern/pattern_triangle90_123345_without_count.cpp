#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int row = 1;
    while (row<=n)
    {
        int column = 0;
        while (column<row)
        {
            cout << row + column << " ";
            column++;
        }
        cout << endl;
        row++;
        }
    
}

/**
 1 
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/