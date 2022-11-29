#include "Reserva.h"

Reserva::Reserva()
{
    id_reserva = "No definido";
    id_vuelo = "No definido";
    asiento = "No definido";
    precio = 0;
}

Reserva::Reserva(string x, string y, string z){
    id_cliente = x;
    id_vuelo = y;
    asiento = z;
}
Reserva::Reserva(string x, string y, string z, string w){
    id_reserva = x;
    id_cliente = y;
    id_vuelo = z;
    asiento = w;
}

Reserva::~Reserva()
{
    //dtor
}

void Reserva::setIdReserva(string x){
    id_reserva = x;
}

string Reserva::getIdReserva(){
    return id_reserva;
}

void Reserva::setIdCliente(string x){
    id_cliente = x;
}
string Reserva::getIdCliente(){
    return id_cliente;
}

void Reserva::setIdVuelo(string x){
    id_vuelo = x;
}

string Reserva::getIdVuelo(){
    return id_vuelo;
}

void Reserva::setAsiento(string x){
    asiento = x;
}

string Reserva::getAsiento(){
    return asiento;
}

void Reserva::setPrecio(float x){
    precio = x;
}

float Reserva::getPrecio(){
    return precio;
}

void Reserva::buscarVuelo(vector<Vuelo> v){

    int cantidad_filtros;
    string aerolinea;
    string fecha;
    int disponibilidad = -1;
    float sup_precio = -1;  // Límite superior del precio
    vector<Vuelo> seleccion;
    int tamano = v.size();

    cout << "Bienvenido al menú para buscar vuelos :).\n¿De acuerdo a qué quieres buscar tu vuelo?" << endl
            << "1. Aerolinea" << endl
                << "2. Fecha" << endl
                    << "3. Disponibilidad" << endl
                        << "4. Precio" << endl
                            << "Ingresa la cantidad de filtros que vas a usar: " << endl;
    cin >> cantidad_filtros;

    for (int i = 0; i < cantidad_filtros; i++){
        int x;
        cout << "Ingresa el" << i << "filtro: ";
        cin >> x;
        cout << "\n";
        switch(x)
        {
            case 1:
                // Aerolinea
                cout << "Ingresa la aerolinea con las que deseas viajar: ";
                cin >> aerolinea;
                cout << endl;
                break;

            case 2:
                // Fecha
                cout << "Ingresa la fecha en la que deseas viajar en formato dd/mm/aaaa: ";
                cin >> fecha;
                cout << endl;
                break;

            case 3:
                cout << "Ingresa la cantidad de asientos que necesitas: ";
                cin >> disponibilidad;
                cout << endl;
                break;

            case 4:
                cout << "Ingresa el precio maximo del vuelo: ";
                cin >> sup_precio;
                cout << endl;
                break;
        }
    }


    // Buscar y desplegar vuelos con esas características
    cout << "Estos son los algunas especificaciones de los vuelos con las especificaciones dadas: " << endl;

    for (int i = 0; i < tamano; i++){

        string aero = v[i].getAerolinea();
        string fe = v[i].getFecha();
        int dispo = v[i].getDisponibilidad();
        float sup_pre = v[i].getPrecio();

        if ((aero == aerolinea || aerolinea.empty()) && (fe == fecha || fecha.empty()) && (dispo >= disponibilidad || disponibilidad == -1) && (sup_pre <= sup_precio || sup_precio == -1)){
            cout << "Id del vuelo: " << v[i].getIdVuelo() << ", "
                    << "Aerolinea: " << v[i].getAerolinea() << ", "
                        << "Fecha: " << v[i].getFecha() << ", "
                            << "Numero de asientos disponibñes " << v[i].getDisponibilidad() << ", "
                                << "Precio: " << v[i].getPrecio() << endl;
        }
    }
}
/** Métodos en construcción
void Reserva::detallesVuelo();

void Reserva::reservarVuelo(){ // eliminar los asientos resrrvados con el método insert.

}

void Reserva::cancelarReserva(){ // poner en true los asientos que se había reservado

}

void Reserva::descuento(){

}
**/

