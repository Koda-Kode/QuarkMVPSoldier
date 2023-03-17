#include <iostream> 
#include <stdlib.h>
#include <string.h>
using namespace std;

    // Clase Arma y herencia
class Arma
{
protected:
    char sonido[20];
    char nombre[20];
public:
    virtual ~Arma(){cout << "Destruir clase madre" << endl;}
    void nombrar(){cout << nombre;}
    void disparo(){cout << sonido << endl;}
};

class Revolver : public Arma
{
public:
    Revolver();
    ~Revolver(){cout << "Destruir revolver" << endl;}
};

Revolver::Revolver(){
    strcpy(sonido,"Pum");
    strcpy(nombre,"Revolver");
}

class Escopeta : public Arma
{
public:
    Escopeta();
};

Escopeta::Escopeta(){
    strcpy(sonido,"Pam");
    strcpy(nombre,"Escopeta");
}

class Rifle : public Arma
{
public:
    Rifle();
};

Rifle::Rifle(){
    strcpy(sonido,"Pum, pum, pum");
    strcpy(nombre,"Rifle");
}

    // Clase Soldado
class Soldado
{
private:
    Arma *actual = NULL;
public:
    void disparar();
    void dejar();
    void recoger(Arma* arma);
    void armaActual();
};

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