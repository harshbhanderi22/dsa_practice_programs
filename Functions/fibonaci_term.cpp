#include<iostream>
using namespace std;

int fibonaci(int n){
    int a = 0, b = 1;
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    
    
    int next = 0;
    for (int i = 2; i < n; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }
    return next;
}

int main(){
    int n;
    cout << "Enter term number: ";
    cin >> n;
    int ans = fibonaci(n);
    cout << "Nth term for fibonaci series is " << ans;
}