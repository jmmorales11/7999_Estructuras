/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion:Viernes, 20 de Enero de 2023 
 * Purpose: Arbol Radix
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include <string>
#include <unordered_map>
using namespace std;

class Nodo {
	public:
    unordered_map<char, Nodo*> hijos;
    bool finalDePalabra;
    string palabra_;
  };