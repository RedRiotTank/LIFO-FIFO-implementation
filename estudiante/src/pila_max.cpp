/**
 * @file pila_max.cpp
 * @brief  Archivo de implementación del programa pila con máximo
 */

#include <iostream>
#include <maxstack.h>

int main(int argc, char **argv) {
    MaxStack stack;
    for (int i = 1; i < argc; i++) {
        char *v = argv[i];
        if (v[0] == '.') {
            cout << stack.top() << endl;
            stack.pop();
        } else {
            int vint = atoi(v);
            stack.push(vint);
        }
    }
}