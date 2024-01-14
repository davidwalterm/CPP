#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1 = "Geeks";
    string str2 = "For";
    string str3 = "Geeks";

    int result1 = str1.compare(str2);
    cout << "Comparison result: " << result1 << endl;

    int result2 = str1.compare(str3);
    cout << "Comparison result: " << result2 << endl;

    return 0;
}