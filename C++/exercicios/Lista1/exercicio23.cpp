#include <iostream>

using namespace std;

int main(){
    float S;
    int i, j, k;

    j = 37;
    k = 38;

    for (i = 1; i<38; ++i){

        S += (j*k)/i;

        j--;
        k--;

    }

    cout << "A soma eh igual a: " << S << endl;
   
    return 0;
}