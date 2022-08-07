#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int row = 1;
    while (row<=n/2)
    {

        //First Trianle
        int first = 1;
        int column = ((n / 2)-row+1);
        while (column)
        {
            cout << first<< " ";
            first++;
            column--;
        }

        //Second Triangle 
        int startc = (row - 1)*2;
        while (startc){
            cout << "* ";
            startc--;
        }

        //Third Triangle
        int lcolumn = ((n / 2)-row+1);
        while (lcolumn)
        {
            cout << lcolumn << " ";
            lcolumn--;
        }
        
        cout << endl;
        row++;
    }
    
}

/** 
1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/