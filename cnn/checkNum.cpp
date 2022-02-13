// Given an array of length N and an integer x, you need to find if x is present in the array or not . Return true or false

#include<iostream>
using namespace std;

bool check(int a[],int n,int key){
    if(n==0){
        return false;
    }
    else if(a[0]==key){
        return true;
    }
    return check(a+1,n-1,key);
}

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    bool ans = check(a,n,k);
    cout<<ans;
    return 0;
}