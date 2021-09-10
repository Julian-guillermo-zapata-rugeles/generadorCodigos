#include "generador.h"

generador::generador()
{
    srand(std::chrono::system_clock::now().time_since_epoch().count());
}

void generador::obtener(int longitud)
{
    for (short int i=0;i<longitud;i++) {
       std::cout << 0+rand()%9;
    }
    std::cout<<std::endl;
}
