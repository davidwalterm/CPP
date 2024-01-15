#include <iostream>

using namespace std;

class Class{
    public:
        int x;
        void set_y(int num){
            y=num;
        }
        int get_y(){
            return y;
        }
    private:
        int y;
};

int main(){
    Class class1;
    class1.x = 25;
    class1.set_y(0);

    cout << class1.x << " " << class1.get_y() << endl;
}