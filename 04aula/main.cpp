#include <iostream>

using namespace std;


int main(){
    //trabalhando com entradas de usuarios
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << "years old" << endl;

    string name;
    cout << "Enter your aname: ";
    getline(cin, name);
    cout << "Your name is" << name << endl;

    return 0;
}