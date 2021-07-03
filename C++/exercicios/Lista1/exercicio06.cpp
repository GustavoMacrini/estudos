#include <iostream>

using namespace std;

int main(){
    float massa, massa_inicial, segundos =0, minutos, horas;

    cout << "-----------Calculo de degradacao de material------------" << endl;
    cout << "Digite a massa inicial em gramas: ";
    cin >> massa;

    massa_inicial = massa;

    while(massa>=0.5){

        massa /= 2;

        segundos += 50;

    }

    minutos = segundos/60;
    horas = minutos/60;

    cout << "--Tempo necessario para massa ser menor que 0.5 gramas--" << endl;
    cout << "Massa inicial....: " << massa_inicial << endl;
    cout << "Massa final......: " << massa << " Gramas" << endl;
    cout << "Tempo em segundos: " << segundos << endl;
    cout << "Tempo em minutos.: " << minutos << endl;
    cout << "Tempo em horas...: " << horas << endl;
    cout << "--------------------------------------------------------";

    return 0;

}