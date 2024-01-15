#include <iostream>

using namespace std;

class MyClass{
    public:
        void myMethod();
};


//Method/function definiton outside the class
void MyClass::myMethod(){
    cout << "Hello World!";
}

int main(){
    MyClass myObj;              //Create an object of MyClass

    myObj.myMethod();

    return 0;
}