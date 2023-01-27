<<<<<<< HEAD
=======
/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion:Viernes, 20 de Enero de 2023 
 * Purpose: Arbol Radix
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
>>>>>>> c96351eb68ca25f81b7c02ec97fd06ebea510e9e
#include <string>
#include <unordered_map>
using namespace std;

class Nodo {
	public:
    unordered_map<char, Nodo*> hijos;
    bool finalDePalabra;
    string palabra_;
  };