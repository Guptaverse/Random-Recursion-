#include<iostream>
using namespace std;

int length(char s[]){
    // base case
    if(s[0]=='\0') return 0;

    int smallStrLength = length(s+1);
    return 1+smallStrLength;
}

int main(){
    char s[100];
    cin>>s;

    int l = length(s);
    cout<<l<<endl;
}