#include <iostream>
using namespace std;

//ith bit is 0-indexed
int main(){
    int n;
    cin>>n;
    int i;
    cin>>i;
    if(n & (1<<i))  cout<<"Set";
    else    cout<<"Not Set";
    return 0;
}