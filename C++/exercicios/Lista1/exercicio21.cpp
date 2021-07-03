#include <iostream>

using namespace std;

int main(){
    int i;
    float S;

    for(i = 1; i < 51; ++i){
        S = S + ((i*2)-1/i);
    }

    cout << "Valor de S: " << S;
 
    return 0;
}