#pragma once
#include <memory>
using namespace std;
#include "presenterDef.cpp"

class View
{
private:
    unique_ptr<Presenter> pres = make_unique<Presenter>();
public:
    void menuInicio();
    void menuArmas();
    void iniciarJuego();
};