#include<iostream>
using namespace std;

string remove(char s[]){
    // base case
    if(s[0] == '\0') return "";

    if(s[0]=='x'){
        int i = 1;
        for(;s[i]!='\0';i++){
            s[i-1]=s[i];
        }
        s[i-1] = s[i];
        remove(s);
    }
    else{
        remove(s+1);
    }
    return s;
}

int main(){
    char s[100];
    cin>>s;
    string st = remove(s);
    cout<<st<<endl;

}