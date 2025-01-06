#include "../include/funkcijos.h"

int main()
{
    list<Planeris> PlanerisListas;
    try
    {

        for (int i = 0; i < 3; ++i)
        {
            string medziaga, sparnoTipas, startavimas, gamintojas, modelis;
            double svoris;

            cout << "Įveskite planerio duomenis (" << i + 1 << "):" << endl;
            cout << "Medžiaga: ";
            cin >> medziaga;
            cout << "Sparno tipas: ";
            cin >> sparnoTipas;
            cout << "Startavimas: ";
            cin >> startavimas;
            cout << "Svoris: ";
            cin >> svoris;
            cout << "Gamintojas: ";
            cin >> gamintojas;
            cout << "Modelis: ";
            cin >> modelis;

            // Sukuriamas Planeris objektas ir pridedamas į sąrašą
            Planeris planeris(medziaga, sparnoTipas, startavimas, svoris, gamintojas, modelis);
            PlanerisListas.push_back(planeris);
        }
        PlanerisListas.sort(PalyginimasPagalSvoriMazTvarka);

        // Spausdinimas patikrinimui naudojant geterius
        cout << "Įvesti planerių duomenys:" << endl;
        for (const auto &planeris : PlanerisListas)
        {
            cout << "Medžiaga: " << planeris.GetMedziaga() << ", "
                 << "Sparno tipas: " << planeris.GetSparnoTipas() << ", "
                 << "Startavimas: " << planeris.GetStartavimas() << ", "
                 << "Svoris: " << planeris.GetSvoris() << ", "
                 << "Gamintojas: " << planeris.GetGamintojas() << ", "
                 << "Modelis: " << planeris.GetModelis() << endl;
        }

        PlanerisListas.clear();
        // Patikrinimas, ar sąrašas yra tuščias
        if (PlanerisListas.empty())
        {
            cout << "Visi planerių duomenys buvo sėkmingai ištrinti." << endl;
        }
        else
        {
            cout << "Klaida: PlanerisListas nėra tuščias." << endl;
        }
    }
    catch (const exception &e)
    {
        cerr << "Klaida: " << e.what() << endl;
        return 1;
    }

    return 0;
}