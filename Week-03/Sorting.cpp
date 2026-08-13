#include <iostream>
using namespace std;

//       Bubble Sort

void BubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool isSwap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){ //Array is already sorted
            return;
        }
    }
}

//       Selelction Sort

void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int SI=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[SI]){
               SI=j;
            }
        }
        swap(arr[i],arr[SI]);
    }
}


//       Insertion Sort

void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
      
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}

//       Display Sorted Array

void displayArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}

//              Main Function

int main(){
    int arr[]={1,2,4,3,6,5};
    int n=6;
    InsertionSort(arr,n);
    displayArray(arr,n);

}