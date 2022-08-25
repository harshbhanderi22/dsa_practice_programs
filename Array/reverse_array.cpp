#include<iostream>
using namespace std;

//Approach 1
void reverseArray1(int arr[],int size){
    for (int i = 0; i < (size/2); i++)
    {

        //Or We can use built in function swap(arr[start],arr[end])
        int temp = arr[i];
        arr[i] = arr[size-1 - i];
        arr[size-1 - i] = temp;
    }
    cout << "Approch One" << endl;
    cout << "Array Reversed" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Appproach 2
void reverseArray2(int arr[],int size){
    int start = 0;
    int end = size - 1;
    while (end>start)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout << "Approch Two" << endl;
    cout << "Array Reversed" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }  

    
}

int main()
{
    int a[5] = {2,3,4,5,9};
    reverseArray1(a, 5);
    reverseArray2(a, 5);
}