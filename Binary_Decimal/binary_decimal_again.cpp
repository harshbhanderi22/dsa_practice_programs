#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 0;
    int answer = 0;
    while (n!=0)
    {
        int digit = n % 10;
        answer = answer + (digit * pow(2, i));
        i++;
        n = n / 10;
    }
    cout << answer;
}