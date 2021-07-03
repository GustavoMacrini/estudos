#include <iostream>

using namespace std;

int main(void) {
    int d1, d2, m1, m2, a1, a2, m, d, a, c, dA, dB, mA, mB;
    
    cout << "Digite uma data: ";
    cin >> d1 >> m1 >> a1;

    // loop que fica lendo pares de datas até o usuário digitar 0 em d1
    while (d1 != 0) {

        cout << "Digite outra data: ";
        cin >> d2 >> m2 >> a2;

        // cálculo da situação a)
        if (a1 == a2) {
            
            // loop da acumulação de dias entre [m1,m2)
            for (m = m1, d = 0; m < m2; m++) {
                if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
                    d += 31;
                } else {
                    if (m == 2) {
                        // verificação se ano é bissexto
                        if (a1 % 4 == 0 || (a1 % 400 == 0 && a1 % 100 != 0))
                            d += 29;
                        else
                            d += 28;
                    }
                    else
                        d += 30;
                }
            }
            // subtração dos dias da primeira data
            d -= d1;
            // soma dos dias da segunda data
            d += d2;
        }
        // cálculo da situação b)
        else {
            // loop para realizar o calculo dos dois intervalos
            for (c = d = 0; c < 2; c++) {
                // intervalo 1: d1/m1/a1 até 31/12/a1
                if (!c) {
                    dA = d1;
                    mA = m1;
                    a = a1;
                    dB = 31;
                    mB = 12;
                }
                // intervalo 2: 1/1/a2 até d2/m2/a2
                else {
                    dA = mA = 1;
                    a = a2;
                    dB = d2;
                    mB = m2;
                }
                for (m = mA; m < mB; m++) {
                    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
                        d += 31;
                    } else {
                        if (m == 2) {
                            if (a % 400 == 0 || (a % 400 == 0 && a % 100 != 0))
                                d += 29;
                            else
                                d += 28;
                        }
                        else
                            d += 30;
                    }
                }
                d -= dA;
                d += dB;
            }
            // situação onde os anos tem diferença maior 1.
            if (a2 - a1 > 1) {
                // loop para computar os dias dos anos de diferença considerando a verificação do ano bissexto.
                for (a = a1 + 1; a < a2; a++) {
                    if (a % 400 == 0 || (a % 400 == 0 && a % 100 != 0))
                        d += 366;
                    else
                        d += 365;
                }
            }
        }

        cout << "Entre " << d1 << "/" << m1 << "/" << a1 << " e " << d2 << "/" << m2 << "/" << a2 << " existem " << d << " dia(s)." << endl;
        cout << "Digite uma data: ";
        cin >> d1 >> m1 >> a1;
    }
    return 0;
}