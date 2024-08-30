#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    cin>>n>>i;
    //i is 0 indexed
    n ^= (1<<i);
    cout<<n;
}