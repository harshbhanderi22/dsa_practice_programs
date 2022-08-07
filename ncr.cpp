#include<iostream>
using namespace std;

int factorial(int n){
    int result = 1;
    if(n==0 || n==1){
        return 0;
    }
    for (int i = 2; i <=n; i++)
    {
        result *= i;
    }
    return result;
}

int main(){
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
    int ans = factorial(n) / (factorial(r) * factorial(n - r));
    cout << "NcR for given input is : " << ans << endl;
}