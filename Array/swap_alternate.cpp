#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<< " ";
    }
}

void swap_alternate(int arr[],int size){
    int i, j;
    for (i = 0,j=1; i < size-1; i=i+2,j=j+2)
    {
        swap(arr[i], arr[j]);
    }
    printArray(arr, size);
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int a[100];
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "element " << (i + 1) << ": ";
        cin >> a[i];
    }
    
    printArray(a, n);
    cout << endl
         << "After Swapping" << endl;
    swap_alternate(a, n);
}