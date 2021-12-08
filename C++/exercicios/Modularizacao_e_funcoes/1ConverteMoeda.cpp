//Primeiro Teste de modularização
#include <iostream>

#define CLEAR "cls"

using namespace std;

void Conversor(float real_b, float *x_d, float *x_e, float dolar=0, float euro=0){
    dolar = real_b * 4.95;
    euro = real_b * 5.89;
    
    *x_d = dolar;
    *x_e = euro;
}

int main(){
    float real, dolar, x_d, x_e;

    system(CLEAR);
    cout << "Digite a quantidade em real: ";
    cin >> real;

    Conversor(real, &x_d, &x_e);

    cout << "R$ " << real << " Em real e igual a $ " << x_d << " Em Dolar" << endl;
    cout << "R$ " << real << " Em real e igual a $ " << x_e << " Em Euro";

    return 0;
}