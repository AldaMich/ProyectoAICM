#include "Cliente.h"

Cliente::Cliente()
{
    nombre = "Sin Nombre";
    id = "Sin Identificacion";
}

Cliente::Cliente(string x, string w){
    nombre = x;
    id = w;
}

Cliente::~Cliente()
{
    //dtor
}

void Cliente::setNombre(string x){
    nombre = x;
}

string Cliente::getNombre(){
    return nombre;
}

void Cliente::setId(string x){
    id = x;
}

string Cliente::getId(){
    return id;
}

void Cliente::setReserva(Reserva x){
    reserva = x;
}

Reserva Cliente::getReserva(){
    return reserva;
}
