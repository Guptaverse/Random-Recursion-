// we have to check that array is sorted or not 

#include<iostream>
using namespace std;

bool isSorted(int a[],int size){
    if(size == 0 || size ==1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    bool isSmallerSorted = isSorted(a+1,size-1);
    // cout<<isSmallerSorted;
    return isSmallerSorted;
}

// apna kaam baad me krenge , recursion jaa tu apna kaam krke laa :))

bool isSorted2(int a[],int size){
    if(size == 0 || size ==1){
        return true;
    }
    bool isSmallerSorted = isSorted2(a+1,size-1);
    if(!isSmallerSorted){      ////
        return false;            // 
    }                            //
    if(a[0]>a[1]){               // <--- ye raha hamara kaaam!!
        return false;            //
    }                            //
    else{                        //
        return true;             //
    }                          ////
    // cout<<isSmallerSorted;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    bool ans = isSorted(a,n);
    bool ans2 = isSorted2(a,n);
    cout<<ans<<" "<<ans2;
    return 0;
}