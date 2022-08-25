#include <iostream>

using namespace std;

int main(){
    //calculador
    string num1, num2;

    cout << "Enter first number: ";
    getline(cin, num1);
    cout << "Enter second number: ";
    cin >> num2; 
    cout << num1 + num2;
    
    return 0;
};