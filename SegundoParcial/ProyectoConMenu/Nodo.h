#include <string>
#include <unordered_map>

using namespace std;
class Nodo {
private:
    unordered_map<char, Nodo*> hijos;	
	bool finalDePalabra;
	string palabra;
public:

    unordered_map<char, Nodo*> getHijos();
    void setHijos(unordered_map<char, Nodo*> newHijos);
    bool getFinalPalabra();
    string getPalabra();
    void setFinalPalabra(bool newFinalPalabra);
    void setPalabra(string newPalabra);

};
