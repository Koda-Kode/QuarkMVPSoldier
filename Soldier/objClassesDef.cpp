#include <iostream>
#include <string.h>
using namespace std;
#include "objClasses.hpp"
    // Clase Arma y herencia

Revolver::Revolver(){
    strcpy(sonido,"Pum");
    strcpy(nombre,"Revolver");
}

Escopeta::Escopeta(){
    strcpy(sonido,"Pam");
    strcpy(nombre,"Escopeta");
}

Rifle::Rifle(){
    strcpy(sonido,"Pum, pum, pum");
    strcpy(nombre,"Rifle");
}

    // Clase Soldado
void Soldado::recoger(Arma* arma){
    if (actual == NULL){
        actual = arma;
        actual->nombrar();
        cout << " recogido/a" << endl;
    }
    else{
        cout << "Deja el arma actual antes de agarrar otra" << endl;
    }
}

void Soldado::disparar(){
    if (actual != NULL)
    {
        actual->disparo();
    }
    else{
        cout << "No tiene ningun arma en las manos, recoga una." << endl;
    }
}

void Soldado::dejar(){
    actual = NULL;
    cout << "Arma removida" << endl;
}

void Soldado::armaActual(){
    if (actual != NULL)
    {
        cout << "Arma actual: ";
        actual->nombrar();
        cout << endl;
    }
    else{
        cout << "No tienes un arma equipada" << endl;
    }
}