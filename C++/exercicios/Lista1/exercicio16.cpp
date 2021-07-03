#include <iostream>

using namespace std;

int main(){
    int num_insc, idade, num_f=0, xp_idade_f=0, num_m=0, soma_m=0;
    int menor_idade_f, cont_xp;
    float media_m;
    char sexo, experiencia, continuar;

    do{
        cout << "Numero de inscricao: ";
        cin >> num_insc;

        cout << "Idade: ";
        cin >> idade;

        cout << "Sexo [M]asculinio [F]eminino: ";
        cin >> sexo;

        cout << "Possui experiencia? [S]im [N]ao: ";
        cin >> experiencia;

        if(sexo == 'F' || sexo == 'f'){
            num_f += 1;

            if(idade<35 && experiencia == 'S')
                xp_idade_f +=1;


            if(experiencia == 'S')
                cont_xp += 1;


            if(cont_xp == 1)
                menor_idade_f = idade;
            else if(idade < menor_idade_f && experiencia == 'S')
                menor_idade_f = idade;
        }
        if(sexo == 'M' || sexo == 'm'){
            num_m += 1;

            if(idade > 45){
                soma_m += idade;
                media_m = soma_m / num_m;
            }
        }

        cout << "Deseja adicionar mais candidatos? [S]im [N]ao: ";
        cin >> continuar;

    }while(continuar == 'S');

    cout << "-----------------Levantamento de candidatos-----------------" << endl;
    cout << "Numero de candidatos do sexo feminino........: " << num_f << endl;
    cout << "Numero de candidatos do sexo masculino.......: " << num_m << endl;
    cout << "Idade media entre homens com +45 anos........: " << media_m << " anos " << endl;
    cout << "Candidatos do sexo feminino com xp e -35 anos: " << xp_idade_f << endl;
    cout << "Menor idade entre mulheres com experiencia...: " << menor_idade_f << " anos" << endl;
    cout << "------------------------------------------------------------";

    return 0;
}