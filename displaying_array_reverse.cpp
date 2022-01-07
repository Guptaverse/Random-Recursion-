#include <bits/stdc++.h>
using namespace std;

void reverse_arr_print(int *arr,int n){
    for(int i = n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}

void reverse_arr(int *arr , int n,int i){
    //base case
    if(i==n){
        return;
    }
    //recursive case
    reverse_arr(arr,n,i+1);
    cout<<arr[i]<<" ";
}
int maximum_element_arr(int *arr,int n,int i){
    //base case
    if(i==n){
        return arr[i];
    }
    //recursive case
    int misa = maximum_element_arr(arr,n,i+1);//misa : max of smallest array
    if(misa>arr[i]){
        return misa;
    }
    else{
        return arr[i];
    }
}
int minimum_element_arr(int *arr,int n,int i){
    //base case
    if(i==n){
        return arr[i];
    }
    //recursive case
    int misa = minimum_element_arr(arr,n,i+1);//misa : min of smallest array
    if(misa<arr[i]){
        return misa;
    }
    else{
        return arr[i];
    }
}
int first_occ_in_arr(int *arr,int n,int i,int key){
    //base case
    if(i==n){
        return -1;
    }
    //recursive case
    if(key==arr[i]){
        return i;
    }
    else{
         return first_occ_in_arr(arr,n,i+1,key);
    }
    return -1;
}
int main(){
    int arr[] ={4,6,7,2,1,7,9};
    int arr1[] ={3,6,4,9,0};
    int arr2[] ={3,4,7,6};
    int n = sizeof(arr)/sizeof(int);
    int n1 = sizeof(arr1)/sizeof(int);
    int n2 = sizeof(arr2)/sizeof(int);
    int temp=0,j=n-1;
    for(int i=0;i<n/2;i++){        //complexity o(n/2)
        temp=arr[i];
        arr[i] = arr[j];
        arr[j]=temp;
        j--;
        // cout<<j<<" ";
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse_arr_print(arr1,n1);//using function call:for loop direct printing array in reverse order
    cout<<endl;
    reverse_arr(arr2,n2,0);//using recursion
    cout<<endl;
    cout<<maximum_element_arr(arr,n,0)<<endl;
    cout<<minimum_element_arr(arr,n,0)<<endl;
    cout<<first_occ_in_arr(arr,n,0,7)<<endl;
    return 0;
}