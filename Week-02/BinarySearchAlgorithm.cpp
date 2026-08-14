#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> arr,int target){
    int start=0; int end=arr.size()-1;
    
    while(start<=end){
        int mid = start + (end - start) / 2;

      if(target>arr[mid]){
           start=mid + 1;
      } else if(target<arr[mid]){
        end=mid - 1; 
      } else{
        return mid;
      }
    } return -1;
}


int binary_recursive_search(vector<int> arr,int target,int start,int end){
    if(start<=end){
        int mid = start + (end - start) / 2;

      if(target>arr[mid]){
           return binary_recursive_search(arr,target,mid + 1,end);
      } else if(target<arr[mid]){
           return binary_recursive_search(arr,target,start,mid - 1); 
      } else{
           return mid;
      }
    }
     return -1;
}

int main(){
    vector<int> arr ={-1,0,3,4,5,9,12};
    int target=9;

    vector<int> arr2 ={-1,0,2,3,4,5,9,12};
    int target2=4;

    int start=0; int end=arr2.size() - 1;

//     cout<<"Binary Search : "<<binary_search(arr,target)<<endl;
//     cout<<"Recursive Binary Search : "<<binary_recursive_search(arr2,target2,start,end);
// }