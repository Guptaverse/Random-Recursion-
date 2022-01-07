//Write a Recursive function to multiply two numbers (a,b) without using * operator 
#include<iostream>
using namespace std;
int multiplyWithoutStar(int a,int b){
    //base case
    if(a==0 or b==0){
        return 0;
    }
    // rec case
    return a + multiplyWithoutStar(a,b-1);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<multiplyWithoutStar(a,b)<<endl;
    return 0;
}