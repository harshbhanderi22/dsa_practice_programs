#include<iostream>
using namespace std;

//We wil divide problem in two part
//First we will find first occurance or we can say left most occurance of key
//Then we will find last occurance or we can right most occurance of key

int first(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start<=end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid]==key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid]<key)
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }  
    }
    return ans;
}

int last(int arr[],int n,int key){
    int start = 0;
    int end = n - 1; 
    int ans = -1;

    while (start<=end)
    {
        int mid = start + (end-start)/2;
        if (arr[mid]==key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid]<key)
        {
            start = mid + 1;
            cout << ans;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int arr[6] = {1, 2, 3, 3, 3, 7};
    int left = first(arr, 6, 3);
    int right = last(arr, 6, 3);
    cout << left << " "<< right;
    return 0;
}