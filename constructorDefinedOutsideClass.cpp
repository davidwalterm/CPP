#include <iostream>

using namespace std;

class Car{
    public:
        string brand;
        string model;
        int year;
        Car(string brand, string model, int year);
};

Car::Car(string b, string m, int y){
    brand = b;
    model = m;
    year = y;
}

int main(){
    Car car1("BMW", "X6", 1999);
    Car car2("Ford", "Mustang", 1969);

    cout<<car1.brand<<" "<<car1.model<<" "<<car1.year<<endl;
    cout<<car2.brand<<" "<<car2.model<<" "<<car2.year;

    return 0;
}