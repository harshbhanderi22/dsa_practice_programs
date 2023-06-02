#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<string> a;

    a.push("harsh");
    a.push("bhanderi");
    a.push("hb");

    cout << "Top Element is " << a.top() << endl;
    a.pop();
    cout << "Top Element is " << a.top() << endl;

    cout << "Size of Stack is " << a.size() << endl;

}