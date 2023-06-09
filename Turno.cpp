#pragma once
#include "Turno.hpp"

std::ostream& operator<<(std::ostream& os, const Turno& turno) {
    os << "Jugador: " << turno.jugador << std::endl;
    os << "Dado: " << turno.dado << std::endl;
    os << "Resultado: " << turno.resultado << std::endl;
    return os;
}