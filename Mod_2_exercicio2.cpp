#include <iostream>

using namespace std;

int main(){
// Entrada 

string nome_produto;
float valor_produto;

cout << "digite o nome do produto: ";
cin >> nome_produto;
cout << "digite o valor do produto: ";
cin >> valor_produto;

// Processamento 
float divisao;

divisao = valor_produto / 5;

// Saída

cout <<  "o valor da prestacao e " << divisao;


}