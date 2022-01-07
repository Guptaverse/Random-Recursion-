#include<iostream>
using namespace std;

int print_fib(int n){
    if(n==0 or n==1){
        // cout<<n<< " "<<endl;
        return n;
    }
    int s= print_fib(n-1) + print_fib(n-2);
    cout<<s<<" "<<endl;
    return 0;

}

int main(){
    int n=5;
    print_fib(n);
    return 0;
}