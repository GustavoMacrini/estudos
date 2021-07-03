#include<iostream>

using namespace std;

int main(){
    int t, a, num_mat, id_aluno, ausentes, ausencia5 = 0;
    char id_turma, status;
    float perc5 =0;

    for(t = 0; t<14; t++){
            cout << "Id da Turma: ";
            cin >> id_turma;
            cout << "Num. Matriculados: ";
            cin >> num_mat;
            ausentes =0;
            for(a = 0; a < num_mat; a++){
                cout << "Id Aluno: ";
                cin >> id_aluno;
                cout << "Situacao [A/P]: ";
                cin >> status; 
                if (status == 'A')
                    ausentes++;
            }
            perc5 = (float)ausentes/num_mat*100;
            cout << "A turma " << id_turma << " apresentou " << ausentes/num_mat*100 << "% de ausencias." << endl;
            if(perc5 < 5)
                ausencia5++;
    }

    cout << ausencia5 << " eh a quantidade de turmas com ausencia maior que 5%. " << endl; 

    return 0;
}