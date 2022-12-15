#include <iostream>
#include <stack>
#include <string>

int main() {
  std::stack<int> pila;

  // Esta es la funci�n lambda que se utilizar� para realizar las operaciones matem�ticas
  // en la pila. Recibe dos operandos y un operador, y devuelve el resultado de la
  // operaci�n.
  auto operar = [](int operando1, int operando2, char operador) {
    switch (operador) {
      case '+': return operando1 + operando2;
      case '-': return operando1 - operando2;
      case '*': return operando1 * operando2;
      case '/': return operando1 / operando2;
    }
  };

  std::string entrada;
  std::cout << "Ingrese la expresi�n en notaci�n polaca inversa: ";
  std::getline(std::cin, entrada);

  for (const auto &c : entrada) {
    if (std::isdigit(c)) {
      // Si el caracter es un d�gito, lo agregamos a la pila como un entero
      pila.push(c - '0');
    } else {
      // Si el caracter no es un d�gito, es un operador.
      // Obtenemos los dos operandos de la pila y realizamos la operaci�n
      // utilizando la funci�n lambda "operar"
      int operando2 = pila.top(); pila.pop();
      int operando1 = pila.top(); pila.pop();
      int resultado = operar(operando1, operando2, c);

      // Agregamos el resultado a la pila
      pila.push(resultado);
    }
  }

  // El resultado final debe estar en la cima de la pila
  std::cout << "Resultado: " << pila.top() << std::endl;

  return 0;
}


/*#include <iostream>
#include <string>
#include <stack>

using namespace std;

// Funci�n para evaluar una operaci�n en notaci�n polaca inversa
// utilizando un TDA pila para almacenar los operandos y operadores
int evaluar(string expresion) {
  stack<int> pila;

  // Recorremos cada car�cter de la expresi�n
  for (int i = 0; i < expresion.length(); i++) {
    // Si el car�cter es un operando, lo empujamos a la pila
    if (isdigit(expresion[i]))
      pila.push(expresion[i] - '0');

    // Si el car�cter es un operador, obtenemos los dos operandos
    // de la pila y realizamos la operaci�n correspondiente
    else {
      int op1 = pila.top(); pila.pop();
      int op2 = pila.top(); pila.pop();

      switch (expresion[i]) {
        case '+': pila.push(op2 + op1); break;
        case '-': pila.push(op2 - op1); break;
        case '*': pila.push(op2 * op1); break;
        case '/': pila.push(op2 / op1); break;
      }
    }
  }

  // Al finalizar, el �nico valor que queda en la pila es el resultado
  // de la operaci�n en notaci�n polaca inversa
  return pila.top();
}

int main() {
  // Probamos la funci�n con algunas expresiones
  cout << evaluar("12+") << endl;   // imprime 3
  cout << evaluar("23*") << endl;   // imprime 6
  cout << evaluar("23*5+") << endl; // imprime 11
  cout << evaluar("23/") << endl;   // imprime 0
  
  
  return 0;
}*/

