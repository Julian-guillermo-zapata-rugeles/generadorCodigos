#include <iostream>
#include <generador.h>

using namespace std;


inline void ejecutarGenerador(int &test_number){
    generador gen;
    gen.obtener(test_number);
}


int main(int argc, char **argv)
{
    int test_number;
    if (argc == 1) {
        cout << "Ingrese numero (1-9) : ";
        cin >> test_number;
        ejecutarGenerador(test_number);

    }
    else if (argc==2) {
        test_number = (int)*argv[1] - 48;
        ejecutarGenerador(test_number);
     }


    else{
        cout << "Autor: Julián Guillermo Zapata Rugeles "<< endl;
        cout << "[Cantidad inválida de argumentos]"<< endl;
        cout << "Ejemplo : generarCode 5 "<< endl;
        cout << "Salida  : 92186"<<endl;
    }
}
