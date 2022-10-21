/**
 * @file maxstack.h
 * @brief  Archivo de especificación del T.D.A. MaxStack
 */

#include <iostream>
#include <queue>
using namespace std;

/**
 * @brief  Estructura que almacena dos enteros, 'value' y 'maximum', se usaran para representar el valor añadido a la estructura y el maximo valor actual de la estructura.
 */
struct element {

    int value;
    int maximum;

    friend ostream & operator<<(ostream & flujo, element e){
        flujo << e.value << "," << e.maximum ;
        return flujo;
    }
};

/**
 * @brief  T.D.A. MaxStack. Pila que almacena 'element', un struct compuesto por un par de enteros, el valor almacenado y el máximo valor actual de la estructura.
 */
class MaxStack{
private:
    queue<element> cola;

public:
/**
 * @brief  Introduce un número en la pila
 * @param n número entero a introducir en la pila
 */
    void push(int n);
/**
 * @brief  Obtiene el elemento que hay en el tope de la pila.
 * @return referencia al tope de la pila
 * @pre !this.isEmpty()
 */
    element top();

/**
 * @brief  Elimina el tope de la pila
 * @pre No es posible extraer el dato si la pila está vacía.
 * @pre !this.isEmpty()
 */
    void pop();

 /**
 * @brief  Obtiene el número de elementos en la pila

 * @return Entero con el número de elementos en la pila
 */
    int size();

/**
* @brief  Nos dice si la pila está vacía o no
* @return boolean: true si la pila está vacía, false si no lo está
*/
    bool isEmpty();
};

