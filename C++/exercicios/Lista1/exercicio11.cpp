#include <iostream>


using namespace std;

int main(){
    int i=0, cod_curso, num_vagas, num_mas, num_fem, soma_cand, maior_cod, maior_cand_por_vaga, total_cand=0;
    float cand_por_vaga, perc_fem;
    char continuar;

    do{
        cout << "Código do curso: ";
        cin >> cod_curso;

        cout << "Numero de vagas: ";
        cin >> num_vagas;

        cout << "Numero de candidatos do sexo masculino: ";
        cin >> num_mas;
        cout << "Numero de candidatos do sexo feminino.: ";
        cin >> num_fem;

        cand_por_vaga = (num_mas + num_fem)/num_vagas;
        perc_fem = num_fem*100/(num_mas + num_fem);
        total_cand += (num_mas + num_fem);

        if(i == 0){
            maior_cod = cod_curso;
            maior_cand_por_vaga = cand_por_vaga;
        }

        if (cand_por_vaga > maior_cand_por_vaga){
            maior_cand_por_vaga = cand_por_vaga;
            maior_cod = cod_curso;
        }

        cout << "Codigo do Curso..........................: " << cod_curso << endl;
        cout << "Numero de candidatos por vaga............: " << cand_por_vaga << endl;
        cout << "Percentual de candidatos do sexo Feminino: " << perc_fem << "% " << endl;

        cout << "Deseja adicionar mais cursos? [S]im [N]ao: ";
        cin >> continuar;
        i++;
    } while (continuar =='S' || continuar == 's');
    
    cout << "Codigo do Curso com maior quantidade de candidatos por vaga: " << maior_cod << endl;
    cout << "Quantidade de candidatos por vaga..........................: " << maior_cand_por_vaga << endl;
    cout << "Total de Candidatos........................................: " << total_cand;

    return 0;
}