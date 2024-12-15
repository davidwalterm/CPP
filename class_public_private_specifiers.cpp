#include <iostream>

using namespace std;

class MyClass {
    public:
        int x;
    private:
        int y;
};

int main() {
    MyClass myObj;
    myObj.x = 25;

    cout << "myObj.x = " << myObj.x << endl;
    //myObj.y = 50; not allowed; y is private
    return 0;
}