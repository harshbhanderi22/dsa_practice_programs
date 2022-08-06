#include<iostream>
using namespace std;

int main(){
    int r, c;
    cout << "Enter th e number of rows";
    cin >> r;
    cout << "Enter the number of columns";
    cin >> c;
    int count = 1;
    int i = 0;
    while (i<r)
    {
        int j = 0;
        while (j<c)
        {
            cout << count << " ";
            j++;
            count++;
        }
        cout << endl;
        i++;
    }
    
}