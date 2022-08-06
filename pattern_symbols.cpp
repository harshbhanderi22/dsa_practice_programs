#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout << "Enter the number of row ";
    cin >> r;
    cout << "Enter the number of column ";
    cin >> c;
    int i= 0;
    while (i<r)
    {
        int j = 0;
        while (j<c)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    
}