#include "pelaaja.h"
#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

using namespace std;

pelaaja::pelaaja()
{
    {
        for (int j=0; j<15; j++)
        {
            pelaajax[j]=0;

        }
    }
}

void pelaaja::pisteidenKirjaus(string a)
{
    int x;
    string y;
    nimi = a;
    cout << nimi << ", heit\x84 nopat (max. 3 heittoa)." << endl;
    cout << "Kirjoita mihin pisteet kirjataan?" << endl;
    cin >> y;
    cout << "Pisteet:" << endl;
    cin >> x;
    if (y == "ykkoset" && x<=6)
    {
        if (pelaajax[0] == 0)
        {
            pelaajax[0]=x;
        }
        else
        {
                cout << "Kirjoitetussa tulostaulukon kohdassa on jo tulos." << endl;
                pisteidenKirjaus(a);
        }
    }
    else if (y == "kakkoset" && (x == 0||x == 2 || x == 4 || x == 6 || x == 8 || x == 10))
    {
        if (pelaajax[1] == 0)
        {
            pelaajax[1]=x;
        }
        else
        {
                cout << "Kirjoitetussa tulostaulukon kohdassa on jo tulos." << endl;
                pisteidenKirjaus(a);
        }
    }
    else if (y == "kolmoset" && (x==0||x==3||x==6||x==9||x==12||x==15))
    {
        if (pelaajax[2] == 0)
        {
            pelaajax[2]=x;
        }
        else
        {
                cout << "Kirjoitetussa tulostaulukon kohdassa on jo tulos." << endl;
                pisteidenKirjaus(a);
        }
    }
    else if (y == "neloset" && (x==0||x==4||x==8||x==12||x==16||x==20))
    {
        if (pelaajax[3] == 0)
        {
            pelaajax[3]=x;
        }
        else
        {
                cout << "Kirjoitetussa tulostaulukon kohdassa on jo tulos." << endl;
                pisteidenKirjaus(a);
        }
    }
    else if (y == "vitoset" && (x==0||x==5||x==10||x==15||x==20||x==25))
    {
        if (pelaajax[4] == 0)
        {
            pelaajax[4]=x;
        }
        else
        {
                cout << "Kirjoitetussa tulostaulukon kohdassa on jo tulos." << endl;
                pisteidenKirjaus(a);
        }
    }
    else if (y == "kutoset" && (x==0||x==6||x==12||x==18||x==24||x==30))
    {
        if (pelaajax[5] == 0)
        {
            pelaajax[5]=x;
        }
        else
        {
                cout << "Kirjoitetussa tulostaulukon kohdassa on jo tulos." << endl;
                pisteidenKirjaus(a);
        }
    }
    else if (y == "pari" && x%2==0 && x<=12)
    {
        if (pelaajax[6] == 0)
        {
            pelaajax[6]=x;
        }
        else
        {
                cout << "Kirjoitetussa tulostaulukon kohdassa on jo tulos." << endl;
                pisteidenKirjaus(a);
        }
    }
    else if (y == "parit" && x%2==0 && x<=24)
    {
        if (pelaajax[7] == 0)
        {
            pelaajax[7]=x;
        }
        else
        {
                cout << "Kirjoitetussa tulostaulukon kohdassa on jo tulos." << endl;
                pisteidenKirjaus(a);
        }
    }
    else if (y == "kolmosluku" && x%3==0 && x<=18)
    {
        if (pelaajax[8] == 0)
        {
            pelaajax[8]=x;
        }
        else
        {
                cout << "Kirjoitetussa tulostaulukon kohdassa on jo tulos." << endl;
                pisteidenKirjaus(a);
        }
    }
    else if (y== "nelosluku" && x%4==0 && x<=24)
    {
        if (pelaajax[9] == 0)
        {
            pelaajax[9]=x;
        }
        else
        {
                cout << "Kirjoitetussa tulostaulukon kohdassa on jo tulos." << endl;
                pisteidenKirjaus(a);
        }
    }
    else if (y == "pienisuora" && (x==15||x==0))
    {
        if (pelaajax[10] == 0)
        {
            pelaajax[10]=x;
        }
        else
        {
                cout << "Kirjoitetussa tulostaulukon kohdassa on jo tulos." << endl;
                pisteidenKirjaus(a);
        }
    }
    else if (y == "isosuora" && (x==20||x==0))
    {
        if (pelaajax[11] == 0)
        {
            pelaajax[11]=x;
        }
        else
        {
                cout << "Kirjoitetussa tulostaulukon kohdassa on jo tulos." << endl;
                pisteidenKirjaus(a);
        }
    }
    else if (y == "tayskasi" && x<=30)
    {
        if (pelaajax[12] == 0)
        {
            pelaajax[12]=x;
        }
        else
        {
                cout << "Kirjoitetussa tulostaulukon kohdassa on jo tulos." << endl;
                pisteidenKirjaus(a);
        }
    }
    else if (y == "sattuma" && x<=30)
    {
        if (pelaajax[13] == 0)
        {
            pelaajax[13]=x;
        }
        else
        {
                cout << "Kirjoitetussa tulostaulukon kohdassa on jo tulos." << endl;
                pisteidenKirjaus(a);
        }
    }
    else if (y == "yatzy" && (x == 50||x==0))
    {
        if (pelaajax[14] == 0)
        {
            pelaajax[14]=x;
        }
        else
        {
                cout << "Kirjoitetussa tulostaulukon kohdassa on jo tulos." << endl;
                pisteidenKirjaus(a);
        }
    }
    else
    {
        cout << "Virhe kirjoituksessa tai tulos ei mahdollinen." << endl;
        pisteidenKirjaus(a);
    }
}


void pelaaja::TulostaTaulukko(string a)
{
        nimi = a;
        cout << "Pelaajan " << nimi << " pistetaulukko:" << endl;
        for (int j=0; j<15; j++)
        {
        cout << kohdat[j] << "  " << pelaajax[j] << endl;
        }
}

void pelaaja::kokonaispisteet()
{
    int bonus=0;
    int ylasumma=0;
    for (int j=0; j<6; j++)
    {ylasumma=ylasumma+pelaajax[j];}
    if (ylasumma >= 63){bonus = 50;}
    summa = 0;
    for (int j=0; j<15; j++)
    {
        summa = summa + pelaajax[j];
        total=summa + bonus;
    }
    cout << "Pelaajan " << nimi << " kokonaispisteet: " << total << endl;
}

string pelaaja::haeNimi()
{
    return nimi;
}

int pelaaja::lopputulos()
{
    return total;
}

