#include <iostream>

using namespace std;

class MyClass{                                  //The Class
    public:                                     //Access specifier
        void myMethod(){                        //Method/function
            cout << "Hello World!" << endl;
        }
};

int main(){
    MyClass myClass;                            //Create object of MyClass

    myClass.myMethod();                         //Call the method

    return 0;
}