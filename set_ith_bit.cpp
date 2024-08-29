#include <iostream>
using namespace std;

//ith bit is 0-based
int main(){
    int n;
    cin >> n;
    int i;
    cin>>i;
    n = n | (1<<i);
    cout<<n;
    return 0;
}