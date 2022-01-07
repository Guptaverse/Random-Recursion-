#include<iostream>
using namespace std;

//here we create a funtion for recursion
int fact(int n){
    //first write the base case
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}