#ifndef VUELO_H
#define VUELO_H

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Vuelo
{
    public:
        Vuelo();
        Vuelo(string, float, string, string, float, float, map<string, bool>, float);
        virtual ~Vuelo();

        void setIdVuelo(string);
        string getIdVuelo();

        void setNumVuelo(float);
        float getNumVuelo();

        void setAerolinea(string);
        string getAerolinea();

        void setFecha(string);
        string getFecha();

        int getDisponibilidad();

        void setPrecio(float);
        float getPrecio();

        void setDuracion(float);
        float getDuracion();

        void setAsientos(map<string, bool>);
        map<string, bool> getAsientos();

        void setKilometros(float);
        float getKilometos();

        void verAsientosDisponibles();

    protected:

    private:

        string id_vuelo;
        float num_vuelo;
        string aerolinea;
        string fecha;
        bool disponibilidad;
        float precio;
        float duracion;
        map<string, bool> asientos;
        map<string, bool>::iterator i; // Iterador del mapa asientos
        float kilometros_recorridos;
};

#endif // VUELO_H
