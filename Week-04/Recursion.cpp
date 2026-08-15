#include <iostream>
using namespace std;

int Factorial(int num){
    if(num == 0  || num == 1){
        return 1;
    } 
    
    return num * Factorial(num-1);
}

int SumOfNums(int n){
    if(n==0){
        return 0;
    }

    return n + SumOfNums(n-1);
}

int main(){
    cout<< Factorial(4)<<endl;
    cout<<SumOfNums(5);
}