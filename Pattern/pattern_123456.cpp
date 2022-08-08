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

/** 
 1 2 3 4 5 
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/