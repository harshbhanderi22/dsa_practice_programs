#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char ch = 'A';
    int row = 1;
    while (row<=n)
    {
        
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

/** 
 A B C D E 
F G H I J
K L M N O
P Q R S T
U V W X Y

*/