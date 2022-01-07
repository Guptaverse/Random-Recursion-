#include<iostream>
using namespace std;

int binarySearch(int a[],int l,int r,int key){
    if(r>=l){
        int mid = l + (r-l)/2;
    
        if(a[mid]==key){
            return mid;
        }
  
        if(a[mid]>key){
            return binarySearch(a,l,mid-1,key);
        }
        else
            return binarySearch(a,mid+1,r,key);
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,10,20};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<binarySearch(arr,0,n-1,key)<<endl;
    return 0;
}
