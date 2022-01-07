#include<iostream>
using namespace std;
//lets make recursive function to calculate the power of a to n
int power(int a,int n){
    //base case
    if (n==0){
        return 1;
    }
    if (a==0){
        return 0;
    }
    //rec case
    return a * power(a,n-1);
}

int main(){
    int a,n;
    cin>>a>>n;
    cout<<power(a,n)<<endl;

    return 0;
}