#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int row = 1;
    while (row<=n)
    {
        int column = 1;
        int count = row;
        while (column <= row)
        {
            cout << count << " ";
            column++;
            count++;
        }
        cout << endl;
        row++;
        }
    
}