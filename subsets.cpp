#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(int n, vector<int> arr){
    vector<vector<int>> ans;
    for(int i=0; i<(1<<n); i++){
        vector<int> subset;
        for(int j=0; j<n; j++){
            if(i & (1<<j)){
                subset.push_back(arr[j]);
            }
        }
        ans.push_back(subset);
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)  cin>>arr[i];
    vector<vector<int>> res = subsets(n, arr);
    for(int i=0; i<res.size(); i++){
        cout<<'[';
        for(int j=0; j<res[i].size(); j++){
            cout<<res[i][j];
            if(j != res[i].size()-1)    cout<<',';
        }
        cout<<']';
    }
    return 0;
}