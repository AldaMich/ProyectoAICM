#include "Vuelo.h"

Vuelo::Vuelo()
{
    id_vuelo = "Sin Id";
    num_vuelo = 0.0;
    aerolinea = "No definida";
    disponibilidad = true;
    fecha = "No definida";
    precio = 0.0;
    duracion = 0.0;
    asientos[0] = true;
    kilometros_recorridos = 0.0;
}

Vuelo::Vuelo(string id_v, float num_v, string aero, string fec, float prec, float dura, map<string, bool> asien, float km){
    id_vuelo = id_v;
    num_vuelo = num_v;
    aerolinea = aero;
    fecha = fec;
    precio = prec;
    duracion = dura;
    asientos = asien;
    kilometros_recorridos = km;
}

Vuelo::~Vuelo()
{
    //dtor
}

void Vuelo::setIdVuelo(string x){
    id_vuelo = x;
}

string Vuelo::getIdVuelo(){
    return id_vuelo;
}

void Vuelo::setNumVuelo(float x){
    num_vuelo = x;
}

float Vuelo::getNumVuelo(){
    return num_vuelo;
}

void Vuelo::setAerolinea(string x){
    aerolinea = x;
}

string Vuelo::getAerolinea(){
    return aerolinea;
}

void Vuelo::setFecha(string x){
    fecha = x;
}

string Vuelo::getFecha(){
    return fecha;
}

int Vuelo::getDisponibilidad(){
    disponibilidad = false;
    int asientos_disponibles = 0;

    for (i = asientos.begin(); i != asientos.end(); i++){
        bool disponible = i -> second;
        if (disponible == true){
            disponibilidad = true;
            asientos_disponibles ++;
        }
        disponible = i -> second;
    }

    return asientos_disponibles;
}

void Vuelo::setPrecio(float x){
    precio = x;
}

float Vuelo::getPrecio(){
    return precio;
}

void Vuelo::setDuracion(float x){
    duracion = x;
}

float Vuelo::getDuracion(){
    return duracion;
}

void Vuelo::setAsientos(map<string, bool> x){
    asientos = x;
}

map<string, bool> Vuelo::getAsientos(){
    return asientos;
}

void Vuelo::setKilometros(float x){
    kilometros_recorridos = x;
}

float Vuelo::getKilometos(){
    return kilometros_recorridos;
}

//Despliega los aientos que estan disponibles
void Vuelo::verAsientosDisponibles(){
    vector<string> id_asientos; // Id de asientos diposnibles
    vector<string>::iterator y; // Iterador del vector id_asientos
    int asientos_disponibles = 0;
    disponibilidad = false;

    for (i = asientos.begin(); i != asientos.end(); i++){
        bool disponible = i -> second;

        if (disponible == true){ // ¿Esta disponible?
            disponibilidad = true;
            string x = i -> first;
            id_asientos.push_back(x);
            asientos_disponibles ++;
        }

        disponible = i -> second;
    }

    cout << "Hay un total de" << asientos_disponibles << "asientos disponibles.\nEstos son: " << endl;

    int o = 0;

    for (y = id_asientos.begin(); y != id_asientos.end(); y++){
        cout << y[0] << endl;
        o++;
    }
}
