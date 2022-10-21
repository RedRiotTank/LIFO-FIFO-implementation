/**
 * @file maxstack.cpp
 * @brief  Archivo de implementación del T.D.A. MaxStack
 */

#include <maxstack.h>

void MaxStack::push(int n){
    element Nelemento;
    Nelemento.value = n;
    if(cola.empty() ){
        Nelemento.maximum = n;
        cola.push(Nelemento);
    }
    else{
        if(n < cola.front().maximum)
            Nelemento.maximum = cola.front().maximum;
        else
            Nelemento.maximum = n;

        queue<element> aux;
        aux.push(Nelemento);
        while (!cola.empty()){
            aux.push(cola.front());
            cola.pop();
        }
        cola = aux;
    }
}

element MaxStack::top(){
    return cola.front();
}

void MaxStack::pop() {
    cola.pop();
}

int MaxStack::size(){
    return cola.size();
}


bool MaxStack::isEmpty(){
    return cola.empty();
}