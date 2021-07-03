#include <iostream>

using namespace std;

int main(){
    float S;
    int i, j;

    S = 0;
    
    for(i = 1 ; i<11 ; ++i){

        j = i*i;

        if(i%2==0){
            S = S - (i/j);
        }
        else
            S = S + (i/j);
    }

    cout << "Valor de S: " << S;

    return 0;
}