#include<iostream>
using namespace std;

int sumOfArray(int arr[],int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main(){
    int a[10] = {10, 20, 80, 60, 50};
    cout << "Sum of given array is " << sumOfArray(a, 10);
    return 0;
}