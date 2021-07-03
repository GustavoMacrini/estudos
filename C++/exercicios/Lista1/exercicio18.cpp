#include <iostream>

using namespace std;

int main() {
    float ta, tb, tc, tp, t, pontos, pts, d, max_pontos = -1;
    int num_insc, i, vencedor;

    cout << "Digite os tempos-padrão de cada etapa: ";
    cin >> ta >> tb >> tc;
    
    cout << "Nro Inscrição: ";
    cin >> num_insc;

    while (num_insc != 9999) {
        //leitura dos dados da equipe
        pontos = 0;
        
        for (i = 0; i < 3; i++) {
            cout << "Tempo da etapa " << i+1 << ": ";
            cin >> t;
            switch (i) {
                case 0: tp = ta; break;
                case 1: tp = tb; break;
                case 2: tp = tc; break;
            }  
            d = t - tp;
            if (d < 3)
                pts = 100;
            else if (d <= 5)
                pts = 80;
            else 
                pts = 80 - (d - 5) / 5;        
        
            cout << num_insc << " pontos da etapa "<< i+1 << ": " << pts << endl;   
            pontos += pts;
        }

        cout << num_insc << " total de pontos: " << pontos << endl;   

        if (pontos > max_pontos) {
            max_pontos = pontos;
            vencedor = num_insc;
        }
        
        cout << "Nro Inscrição: ";
        cin >> num_insc;
    } 

    cout << "A equipe vencedora foi " << vencedor << " com " << max_pontos << " pontos." << endl;
    return 0;
}