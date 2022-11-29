#ifndef RESERVA_H
#define RESERVA_H

#include "Vuelo.h"

class Reserva
{
    public:
        Reserva();
        Reserva(string, string, string);
        Reserva(string, string, string, string);

        virtual ~Reserva();

        void setIdReserva(string);
        string getIdReserva();

        void setIdCliente(string);
        string getIdCliente();

        void setIdVuelo(string);
        string getIdVuelo();

        void setAsiento(string);
        string getAsiento();

        void setPrecio(float);
        float getPrecio();

        void buscarVuelo(vector<Vuelo>);
        void detallesVuelo();
        void reservarVuelo();
        void cancelarReserva();
        void descuento();


    protected:

    private:

        string id_reserva;
        string id_cliente;
        string id_vuelo;
        string asiento;
        float precio;
};

#endif // RESERVA_H
