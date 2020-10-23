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

int main(int argc, char** argv) {
    
    int option = 0;
    
    while (option != 4){
        
        switch ((option = menu())){
            
            case 1: {
                
                break;
            }case 2:{
                
                break;
            }case 3:{
                
                break;
            }case 4:{
                
                cout << "Ha decidido salir del programa... " <<endl;
                
                break;
            }
        }
    }
    
    
    
    return 0;
}

int menu(){
    
    int opcion = 0;
    
    do{
        
        cout << "       Menu        \n"
             << "1). Factorizacion de potencias de numeros primos" <<endl
             << "2). La serie de Taylor" <<endl
             << "3). Triangulo de Pascal"<<endl
             << "-> Ingrese su opcion: ";
        
        cin >> opcion;
        cout <<endl <<endl;
        
        if(opcion < 1 || opcion > 4){
            cout << "La opcion ingresada no es correcta intente de nuevo..." <<endl << endl;
        }
        
    }while(opcion < 1 || opcion > 4);
    
    return opcion;
    
}
