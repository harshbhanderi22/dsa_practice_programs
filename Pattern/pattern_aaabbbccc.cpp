#include<iostream>
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;
    char ch = 'A';
    int row = 1;
    while (row<=r)
    {
        int column = 1;
        while (column<=c)
        {
            cout << ch << " ";
            column++;
        }
        cout << endl;
        ch++;
        row++;
    }
    
}

/**
 A A A A A 
B B B B B
C C C C C
D D D D D
E E E E E
*/