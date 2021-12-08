// 2)Altere o programa anterior para que uma única função "retorne" para o programa principal o valor de X1 e X2

#include <iostream>
#include <cmath>

using namespace std;

void calculo(float a, float b,float c, float *x1, float *x2){
    float delta = pow(b,2) - 4*a*c;
    *x1 = (-b + sqrt(delta))/2*a;
    *x2 = (-b - sqrt(delta))/2*a;
}

int main(){
    float a, b, c, x1, x2;
    
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

    calculo(a, b, c, &x1, &x2);

        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;

    return 0;
}