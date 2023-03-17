#include <windows.h> 
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <memory>
using namespace std;

#include "view.hpp"


int main(){
    unique_ptr<View> vista = make_unique<View>();

    vista->menuInicio();
    vista->esperarInput();


    return 0;
}