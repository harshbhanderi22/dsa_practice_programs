#include<iostream>
using namespace std;

//this function will only return integer part of square root
//Example, 8-> 2
 int search(int x){
        int start = 0;
        int end = x;
         int ans =  -1;
        while(start<=end){
            int mid = start+(end-start)/2;
             int sqr= mid*mid;
            if(sqr==x){
                return mid;
            }
            else if(sqr>x){
                  end = mid - 1;
            }
            else{
                ans = mid;
                start = mid +1;
            }
        }
        return ans;
    }

//It will give fraction part
//We have to pass integer solution , acutal number and precision we want in our answer
double fraction(int precision, int x,int n){
    double factor = 1;
    double ans = x;
    for (int i = 0; i < precision; i++)
    {
        factor /= 10;
        for (double j = ans; j * j < n;j+=factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout <<"Enter the number: ";
    cin >> n;
     int temp = search(n);
    cout << "Sqrt is " << fraction(3, temp,n);
}