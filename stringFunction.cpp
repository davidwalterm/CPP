#include <iostream>
#include <string>

using namespace std;

int main(){
    string str = "GeeksForGeeks";

    //Extracts a substring starting from index 7 with a length of 5
    string sub = str.substr(1, 5);

    cout << "Substring: " << sub << endl;

    return 0;
}