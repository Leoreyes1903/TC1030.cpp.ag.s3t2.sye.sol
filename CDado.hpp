#pragma once

#include <ctime>
#include <cstdlib>

class CDado{
    private:
        bool switchrandom=true;

    public:
        static int cara;
        void resetdado();
        CDado();
        CDado(bool);
        int getValorDado();
        int operator+(int n);
};