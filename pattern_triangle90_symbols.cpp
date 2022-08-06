#include<iostream>
using namespace std;

int main(){
    int r;
    cout << "Enter the number of Rows ";
    cin >> r;
    int i = 1;
    while (i<=r)
    {
        int j = 1;
        while (j<=i)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    
}