// print no from 1 to n

#include<iostream>
using namespace std;

void print1_n(int n){
    if(n==1){
        cout<<1<<" ";
        return;
    }
    print1_n(n-1);
    cout<<n<<" ";
}


int main(){
    int n;
    cin>>n;
    print1_n(n);
    return 0;
}