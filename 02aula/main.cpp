#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    // trabalhando com strings
    string phrase = "Giraffe Academy";

    cout << phrase << endl;
    cout << "Tamanho" << phrase.length() << endl;
    cout << "Posição" <<phrase[0] << endl;
    cout << "Busca essa frase a partir de um determinado index" << phrase.find("Aca", 0) << endl;
    cout << "Escreve 2 caracteres que estão na posição 8 (index 8)" << phrase.substr(8, 2) << endl;

    return 0 ;
};