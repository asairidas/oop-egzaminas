#include "../include/funkcijos.h"

Planeris::Planeris() : Medziaga(""), Sparno_Tipas(""), Startavimas(""), Svoris(0.0), Gamintojas(""), Modelis("") {}

Planeris::Planeris(const string &medziaga, const string &sparno_tipas, const string &startavimas,
                   double svoris, const string &gamintojas, const string &modelis)
    : Medziaga(medziaga), Sparno_Tipas(sparno_tipas), Startavimas(startavimas), Svoris(svoris), Gamintojas(gamintojas), Modelis(modelis) {}

Planeris::~Planeris() = default;

Planeris::Planeris(const Planeris &kitas)
    : Planeris(kitas.Medziaga, kitas.Sparno_Tipas, kitas.Startavimas, kitas.Svoris, kitas.Gamintojas, kitas.Modelis) {}

Planeris &Planeris::operator=(const Planeris &kitas)
{
    if (this == &kitas)
        return *this;

    Planeris temp(kitas);
    swap(Medziaga, temp.Medziaga);
    swap(Sparno_Tipas, temp.Sparno_Tipas);
    swap(Startavimas, temp.Startavimas);
    swap(Svoris, temp.Svoris);
    swap(Gamintojas, temp.Gamintojas);
    swap(Modelis, temp.Modelis);

    return *this;
}

Planeris::Planeris(Planeris &&kitas) noexcept
    : Medziaga(exchange(kitas.Medziaga, "")),
      Sparno_Tipas(exchange(kitas.Sparno_Tipas, "")),
      Startavimas(exchange(kitas.Startavimas, "")),
      Svoris(exchange(kitas.Svoris, 0.0)),
      Gamintojas(exchange(kitas.Gamintojas, "")),
      Modelis(exchange(kitas.Modelis, ""))
{
}

Planeris &Planeris::operator=(Planeris &&kitas) noexcept
{
    if (this == &kitas)
        return *this;

    Medziaga = exchange(kitas.Medziaga, "");
    Sparno_Tipas = exchange(kitas.Sparno_Tipas, "");
    Startavimas = exchange(kitas.Startavimas, "");
    Svoris = exchange(kitas.Svoris, 0.0);
    Gamintojas = exchange(kitas.Gamintojas, "");
    Modelis = exchange(kitas.Modelis, "");

    return *this;
}

void Planeris::SetMedziaga(const string &medziaga)
{
    Medziaga = medziaga;
}

string Planeris::GetMedziaga() const
{
    return Medziaga;
}

void Planeris::SetSparnoTipas(const string &sparno_tipas)
{
    Sparno_Tipas = sparno_tipas;
}

string Planeris::GetSparnoTipas() const
{
    return Sparno_Tipas;
}

void Planeris::SetStartavimas(const string &startavimas)
{
    Startavimas = startavimas;
}

string Planeris::GetStartavimas() const
{
    return Startavimas;
}

void Planeris::SetSvoris(double svoris)
{
    Svoris = svoris;
}

double Planeris::GetSvoris() const
{
    return Svoris;
}

void Planeris::SetGamintojas(const string &gamintojas)
{
    Gamintojas = gamintojas;
}

string Planeris::GetGamintojas() const
{
    return Gamintojas;
}

void Planeris::SetModelis(const string &modelis)
{
    Modelis = modelis;
}

string Planeris::GetModelis() const
{
    return Modelis;
}

bool PalyginimasPagalSvoriMazTvarka(const Planeris &a, const Planeris &b)
{
    return a.GetSvoris() > b.GetSvoris();
}