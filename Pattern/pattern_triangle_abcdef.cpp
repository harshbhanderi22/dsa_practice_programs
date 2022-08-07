#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int row = 1;
    char count = 'A';
    while (row<=n)
    {
        int column = 1;
        while (column<=row)
        {
            cout << count << " ";
            column++;
            count++;
        }
        cout << endl;
        row++;
    }
    
}

/**
 A 
B C
D E F
G H I J
K L M N O

*/