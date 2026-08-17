#include <iostream>
#include <vector>
using namespace std;

bool IsSorted(vector<int> arr,int n){
    if(n==0 || n==1){
        return true;
    }

    return arr[n-1]>=arr[n-2] && IsSorted(arr,n-1);
}

int main(){
    vector<int> arr={1,2,4,3};

    cout<<IsSorted(arr,arr.size())<<endl;
    return 0;
}