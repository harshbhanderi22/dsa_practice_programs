#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    char ch = 'A';
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout << ch << " ";
            j++;
        }
        cout << endl;
        ch++;
        i++;
        }
    
}

/**
A 
B B
C C C
D D D D
E E E E E
*/