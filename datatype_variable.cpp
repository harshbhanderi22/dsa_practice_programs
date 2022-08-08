#include<iostream>
using namespace std;

int main(){

    //Simple Variable types
    int a = 22;
    float b = 22.8;
    double c = 22.81;
    char h = 'h';
    bool y = true;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << h << endl;
    cout << y << endl;

    //Display size of any data variable
    cout << "Size of variable a is " << sizeof(a) << endl;


    //Example of type casting here int ta will print ASCII value of h which is going to be integer
    int ta = 'h';
    cout << ta << endl;

    //ASCII value of @ is 64 so if we give integer number to character data type it will give outout based on ASCII output.
    char tc = 64;
    cout << tc << endl;

    // Negative nmbers are stored in memory using 2's complement.

    //unsigned is used to store only positive numbers it wil not store minus number and range of int wil become 0-(2^32-1) from (-2^32-1)-(2^32-1)
    unsigned int ua = -32;
    cout << ua << endl;

    //There are many operators which we are going to use in normal programs such as +,-,*,/,%,<,>,!=,==,>=,<=,!
}