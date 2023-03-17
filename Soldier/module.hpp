#include <iostream>
#include <memory>
using namespace std;
#include "armas.hpp"

class Model
{
private:
    unique_ptr<Soldado> soldado = make_unique<Soldado>();
    unique_ptr<Revolver> ptrRevolver = make_unique<Revolver>();
    Revolver* revolver = ptrRevolver.get();
    unique_ptr<Escopeta> ptrEscopeta = make_unique<Escopeta>();
    Escopeta* escopeta = ptrEscopeta.get();
    unique_ptr<Rifle> ptrRifle = make_unique<Rifle>();
    Rifle* rifle = ptrRifle.get();
public:
    void modRecojer(int weaponID);
    void modDisparar(); void modDejar(); void modActual();
};

void Model::modRecojer(int weaponID){
    if (weaponID==1)
    {
        soldado->recoger(revolver);
    }
    else if (weaponID==2)
    {
        soldado->recoger(escopeta);
    }
    else if (weaponID==3)
    {
        soldado->recoger(rifle);
    }
    
}

void Model::modDisparar(){
    soldado->disparar();
}

void Model::modDejar(){
    soldado->dejar();
}

void Model::modActual(){
    soldado->armaActual();
}