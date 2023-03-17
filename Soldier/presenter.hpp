#pragma once
#include <memory>
using namespace std;
#include "objClassesDef.cpp"

class Presenter
{
private:
        // Definir los objetos como punteros inteligentes
    unique_ptr<Soldado> soldado = make_unique<Soldado>();
    unique_ptr<Revolver> ptrRevolver = make_unique<Revolver>();
    unique_ptr<Escopeta> ptrEscopeta = make_unique<Escopeta>();
    unique_ptr<Rifle> ptrRifle = make_unique<Rifle>();
        // Obtener punteros estandar para poder usarlos en funciones
    Revolver* revolver = ptrRevolver.get();
    Escopeta* escopeta = ptrEscopeta.get();
    Rifle* rifle = ptrRifle.get();
public:
    void presRecojer(int weapon);
    void presDisparar();
    void presDejar();
    void presArmaActual();
};