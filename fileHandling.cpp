#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "Opening the file for writing." << endl;
    ofstream outputFile;

    //Open the file for writing
    outputFile.open("example.txt");
    if(outputFile.is_open()){
        //Write data to the file
        outputFile << "Hello, World!" << endl;
        outputFile << "42" << endl;
        outputFile.close(); //Close the file
    }else{
        //Failed to open the file
        cout << "Error opening the file for writing." << endl;
        return 1;
    }

    cout << "Opening the file for reading." << endl;
    //Reading from a file
    ifstream inputFile("example.txt");
    if(inputFile.is_open()){
        string line;
        while(getline(inputFile, line)){
            //Print each line
            cout << line << endl;
        }
        //Close the input file
        inputFile.close();
    }else{
        //Failed to open file
        cout << "Error opening the file for reading." << endl;
        return 1;
    }

    return 0;
}