#include <iostream>

#define alunos 100

using namespace std;

int main(){
    int i, matricula, infrequencia=0, reprovados=0;
    string situacao;
    float nota_a, nota_b, nota_c, frequencia, media, menor_nota, maior_nota, soma_turma=0, media_turma;
    char continuar;

    for(i = 0; i < alunos; ++i){
        cout << "Digite o numero da matricula: ";
        cin >> matricula;

        cout << "Digite as 3 notas: " << endl;
        cin >> nota_a >> nota_b >> nota_c;

        cout << "Digite a frequencia do aluno: ";
        cin >> frequencia;

        media = (nota_a + nota_b + nota_c)/3;
        soma_turma += media;
        media_turma = soma_turma/alunos;

        if(frequencia<40){
            situacao = "Reprovado";
            infrequencia++;
            
        }
        else{
            if(media>=60)
                situacao = "Aprovado";
            else
                situacao = "Reprovado";
        }      

        if (situacao == "Reprovado")
            reprovados++;

        if( i == 0){
            menor_nota = media;
            maior_nota = media;
        }
         
        if(media < menor_nota)
            menor_nota = media;
        
        if(media > maior_nota)
            maior_nota = media;
        
         cout << "Numero da matricula: " << matricula << endl;
         cout << "Frequencia.........: " << frequencia << endl;
         cout << "Nota final.........: " << media << endl;
         cout << "Situacao...........: " << situacao << endl;
    } 

    cout << "Maior nota da turma...............: " << maior_nota << endl;
    cout << "Menor nota da turma...............: " << menor_nota << endl;
    cout << "Nota media da turma...............: " << media_turma << endl;
    cout << "Total de alunos reprovados........: " << reprovados << endl;
    cout << "Alunos reprovados por infrequencia: " << infrequencia*100/alunos << "% " << endl;

    return 0;
}