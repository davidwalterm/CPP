#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Function declaration
int sum(int a, int b);

//Function definition
int sum(int a, int b){
    return a + b;
}

int main(){
    //Function call
    int result = sum(3, 4);
    
    cout << result;
    
    return 0;
}