// --------------------------------------------------------------------
// PEDRO MONFORT CARO / 12-09-2024 / esPrimo
// --------------------------------------------------------------------
#include <iostream>
using namespace std;

// --------------------------------------------------------------------
// numero : N -> f(esPrimo) -> B(true) / B(false)
// --------------------------------------------------------------------

int esPrimo(int numero){

    for (int i = 2; i < numero; i++){
        
        if (numero % 2 == 0)
        {

            return false;
        
        }
    }
    
    return true;
    
}

// --------------------------------------------------------------------
// --------------------------------------------------------------------

int main(){

    cout << "Ingrese un numero: ";

    int numero;

    cin >> numero;

    if(esPrimo(numero)){

        cout << "El numero " << numero << " es primo.";

    }else{

        cout << "El numero " << numero << " no es primo.";

    }

    return 0;

}
// --------------------------------------------------------------------
// --------------------------------------------------------------------
// --------------------------------------------------------------------
// --------------------------------------------------------------------