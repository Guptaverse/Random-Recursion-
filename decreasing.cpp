#include<iostream>
using namespace std;
//lets make a function to print the decreasing sequence
void dec(int n){
    //base case
    if(n==0){
        return;
    }
    //rec case
    cout<<n<<" ";
    dec(n-1);
}

int main(){
    int n;
    cin>>n;
    dec(n);
    return 0;
}