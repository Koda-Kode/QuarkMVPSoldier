#include <windows.h> 
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
#include "presenter.hpp"

class View
{
private:
    unique_ptr<Presenter> pres = make_unique<Presenter>();
public:
    void menuInicio(); void menuArmas(); void esperarInput();
};


void View::esperarInput(){
    int key = 0;
    // Cambiar estado para los menus
    int estado=0;
    
    while (1)
    {
            // Interacción
        key=getch();
            // Menus
        if(estado==0){
            if (key==49)
            {
                menuArmas();
                estado=1;
            }
            else if(key==50){
                pres->presDejar();
            }
            else if(key==51){
                pres->presDisparar();
            }
            else if(key==52){
                pres->presArmaActual();
            }
                // Espacio para terminar
            else if(key==32){
                break;
            }
        }
        else{
            if (key==49)
            {
                pres->presRecojer(1);
            }
            else if(key==50){
                pres->presRecojer(2);
            }
            else if(key==51){
                pres->presRecojer(3);
            }
                // Espacio para volver
            else if(key==32){
                menuInicio();
                estado=0;
            }
        }
    }

}

void View::menuInicio(){
    cout << "\e[1;1H\e[2J";
    cout << "\n -== Bienvenido al campo de entrenamiento, soldado ==-\n" << endl;
    cout << "Que desea hacer?" << endl;
    cout << "(Presione el numero correspondiente a la opcion del menu)" << endl;

    cout << "1 - Recoger un arma" << endl;
    cout << "2 - Dejar el arma" << endl;
    cout << "3 - Disparar" << endl;
    cout << "4 - Ver arma actual" << endl;
    cout << "Espacio - Salir del programa" << endl;
}

void View::menuArmas(){
    cout << "\e[1;1H\e[2J";
    cout << "Por favor, escoja el arma que desea utilizar:" << endl;

    cout << "1 - Revolver" << endl;
    cout << "2 - Escopeta" << endl;
    cout << "3 - Rifle" << endl;
    cout << "Espacio - Volver atras" << endl;
}