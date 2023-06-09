#pragma once
#include <iostream>
#include <string>

class Turno {
private:
    std::string jugador;
    int dado;
    int resultado;

public:
    Turno(std::string jugador, int dado, int resultado)
        : jugador(jugador), dado(dado), resultado(resultado) {}

    friend std::ostream& operator<<(std::ostream& os, const Turno& turno);
};