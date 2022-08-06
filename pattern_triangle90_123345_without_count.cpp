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