#include<iostream>
using namespace std;

int power(int a, int n){
    if(n==0){
        return 1;
    }
    return a *power(a,n-1);
}

int fastPower(int a, int n){
    if(n==1){
        return a;
    }
    if(n%2==0){
        return fastPower(a,n/2) * fastPower(a,n/2);
    }
    else{
        return a * fastPower(a,(n-1)/2) * fastPower(a,(n-1)/2);
    }
}




int main(){

    // int a=2;
    // int n=5;
    int ans = power(2,5);
    int fastans = fastPower(3,5);
    cout<<ans<<endl;
    cout<<fastans;
    return 0;
}