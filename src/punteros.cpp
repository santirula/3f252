#include <iostream>
#include <string>
#include <list>
using namespace std;

class Humano{
private:
    string nombre;
    int edad;
public:
    string LeerNombre();
    int leerEdad();

};

class Alumno : public Humano{
private:
    int registro;
public:
    int LeerRegistro();

};

class Empleado : public Humano
{
private:
    long registro;
public:
    long LeerNumeroEmpleado();

};


int main (int argc, char const *argv¨[])
{
    Humano* humano = NULL;
    Alumno* alumno = new Alumno();
    Empleado* empleado = new Emplado();

    humano = alumno;
    humano->leerEdad();

    humano = empleado;
    humano->leerEdad();

    list<Humano*> listaHumanos;
    listaHumanos.emplace_back(new Alumno());
    listaHumanos.emplace_back(new Alumno());
    listaHumanos.emplace_back(new Alumno());
    listaHumanos.emplace_back(new Alumno());
    listaHumanos.emplace_back(new Empleado());
    listaHumanos.emplace_back(new Empleado());
    listaHumanos.emplace_back(new Empleado());
    listaHumanos.emplace_back(new Empleado());
    
    for (auto &&humano : listaHumanos)
    {
       
        cout<<humano->LeerNombre() <<endl;

    };



    return 0;
}