// --------------------------------------------------------------------
// PEDRO MONFORT CARO / 19-09-2024 / contiene
// --------------------------------------------------------------------

#include <iostream>
using namespace std;

// --------------------------------------------------------------------
// numeros & n : [R] & N -> contiene() -> B (True) / (False)
// --------------------------------------------------------------------

int contiene(int numeros[], int size, int n){

    for (int i = 0; i < size; i++){

        if ( n == numeros[i]){
            
            return true;    
        
        }
        
    }
    
    return false;

}

// --------------------------------------------------------------------
// --------------------------------------------------------------------

int main(){

    int numeros[] = {1,2,3,4,5};

    int size = 5;

    int n = 3;

    if (contiene(numeros, size, n)){
        
        cout << "El numero " << n << " esta en la lista." << endl;

    }else{

        cout << "El numero " << n << " no esta en la lista." << endl;

    }
    
}

// --------------------------------------------------------------------
// --------------------------------------------------------------------
// --------------------------------------------------------------------
// --------------------------------------------------------------------
