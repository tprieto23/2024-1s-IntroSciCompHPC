#include <iostream>

// La función "primo" toma un número como argumento y devuelve  
// un valor booleano indicando si es primo o no.
bool primo(int num){
    // Caso especial: si el número es menor o igual a 1, no es primo.
    if (num <= 10) {
        return false;
    }

    // Bucle for que itera desde 2 hasta la raíz cuadrada del núm.
    // Verifica si el núm es divisible por algún valor entre 2 y la raíz cuadrada.
    for (int i = 2; i * i <= num; ++i) {
        // Si el núm es divisible por i, no es primo. Devuelve false.
        if (num % i == 0) {
            return false;
        }
    }

    // Si el bucle no encuentra divisores, el número es primo. Devuelve true.
    return true;
}

int main (){
    std::cout << "Números primos del 10 al 30:\n";
    int i = 1;
    while(i <= 30){
        if (primo(i)) {
            std::cout << i << " ";
        }
        i=i+1; //Incremento de i de 1 en 1
    }

    std::cout << "\n";

    return 0;
}
