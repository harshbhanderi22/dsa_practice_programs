#include<iostream>
using namespace std;

void printArray(int a[],int size){

    for (int i = 0; i < size; i++)
    {
        cout << a[i]<< " ";
    }
    cout << endl;
}

int main(){
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printArray(a, 10);

    //We can intialize whole array with zero by below line but cannot intialize with any other value
    int b[10] = {0};
    printArray(b, 10);

    //It will give 1 to 0 index and make all other element zero so we cannot intialize array with 1 by given line
    int c[10] = {1};
    printArray(c, 10);

    //We can use this method to intialize whole array with same value
    for (int i = 0; i < 10; i++)
    {
        c[i] = 1;
    }
    printArray(c, 10);

    //This will give us size of c array, sizeof() return total size of passed variable. 
    int csize = sizeof(c) / sizeof(int);
    cout << "Size of C is " << csize << endl;

    int d[10] = {1, 2};
    // Above formula will not good practice for d type array as we have requirment of ony 2 means size should be two
    // But from above formula size will be 10
    // Above formula will give size not length, Most of time we reuqire length
    int dsize = sizeof(d) / sizeof(int);
    cout << "Size of D is " << dsize << endl;
    

    //Same way, we can create array of different data types
    char charArray[10];
    float floatArray[10];
    bool boolArray[10];

    return 0;

    //Never pass variable in array size
    //Example, arr[size] is a bad practice
    //Directly use arr[100], If given in question than input length from 0-10000
    //then make array of 10000, arr[10000] untill you use pointer
}