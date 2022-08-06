#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int row = 0;
    int count = 1;
    while (row<n)
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