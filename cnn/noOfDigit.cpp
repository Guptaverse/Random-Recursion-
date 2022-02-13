// count no of digits in given Number
// for eg 234 has 3 digits


#include<iostream>
using namespace std;

int count(int n){
    if(n==0){
        return 0;
    }
    int small = count(n/10);
    int ans = small + 1;
    return ans;
}


int main(){
    int n;
    cin>>n;
    // count(n);
    cout<<count(n);
    return 0;
}