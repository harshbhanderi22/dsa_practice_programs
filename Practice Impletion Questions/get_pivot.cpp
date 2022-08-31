#include<iostream>
using namespace std;

int get_pivot(int a[],int n){
    int start = 0;
    int end = n-1;
    while (start<end)
    {
        int mid = start + (end - start) / 2;
        if(a[mid]>=a[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return end;
}
int main(){
    int a[5] = {10,20,30,1,2};
    cout << get_pivot(a, 5);
}