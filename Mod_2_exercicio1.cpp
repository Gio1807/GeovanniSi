 #include <iostream>

using namespace std; 

int main(){

// Entrada
float n1, n2;

cout << "digite o primeiro numero ";
cin >> n1,

cout << "digite o segundo numero ";
cin >> n2;

/* Processamento
soma, subtração, multiplicação, divisão */

float soma, subtracao, multi, divisao;

soma = n1+n2;
subtracao = n1-n2;
multi = n1*n2;
divisao = n1/n2 ;

//saida
cout << "a soma dos numeros e :" << soma;
cout << "a subtracao dos numeros e :" << subtracao;
cout << "a multilplicacao dos numeros e :" << multi;
cout << "a divisao dos numeros e :" << divisao;

}