#include <iostream>
using namespace std;
#include "module.hpp"

class Presenter
{
private:
    unique_ptr<Model> mod = make_unique<Model>();
public:
    void presRecojer(int weapon);
    void presDisparar(); void presDejar(); void presArmaActual();
};



void Presenter::presRecojer(int weapon){
    if (weapon>0 && weapon<4)
    {
        mod->modRecojer(weapon);
    }
    else{
        cout << "ID de arma no reconocida" << endl;
    }
    
}

void Presenter::presDisparar(){
    mod->modDisparar();
}

void Presenter::presDejar(){
    mod->modDejar();
}

void Presenter::presArmaActual(){
    mod->modActual();
}