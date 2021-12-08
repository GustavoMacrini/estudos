/*1) Implemente um programa em C++ que resolva o problema de uma função de segundo grau, retornando o delta e as raízes da função.
Use obrigatoriamente uma função para delta, outra para x1 e outra para x2.
*/

#include <iostream>
#include <cmath>

using namespace std;

float delta(float a, float b, float c){
    return pow(b,2) - 4*a*c;
}

float x1(float a, float b, float c){
    return (-b + sqrt(delta(a,b,c)))/2*a;
}

float x2(float a, float b, float c){
    return (-b - sqrt(delta(a,b,c)))/2*a;
}

int main(){
    float a, b, c;
    float deltaConfirm;
    
    system("cls");
    cout << "---- Calculo de Funcao do Segundo Grau ---- " << endl;
    cout << "\t f(x) = Ax^2 + Bx + C\n" << endl;
    cout << "Valor de A: ";
    cin >> a;
    cout << "Valor de B: ";
    cin >> b;
    cout << "Valor de C: ";
    cin >> c;
    cout << "--------------------------------------------" << endl;

        cout << "Delta = " << delta(a,b,c) << endl;
        cout << "X1 = " << x1(a,b,c) << endl;
        cout << "X2 = " << x2(a,b,c) << endl;
    
    return 0;
}
