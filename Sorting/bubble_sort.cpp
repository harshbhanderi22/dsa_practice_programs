#include<iostream>
using namespace std;

void bubblesort(int a[],int n){
    for(int i=0;i<n;i++){

        //It will be optimised as it will give indication if all things are sorted
        //For sorted array, no swapping will happen 
        bool swapped = false;
        for(int j = 0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapped = true;
            }
        }

        //If swapping will not happend which means array is already sorted so no need to check other levels.
        if(swapped==false){
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout << a[i]<<" ";
    }
}
int main(){
    int a[5]={5,4,3,2,1};
    bubblesort(a,5);

}