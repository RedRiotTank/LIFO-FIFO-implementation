/**
 * @file maxqueue.cpp
 * @brief  Archivo de implementación del T.D.A. MaxQueue
 */

#include <maxqueue.h>

void MaxQueue::push(int n){
    element Nelemento;
    Nelemento.value = n;
    Nelemento.maximum = n;

    if(pila.empty() ){
        pila.push(Nelemento);
    }
    else{
        // Introduzco en una nueva pila todos los elementos de la pila actual
        // Vacio la pila original
        stack<element> aux;
        while(!pila.empty()){
            aux.push(pila.top());
            pila.pop();
        }

        // Introduzco en la pila original el nuevo elemento y los anteriores
        // Recalculo los máximos al mismo tiempo
        element cimaAnterior = Nelemento;
        pila.push(Nelemento);
        while(!aux.empty()){
            element cima = aux.top();

            if (cima.maximum < cimaAnterior.maximum)
                cima.maximum = cimaAnterior.maximum;

            pila.push(cima);
            aux.pop();
            cimaAnterior = cima;
        }
    }
}

element MaxQueue::front(){
    return pila.top();
}

void MaxQueue::pop() {
    pila.pop();
}

int MaxQueue::size(){
    return pila.size();
}


bool MaxQueue::isEmpty(){
    return pila.empty();
}