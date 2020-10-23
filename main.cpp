/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: dalva
 *
 * Created on October 23, 2020, 1:00 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
/*
 * 
 */

//prototypes
int menu();
double taylorSeries(double);
double potencia(double, double);
double factorial(double);
void pascalTriangle(int);
int aritmetica(int);

int main(int argc, char** argv) {

    int option = 0;

    while (option != 4) {

        switch ((option = menu())) {

            case 1:
            {

                int valorX = 0;
                int resultado = 0;

                cout << "Ingrese el valor de X: ";
                cin >> valorX;
                cout << endl << endl;

                resultado = aritmetica(valorX);

                //cout << resultado;


                break;
            }
            case 2:
            {
                double x = 0;
                double result = 0;

                cout << "Ingrese el valor de x: ";
                cin >> x;
                cout << endl << endl;

                result = taylorSeries(x);

                cout << "El resultado de la Serie Taylor es: " << result
                        << endl << endl;

                break;
            }
            case 3:
            {

                int size = 0;

                cout << "Ingrese el numero de filas a calcular: ";
                cin >> size;
                cout << endl << endl;

                pascalTriangle(size);


                break;
            }
            case 4:
            {

                cout << "Ha decidido salir del programa... " << endl;

                break;
            }
        }
    }



    return 0;
}

int aritmetica(int valorX) {

    int arrayPrimos [25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43,
        47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int size = 25;
    int a = 0;
    int cont = 0;

    cout << valorX << " = ";

    while (valorX != 1 && valorX != 0) {

        if (valorX % arrayPrimos[a] == 0) {
            valorX /= arrayPrimos[a];
            cont++;

        } else {
            cout << arrayPrimos[a] << "^ " << cont << " * ";
            cont = 0;
            a++;
        }


    }
    cout << arrayPrimos[a] << "^ " << cont << ";" << endl << endl;

    if (valorX == 0) {
        cout << "No se puede calcular ese valor :v";
    }

    cout << endl << endl;
}

//Crea la secuencia de los numeros del triangulo de pascal

void pascalTriangle(int size) {

    int inValue = 4;
    int array [3] = {1, 2, 1};
    int mainSize = 3;
    int arr[inValue] = {1, array[0]+array[1], array[1]+array[2], 1};

    
    cout << 1 << endl;
    cout << 1 << ", " << 1 << endl;
    
    for (int i = 0; i < mainSize; i++){
        cout << array[i] << ", "; 
    }
    
    cout << endl;
    
    for (int i = inValue; i <= size; i++) {
        int arr2 [inValue] = {};
        
        for(int j = 0; j < inValue; j++){
            
            if(j == 0 || j== inValue-1){
                arr2[j] = 1;
            }else{
                arr2[j] = array[j] + array[j+1];
            }
        }
        
        for (int k = 0; k < inValue; k++){
            cout << arr2[k] << ", ";
        }
        
        
        cout << endl;
        
        int array [inValue-1] = {};
        
        for (int m = 0; m < inValue-1; m++){
            array[m] = arr[m];
        }
        
        inValue++;
    }
    
    cout << endl << endl;
    \

}

double taylorSeries(double x) {

    double result = 0;
    double facto = 0;
    double poten = 0;
    double n = 0;
    for (int i = 0; i <= 40; i++) {

        //    cout << "Inside for: " << endl;

        poten = (double) potencia(n, x);
        facto = (double) factorial(n);


        result += (poten / facto);

        //cout <<facto << endl;
        //cout << poten << endl;
        //cout << result <<endl;

        n++;
    }


    return result;
}

//Metodo recursivo que calcula la potencia de x numero

double potencia(double n, double base) {

    if (n == 0) {
        return 1;
    } else {
        return base * (potencia(n - 1, base));
    }


}

double factorial(double n) {

    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }

}

//Metodo que muestra menu, valida y envia la opcion al main

int menu() {

    int opcion = 0;

    do {

        cout << "       Menu        \n"
                << "1). Factorizacion de potencias de numeros primos" << endl
                << "2). La serie de Taylor" << endl
                << "3). Triangulo de Pascal" << endl
                << "4). Salir" << endl
                << "-> Ingrese su opcion: ";

        cin >> opcion;
        cout << endl << endl;

        if (opcion < 1 || opcion > 4) {
            cout << "La opcion ingresada no es correcta intente de nuevo..." << endl << endl;
        }

    } while (opcion < 1 || opcion > 4);

    return opcion;

}
