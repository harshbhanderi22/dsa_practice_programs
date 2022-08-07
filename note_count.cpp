#include<iostream>
using namespace std;

int main(){
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0;
    
    switch (amount>=100)
    {
    case 1:
        n100 = amount / 100;
        amount = amount - (100 * n100);
    }
    switch (amount>=50)
    {
    case 1:
        n50 = amount / 50;
        amount = amount - (50 * n50);
    }
    switch (amount>=20)
    {
    case 1:
        n20 = amount / 20;
        amount = amount - (20 * n20);
    }
    switch (amount>=10)
    {
    case 1:
        n10 = amount / 10;
        amount = amount - (10 * n10);
        break;
    }

    cout << "100 Notes: " << n100 << endl;
    cout << "50 Notes: " << n50 << endl;
    cout << "20 Notes: " << n20 << endl;
    cout << "10 Notes: " << n10 << endl;
}