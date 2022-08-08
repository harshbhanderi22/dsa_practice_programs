#include<iostream>
using namespace std;

int main(){
    int a, b;
    char c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the Second number: ";
    cin >> b;
    cout << "Enter the Operation: ";
    cin >> c;
    switch (c)
    {
    case '+':
        cout << "Sum of two number is " << (a + b) << endl;
        break;
    case '-':
        cout << "Sum of two number is " << (a - b) << endl;
        break;
    case '*':
        cout << "Sum of two number is " << (a * b) << endl;
        break;
    case '/':
        cout << "Sum of two number is " << (a / b) << endl;
        break;        
    
    default:
        cout << "Please enter valid operation" << endl;
        break;
    }

}