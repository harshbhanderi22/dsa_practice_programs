#include<iostream>
using namespace std;

int max(int arr[],int size){
    int maxi = arr[0]; //We can also use max = INT_MIN
    for (int i = 0; i < size; i++)
    {
        // if (arr[i]>maxi)
        // {
        //     maxi = arr[i];
        // }
        //Using In Built Funtion
        maxi = max(maxi, arr[i]);
        //It will return maximum from given two argument
    }
    return maxi;
}

int min(int arr[],int size){
    int mini = arr[0]; //We can also use min = INT_MAX
    for (int i = 0; i < size; i++)
    {
        // if (arr[i]<mini)
        // {
        //     mini = arr[i];
        // }
        //Using In Built Funtion
        mini = min(mini, arr[i]);
        //It will return minimum from given two argument
    }
    return mini;
}

int main(){
    int a[5] = {1,2,3,4,5};
    int b[5] = {5, 4, 3, 2, 1};
    cout << "Maximum Element for a is " << max(a,5) << endl;
    cout << "Minimum Element for a is " << min(a,5) << endl;
    cout << "Maximum Element for b is " << max(b,5) << endl;
    cout << "Minimum Element for b is " << min(b,5) << endl;
     
}