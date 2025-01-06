#ifndef FUNKCIJOS_H
#define FUNKCIJOS_H

#include "mylib.h"

class Planeris
{
private:
    string Medziaga;
    string Sparno_Tipas;
    string Startavimas;
    double Svoris;
    string Gamintojas;
    string Modelis;

public:
    Planeris();
    Planeris(const string &medziaga, const string &sparno_tipas, const string &startavimas,
             double svoris, const string &gamintojas, const string &modelis);

    ~Planeris();

    Planeris(const Planeris &kitas);
    Planeris &operator=(const Planeris &kitas);

    Planeris(Planeris &&kitas) noexcept;
    Planeris &operator=(Planeris &&kitas) noexcept;

    void SetMedziaga(const string &medziaga);
    string GetMedziaga() const;
    void SetSparnoTipas(const string &sparno_tipas);
    string GetSparnoTipas() const;
    void SetStartavimas(const string &startavimas);
    string GetStartavimas() const;
    void SetSvoris(double svoris);
    double GetSvoris() const;
    void SetGamintojas(const string &gamintojas);
    string GetGamintojas() const;
    void SetModelis(const string &modelis);
    string GetModelis() const;
};

bool PalyginimasPagalSvoriMazTvarka(const Planeris &a, const Planeris &b);

#endif // FUNKCIJOS_H