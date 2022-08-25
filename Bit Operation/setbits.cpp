#include<iostream>
using namespace std;

int setbits(int a,int b){
    int as = 0, bs = 0;
    while (a!=0)
    {
        if (a&1==1)
        {
            as++;
        }
        a = a >> 1;
    }
     while (b!=0)
    {
        if (b&1==1)
        {
            bs++;
        }
        b = b >> 1;
    }
    return (as + bs);
}
int main(){
    int a, b;
    cin >> a >> b;
    int ans = setbits(a, b);
    cout << "Setbits for given functions is " << ans << endl;
}