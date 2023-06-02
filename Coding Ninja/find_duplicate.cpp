#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector < int > findDuplicates(vector < int >  arr, int n) {
    
    vector<int> ans;
    sort(arr.begin(),arr.end());
    for(int i = 0 ;i<n;i++){
        if(arr[i]==arr[i+1]){
             ans.push_back(arr[i]);
        }
    }
    for (int i = 0; i < ans.size();i++){
        cout << ans[i] << endl;
    }
    
    return ans;
}

int main(){
    vector<int> our = findDuplicates({    0,3,2,3,4
}, 5);
    
}