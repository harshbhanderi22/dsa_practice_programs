#include<iostream>
using namespace std;

// We will compare all elements with arr[0] as, all element of first sorted araay will be greater than arr[0]
// but second sorted array's elements will not be bigger than arr[0] so can go to that elements by changing position of end.
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