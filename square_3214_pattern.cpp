#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter the number of row ";
    cin >> r;
    cout << "Enter the number of column ";
    cin >> c;
    int i = 1;
    while (i <= r)
    {
        int j = 1;
        int n = c;
        while (j <= c)
        {
            cout << (n-j+1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}