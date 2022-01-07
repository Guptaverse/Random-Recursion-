#include<iostream>
using namespace std;

int firstOcc(int *a,int n,int key){
    if(n==0){
        return -1;
    }
    //rec case
    if(a[0]==key){
        return 0;
    }
    int i = firstOcc(a+1,n-1,key);
    if(i==-1){
        return -1;
    }
    return i+1;
}
//with different style(we are converting the iterative process into recursive )
int linearSearch(int *a,int i,int n,int key){
    //base case: this is similar to stopping condition of for loop 
    if(i==n){
        return -1;
    }
    //rec case: 
    if(a[i]==key){
        return i;
    }
    return linearSearch(a,i+1,n,key); //updating the value of i
}
//lastOccurence 
int lastOcc(int *a,int n,int key){
    if(n==0){
        return -1;
    }
    //rec case
    int i= lastOcc(a+1,n-1,key);
    if(i==-1){
        if(a[0]==key){
            return 0;
        }
        else{
            return -1;
        }
    }
    return i+1;
}
void allOcc(int *a,int i,int n,int key){
    if(i==n){
        return;
    }
    if(a[i]==key){
        cout<<i<<",";
    }
    allOcc(a,i+1,n,key);
}
int storeOcc(int *a,int i,int n,int key,int *out,int j){
    if(i==n){
        return j;
    }
    // 
    if(a[i]==key){
        out[j]=i;
        //increment j to accomodate current occ
        return storeOcc(a,i+1,n,key,out,j+1);
    }
    //j will remain same
    return storeOcc(a,i+1,n,key,out,j);
}
int main(){
    int arr[]={1,2,3,17,5,6,17};
    int key=7;
    int n= sizeof(arr)/sizeof(int);
    cout<<firstOcc(arr,n,key)<<endl;
    cout<<linearSearch(arr,0,n,key)<<endl;
    cout<<lastOcc(arr,n,key)<<endl;
    int output[100];
    for(int k=0;k<100;k++){
        cout<<storeOcc(arr,0,n,key,output,0);
    }

    
    return 0;
}

