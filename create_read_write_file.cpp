#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream MyWriteFile("filename.txt");

    MyWriteFile << "Files can be tricky, but it is fun enough!";

    MyWriteFile.close();

    string myText;

    ifstream MyReadFile("filename.txt");

    while(getline(MyReadFile, myText)) {
        cout << myText;
    }

    MyReadFile.close();
}