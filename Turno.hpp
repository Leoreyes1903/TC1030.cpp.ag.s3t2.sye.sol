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

std::ostream& operator<<(std::ostream& os, const Turno& turno) {
    os << "Jugador: " << turno.jugador << std::endl;
    os << "Dado: " << turno.dado << std::endl;
    os << "Resultado: " << turno.resultado << std::endl;
    return os;