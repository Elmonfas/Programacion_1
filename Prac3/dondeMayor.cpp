// --------------------------------------------------------------------
// PEDRO MONFORT CARO / 19-09-2024 / dondeMayor
// --------------------------------------------------------------------

#include <iostream>
using namespace std;

// --------------------------------------------------------------------
// numeros: [R] -> dondeEstaElMayor() -> R 
// --------------------------------------------------------------------

int dondeEstaElMayor(int numeros[], int size){

    int mayor = 0;

    for (int i = 0; i < size; i++)
    {
        if (numeros[i] > mayor){

            mayor = numeros[i];

        }
        
    }
    
    return mayor;

}

// --------------------------------------------------------------------
// --------------------------------------------------------------------

int main(){

int numeros[] = {1,2,200,4,5};
int size = 5;

cout << "El numero mayor de la lista es el " << dondeEstaElMayor(numeros, size) << "." << endl;

}

// --------------------------------------------------------------------
// --------------------------------------------------------------------
// --------------------------------------------------------------------
// --------------------------------------------------------------------