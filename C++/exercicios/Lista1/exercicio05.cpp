#include<iostream>

using namespace std;

int main(){
    int A = 9000000, B = 20000000, ano = 0;

    while (A<B){
    
        A *=1.03;
        B *=1.015;

        ano++;
    }

    cout << "Quantidade de anos necessarios para A ultrapassar ou igualar B: " << ano;
    return 0;
}