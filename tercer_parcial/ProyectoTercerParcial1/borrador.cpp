auto mostrar = [](ListaDoble<T>* lista){
    long inicio = obtenerTiempo();
    double tiempoEnSegundos;
    long tiempoEnMicrosegundos;
    int x = 190;
    NodoDoble<T>* aux = lista->getPrimero();
    while(aux){
        cout << " [" << aux->getObjeto() << "] ";
        letras(aux->getObjeto(), x, 550);
        x += 25;
        aux = aux->getSiguiente();
    }
    cout << endl;
    long final = obtenerTiempo();
    tiempoEnMicrosegundos = final - inicio;
    tiempoEnSegundos = tiempoEnMicrosegundos * pow(10, -6);
    cout << "El tiempo de ejecucion en microsegundos es: " << tiempoEnMicrosegundos << endl << endl;
    cout << "EL tiempo de ejecucion en segundos es: " << tiempoEnSegundos << endl << endl;
};

