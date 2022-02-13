//Given an array of length N, you need to find and return the sum of all elements of the array


#include<iostream>
using namespace std;

int sum(int a[],int n){
    if(n==0){
        return 0;
    }
    // int temp = sum(a+1,n-1);
    // temp = a[0]+temp;
    // return temp;

    // or

    return a[0] + sum(a+1,n-1);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int ans = sum(a,n);
    cout<<ans;
    return 0;
}