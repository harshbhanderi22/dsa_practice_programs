#include<iostream>
using namespace std;

int main(){
    int a = 2, b = 4;
    int c = 17;

    //Bitwise Operator
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a ^ b = " <<( a ^ b) << endl;

    //Left and right Shift Operator
    cout << "c << 1 = " <<(c  << 1) << endl;
    cout << "c << 2 = " <<(c << 2) << endl;
    cout << "c >> 1 = " <<(c  >> 1) << endl;
    cout << "c >> 2 = " <<(c  >> 2) << endl;

    //For positive number added bit in left and right shift operation will be 0
    //For negative number it can be 0 or 1 depends on compiler


    //Post-increment and pre-increment
    int i = 5;
    cout << i++ << endl; //print 5, after execution become 6
    cout << ++i << endl; //print 7
    cout << i-- << endl; //print 7, then become 6
    cout << --i << endl; //print 5
}