#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int key){
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            index = i;
        }
    }
    return index;
}
int main(){
    int a[5] = {10, 80, 5, 7, 3};
    cout << "Given value found at index " << linearSearch(a, 5, 30);
}