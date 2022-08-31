#include<iostream>
using namespace std;

// We can total count just by cheking first and last occurance of key
//count = (last-first)+1
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
    int arr[5] = {1, 2, 2, 2, 4};
    int left = first(arr, 5, 2);
    int right = last(arr, 5, 2);
    int count = (right - left) + 1;
    cout << count;
}