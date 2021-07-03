#include <iostream>

using namespace std;

int main(){
    float altura, menor_altura, maior_altura, altura_f, media_f;
    int i, j, num_m;
    char sexo;

    for(i = j = num_m = 0 ; i < 50; ++i){

        cout << "Digite uma altura: ";
        cin >> altura;
        cout << "Digite o sexo[M,F]: ";
        cin >> sexo;

        if (i==0){
            menor_altura = altura;
            maior_altura = altura;
        }

        if(altura < menor_altura)
            menor_altura = altura;

        if(altura > maior_altura)
            maior_altura = altura;

        if (sexo == 'F'){
            j++;
            altura_f +=altura;
            media_f = altura_f /j;
        }

        if (sexo == 'M')
            num_m++;    

    }
    
    cout << "Maior altura............: " << maior_altura << endl;
    cout << "Menor altura............: " << menor_altura << endl;
    cout << "Media da altura feminina: " << media_f << endl;
    cout << "Quantidade de homens....: " << num_m;

    return 0;
}