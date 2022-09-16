#include<iostream>
using namespace std;

void selection(int a[],int n){
    for(int i=0;i<n;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        int temp = a[i];
        a[i]=a[min];
        a[min]=temp;
    }
     for(int  i=0;i<5;i++){
        cout << a[i] << " ";
    }
}

int main(){
    int a[5]={5,4,3,2,1};
    selection(a,5);
    
}