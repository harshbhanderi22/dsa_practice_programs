#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    stack<int> reverse_stack;
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> ans;

    for (int i = 0; i < v.size();i++){
        reverse_stack.push(v[i]);
    }

    for (int i = 0; i < v.size(); i++)
    {
        ans.push_back(reverse_stack.top());
        reverse_stack.pop();
    }

    for (int i = 0; i < v.size();i++){
        cout << ans[i] << endl;
    }
}