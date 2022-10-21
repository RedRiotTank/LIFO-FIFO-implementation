/**
 * @file maxqueue.h
 * @brief  Archivo de especificación del T.D.A. MaxQueue
 */

#include <iostream>
#include <stack>
using namespace std;

struct element {

    int value;
    int maximum;

    friend ostream & operator<<(ostream & flujo, element e){
        flujo << e.value << "," << e.maximum ;
        return flujo;
    }
};
/**
 * @brief  T.D.A. MaxQueue. Cola que almacena 'element', un struct compuesto por un par de enteros, el valor almacenado y el máximo valor actual de la estructura.
 */
class MaxQueue{
private:
    stack<element> pila;

public:
/**
 * @brief  Introduce un número en la cola
 * @param n número entero a introducir en la cola
 */
    void push(int n);
/**
 * @brief  Obtiene el elemento que hay en el frente de la cola.
 * @return referencia al frente de la cola
 * @pre !this.isEmpty()
 */
    element front();

/**
 * @brief  Elimina el dato del frente de la cola
 * @pre No es posible extraer el dato si la cola está vacía.
 * @pre !this.isEmpty()
 */
    void pop();

    /**
    * @brief  Obtiene el número de elementos en la cola
    * @return Entero con el número de elementos en la cola
    */
    int size();

/**
* @brief  Nos dice si la cola está vacía o no
* @return boolean: true si la cola está vacía, false si no lo está
*/
    bool isEmpty();
};

