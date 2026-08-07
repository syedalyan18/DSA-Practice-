#include <iostream>
#include <string>
using namespace std;

class Shape{

    public:
    int x;
    virtual void show(int x){
        cout<<"The length of shape is "<<x<<endl;
    }

};

class Square{
          public:
    int y;
     void show(int y){
        cout<<"The width of shape is "<<y<<endl;
    }
};

int main(){
    Square s1;
    s1.show(5);
}