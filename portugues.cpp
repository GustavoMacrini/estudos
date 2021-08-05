//Codigo para utilização de acentos em c++ utilizando VSCODE
#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    int Portugues = 65001;
    int LinguaPadrao = GetConsoleOutputCP();
    SetConsoleOutputCP(Portugues);

    cout << "acentuação";

    SetConsoleOutputCP(LinguaPadrao);
    return 0;
}

