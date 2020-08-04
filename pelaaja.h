#ifndef PELAAJA_H
#define PELAAJA_H
#include <string>

class pelaaja
{
public:

    std::string kohdat[15]={"ykkoset", "kakkoset", "kolmoset", "neloset", "vitoset", "kutoset", "pari", "parit", "kolmosluku","nelosluku",
                            "pienisuora", "isosuora", "tayskasi", "sattuma", "yatzy"};
    std::string nimi;
    int pelaajax[15];
    int n = 0;
    int summa;
    int total;

    pelaaja();
    std::string haeNimi();
    void pisteidenKirjaus(std::string a);
    void TulostaTaulukko(std::string a);
    void kokonaispisteet();
    int lopputulos();

};

#endif // PELAAJA_H
