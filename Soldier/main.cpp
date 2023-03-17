#include <memory>
    // Yep I'm lazy
using namespace std;

#include "viewDef.cpp"


int main(){
    unique_ptr<View> vista = make_unique<View>();

    vista->menuInicio();
    vista->iniciarJuego();

    return 0;
}