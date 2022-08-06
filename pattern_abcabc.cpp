#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int row = 1;
    while (row<=n)
    {
        char ch = 'A';
        int column = 1;
        while (column<=n)
        {
            cout << ch << " ";
            ch++;
            column++;
        }
        cout << endl;
        row++;
        }
    
}