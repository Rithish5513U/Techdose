#include <bits/stdc++.h>
using namespace std;

vector<int> segmentedSeive(int left, int right){
    vector<bool> primes(sqrt(right)+1, true);
    for(int i=2; i*i<=right; i++){
        if(primes[i]){
            for(int j=i*i; j<=right; j+=i)
                primes[j] = false;
        }
    }
    vector<bool> primesInRange(right - left + 1, true);
    for(int i=2; i*i<=right; i++){
        if(primes[i]){
            for(int j = ceil(left/i); j*i<=right; j++){
                primesInRange[(j*i)-left] = false;
            }
        }
    }
    vector<int> ans;
    for(int i=0; i<primesInRange.size(); i++){
        if(primesInRange[i]){
            ans.push_back(i+left);
        }
    }
    return ans;
}

int main(){
    int low, high;
    cin>>low>>high;
    vector<int> arr = segmentedSeive(low, high);
    for(int i: arr) cout<<i<<' ';
    return 0;
}