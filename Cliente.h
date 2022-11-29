#ifndef CLIENTE_H
#define CLIENTE_H

#include "Reserva.h"

class Cliente
{
    public:
        Cliente();
        Cliente(string, string);

        virtual ~Cliente();

        void setNombre(string);
        string getNombre();

        void setId(string);
        string getId();

        void setReserva(Reserva);
        Reserva getReserva();

    protected:

    private:
        string nombre;
        string id;
        Reserva reserva;
};

#endif // CLIENTE_H
