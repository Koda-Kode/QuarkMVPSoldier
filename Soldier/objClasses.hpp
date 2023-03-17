#pragma once
#include <iostream> 
#include <stdlib.h>
using namespace std;

    // Clase Arma y herencia
class Arma
{
protected:
    char sonido[20];
    char nombre[20];
public:
    void nombrar(){cout << nombre;}
    void disparo(){cout << sonido << endl;}
};

class Revolver : public Arma
{
public:
    Revolver();
};

class Escopeta : public Arma
{
public:
    Escopeta();
};

class Rifle : public Arma
{
public:
    Rifle();
};

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
