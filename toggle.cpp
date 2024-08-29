#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    //msb finding
    int dig = log2(n)+1;
    int num = (1<<dig)-1;
    n ^= num;
    cout<<n;
    return 0;
}