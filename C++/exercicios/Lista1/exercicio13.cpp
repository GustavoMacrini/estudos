#include <iostream>

using namespace std;

int main(){
    int i = 0;
    float preco_kwh, qntd_kwh, num_consumidor, total_pagar, maior_consumo, menor_consumo;
    float residencial=0, comercial=0, industrial=0, soma_total=0, media_total;
    char tipo_consumidor;


    do{
        cout << "Informe o preco do kWh........: ";
        cin >> preco_kwh;

        cout << "Numero do consumidor..........: ";
        cin >> num_consumidor;

        if(num_consumidor !=0){
            cout << "Quantidade de kWh gasto no mes: ";
            cin >> qntd_kwh;

            cout << "Tipo consumidor [R]esidencial, [C]omercial, [I]ndustrial: ";
            cin >> tipo_consumidor;

            total_pagar = preco_kwh * qntd_kwh;

            if(i == 0){
                menor_consumo = qntd_kwh;
                maior_consumo = qntd_kwh;
            }

            if(qntd_kwh > maior_consumo)
                maior_consumo = qntd_kwh;
            
            if(qntd_kwh < menor_consumo)
                menor_consumo = qntd_kwh;

            //consumo por tipo
            if(tipo_consumidor == 'R')
                residencial += qntd_kwh;

            if(tipo_consumidor == 'C')
                comercial += qntd_kwh;

            if(tipo_consumidor == 'I')
                industrial += qntd_kwh;

            i++;

            soma_total += qntd_kwh;
            media_total = soma_total/i;

            cout << "----------Calculo Consumidor----------" << endl;
            cout << "Consumidor numero........: " << num_consumidor << endl;
            cout << "Total a ser pago.........: R$ " << total_pagar << endl;
            cout << "--------------------------------------" << endl;
        }
        
    }while(num_consumidor != 0);
    cout << "-------------Registros Finais-------------" << endl;
    cout << "Menor consumo registrado.: " << menor_consumo << " kWh" << endl;
    cout << "Maior consumo registrado.: " << maior_consumo << " kWh" << endl;
    cout << "Total consumo Residencial: " << residencial << " kWh" << endl;
    cout << "Total consumo Comercial..: " << comercial << " kWh" << endl;
    cout << "Total consumo Industrial.: " << industrial << " kWh" << endl;
    cout << "------------------------------------------";

    return 0;

}