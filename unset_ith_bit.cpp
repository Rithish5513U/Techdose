#include <bits/stdc++.h>
using namespace std;

//ith bit is considered by 0-based index

int main(){
    int n;
    cin >> n;
    int i;
    cin>>i;
    //checking the msb
    int dig = log2(n)+1;
    //converting to sequence of set bits
    int num = (1<<(dig))-1;
    //changing 0 for ith bit
    num ^= (1<<i);
    //unsetting the ith bit
    n &= num;
    cout<<n;
    return 0;
}