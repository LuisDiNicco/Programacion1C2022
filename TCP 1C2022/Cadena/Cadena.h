#ifndef CADENA_H
#define CADENA_H

#include <vector>
#include <string>
#include "../Fecha/Fecha.h"


class Cadena
{
private:
    char* cadena;

    Cadena(char* cad);
    
    static int cantDigitos(int num);

public:
    Cadena();
    Cadena(const char* cad);
    Cadena(const Cadena& other);
    Cadena(const Fecha& fecha);
    Cadena(char c);
    Cadena(int num);
    Cadena(const string& str);

    ~Cadena();
    
    bool esEnteroPositivo() const;
    unsigned longitud() const;
    
    Cadena& operator=(const Cadena& other);
    Cadena& operator+=(const Cadena& other);
    char operator[](int i) const;

    friend Cadena operator+(const Cadena& cad1, const Cadena& cad2);
    
    vector<Cadena> split(char delim) const;
    int toInt() const;

    friend ostream& operator<<(ostream& sal, const Cadena& cad);
    friend istream& operator>>(istream& is, Cadena& cad);
};


#endif // CADENA_H
