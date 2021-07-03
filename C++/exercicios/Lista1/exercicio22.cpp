#include <iostream>

using namespace std;

int main(){
    int i, k = 1, j, base, somatorio;

    for (i = 50 ; i > 0; --i ){
       
       j = k;

       while(k > 0 ){
        base *=2;
        k--;
       }

        somatorio += base / i;
        k = j;
        k++;
        base = 0;
    }

    cout << "Somatorio: " << somatorio;

    return 0;

}