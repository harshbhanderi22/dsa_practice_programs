#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int row = 1;
    while (row<=n)
    {
        int column = 1;
        while (column<=n)
        {
            char ch = 'A';
            ch = ch + (row + column - 2);
            cout <<ch << " ";
            column++;
        }
        cout << endl;
        row++;
        }
    
}

/**
A B C D E 
B C D E F 
C D E F G 
D E F G H
E F G H I
*/