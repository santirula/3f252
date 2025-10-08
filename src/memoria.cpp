#include <iostream>
#include <list>
using namespace std;

class Persona{
    public:
    char nombre[10];
    int edad;
};

class Empleado : public Persona{
    public:
    int noEmpleado;
};

class Alumno : public Persona{
    public:
    int Registro;
}

int main(int argc, char const *argv[])
{

cout<<"Tamaños de las variables" << endl;
cout<<"Tamaño int: " << sizeof(int) <<endl;
cout<<"Tamaño long: " << sizeof(long) <<endl;
cout<<"Tamaño float: " << sizeof(float) <<endl;
cout<<"Tamaño double: " << sizeof(double) <<endl;
cout<<"Tamaño bool: " << sizeof(bool) <<endl;
cout<<"Tamaño char: " << sizeof(char) <<endl;
cout<<"Tamaño byte: " << sizeof(byte) <<endl;


cout<<"Direcciones de memoria" << endl;
cout << "Punteros en C++: " << malloc(sizeof(int)) <<endl;
cout <<"Punteros en C: " << new int << endl;

cout<<"Tamanio de punteros" << endl;
cout<< " int* " << sizeof(int*) << endl;
cout <<" char* " << sizeof(char*) <<endl;

cout << "Casteo de tipos" << endl;
void* puntero = (int*) malloc(sizeof(int));
//Casteo de Variables
int ejemplo = 65;
char letra = (char)ejemplo;

//Casteo Polimorfismo
Persona* persona = new Empleado();
Persona* persona2 = new Alumno();

list<Persona*> personas;
personas.emplace_back(persona);
personas.emplace_back(persona2);

cout<< (*persona).edad <<endl;
cout<< (*persona).nombre <<endl;

cout<< persona ->edad<<endl;
cout<< persona->nombre<<endl;


//tratar a todos como personas
for (auto &&p : personas)
{
    cout<< persona->nombre << endl;
    cout<< persona->edad <<endl;
}

return 0;
}