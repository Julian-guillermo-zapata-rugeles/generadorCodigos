#include <iostream>
#include <generador.h>

using namespace std;

int main(int argc, char **argv)
{
    if (argc==2) {
        int x = (int)*argv[1] - 48;
        generador gen;
        gen.obtener(x);
     }

    else{
        cout << "Autor: Julián Guillermo Zapata Rugeles "<< endl;
        cout << "[Cantidad inválida de argumentos]"<< endl;
        cout << "Ejemplo : generarCode 5 "<< endl;
        cout << "Salida  : 92186"<<endl;
    }
}
