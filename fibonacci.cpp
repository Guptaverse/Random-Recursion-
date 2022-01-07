#include<iostream>
using namespace std;
//lets make a function to compute nth fibonacci number
int fibb(int n){
    //lets make a base case 
    if(n==0 or n==1){
        return n;
    }
    return fibb(n-1)+fibb(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fibb(n)<<endl;
    return 0;
}