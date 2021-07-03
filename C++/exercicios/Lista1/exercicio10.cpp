#include <iostream>

using namespace std;

int main(){
    int canal, pessoas, total_casas=0, total_pessoas=0;
    int  total4, total5,total7, total12;
    int perc4, perc5, perc7, perc12, mais_assistido=0;
    char continuar;
     
    do{
        cout << "Canal assistido [4,5,7,12], Tv desligada [0]: ";
        cin >> canal;

        if(canal != 0){

            cout << "Quantas pessoas assistindo: ";
            cin >> pessoas;

            total_pessoas +=pessoas;

            if(canal == 4){
                total4 += pessoas;
              
               
            }

            if(canal == 5){
                total5 += pessoas;
          
                
            }

            if(canal == 7){
                total7 += pessoas;
             
                
            }

            if(canal == 12){
                total12 += pessoas;
               
                
            }
        }
        cout << "Deseja adicionar mais casas a pesquisa? [S]im [Nao]: ";
        cin >> continuar;
    }while(continuar == 'S');

    perc4 = total4/total_pessoas;
    perc5 = total5/total_pessoas;
    perc7 = total7/total_pessoas;
    perc12 = total12/total_pessoas;

    cout << "Audiencia da emissora  4: " << perc4 << "% " << endl;
    cout << "Audiencia da emissora  5: " << perc5 << "% " << endl;
    cout << "Audiencia da emissora  7: " << perc7 << "% " << endl;
    cout << "Audiencia da emissora 12: " << perc12 << "% " << endl;
 
    return 0;
}