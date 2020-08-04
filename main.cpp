#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include "pelaaja.h"

using namespace std;

string kerroVoittaja();

pelaaja p1;
pelaaja p2;
pelaaja p3;
pelaaja p4;
pelaaja p5;
pelaaja p6;
pelaaja p7;
pelaaja p8;
pelaaja p9;
pelaaja p10;
string a;
string b;
string c;
string d;
string e;
string f;
string g;
string h;
string j;
string k;
string x;
int n;

int main()
{ 
    cout << "T\x84h\x84n ohjelmaan kirjataan Yatzy-noppapelin tulokset 2-10 pelaajalle. Ohjelma kertoo lopputulokset ja voittajan. "
            "Ensin annetaan pelaajien lukum\x84\x84r\x84 ja nimet, jonka jalkeen jokainen pelaaja heittaa vuorollaan "
            "noppia ja tulokset kirjataan ohjelman antamien neuvojen ja pelin yleisten s\x84\x84nt\x94jen mukaisesti. Kun ohjelma pyyt\x84\x84"
            " kirjoittamaan mihin pisteet kirjataan, k\x84yt\x84 samoja kirjoitusasuja kuin pistetaulukossa. Onnea peliin!" << endl;
    cout << endl;
    cout << "Pelaajien lkm (2-10):" << endl;
    cin >> n;
    if (n >= 2 && n <= 10)
    {
    cout << endl;
    cout << "Pelaajan 1 nimi:" << endl;
    cin >> a;
    cout << "Pelaajan 2 nimi:" << endl;
    cin >> b;

 if (n>=3)
        {
        cout << "Pelaajan 3 nimi:" << endl;
        cin >> c;
        }
 if (n>=4)
        {
        cout << "Pelaajan 4 nimi:" << endl;
        cin >> d;
        }
 if (n>=5)
        {
        cout << "Pelaajan 5 nimi:" << endl;
        cin >> e;
        }
 if (n>=6)
        {
        cout << "Pelaajan 6 nimi:" << endl;
        cin >> f;
        }
 if (n>=7)
        {
        cout << "Pelaajan 7 nimi:" << endl;
        cin >> g;
        }
 if (n>=8)
        {
        cout << "Pelaajan 8 nimi:" << endl;
        cin >> h;
        }
 if (n>=9)
        {
        cout << "Pelaajan 9 nimi:" << endl;
        cin >> j;
        }
 if (n==10)
        {
        cout << "Pelaajan 10 nimi:" << endl;
        cin >> k;
        }
int i=0;
 do
{
    cout << endl;
    p1.TulostaTaulukko(a);
    p1.pisteidenKirjaus(a);
    cout << endl;
    p2.TulostaTaulukko(b);
    p2.pisteidenKirjaus(b);
    cout << endl;
if (n>=3)
{
    p3.TulostaTaulukko(c);
    p3.pisteidenKirjaus(c);
    cout << endl;
}
if (n>=4)
{
    p4.TulostaTaulukko(d);
    p4.pisteidenKirjaus(d);
    cout << endl;
}
if (n>=5)
{
    p5.TulostaTaulukko(e);
    p5.pisteidenKirjaus(e);
    cout << endl;
}
if (n>=6)
{
    p6.TulostaTaulukko(f);
    p6.pisteidenKirjaus(f);
    cout << endl;
}
if (n>=7)
{
    p7.TulostaTaulukko(g);
    p7.pisteidenKirjaus(g);
    cout << endl;
}
if (n>=8)
{
    p8.TulostaTaulukko(h);
    p8.pisteidenKirjaus(h);
    cout << endl;
}
if (n>=9)
{
    p9.TulostaTaulukko(j);
    p9.pisteidenKirjaus(j);
    cout << endl;
}
if (n>=10)
{
    p10.TulostaTaulukko(k);
    p10.pisteidenKirjaus(k);
}

    p1.kokonaispisteet();
    p2.kokonaispisteet();
if (n>=3)
{
    p3.kokonaispisteet();
}
if (n>=4)
{
    p4.kokonaispisteet();
}
if (n>=5)
{
    p5.kokonaispisteet();
}
if (n>=6)
{
    p6.kokonaispisteet();
}
if (n>=7)
{
    p7.kokonaispisteet();
}
if (n>=8)
{
    p8.kokonaispisteet();
}
if (n>=9)
{
    p9.kokonaispisteet();
}
if (n==10)
{
    p10.kokonaispisteet();
};

i++;

}

while(i < 15);

 cout << endl;
 cout << "Voittaja on " << kerroVoittaja() << "!" << endl;
 cout << endl;

}
    else
    {
        cout << "Aloita alusta ja kirjaa pelaajien m\x84\x84r\x84ksi 2-10." << endl;
    }
     return 0;
}

string kerroVoittaja()
{
    vector<pelaaja> pelaajat= { p1, p2, p3, p4, p5, p6, p7, p8, p9, p10 };
    string voittaja = p1.haeNimi();
    int suurin_tulos = p1.lopputulos();
    for(pelaaja& px: pelaajat)
    {
        if(px.lopputulos() > suurin_tulos)
        {
            suurin_tulos = px.lopputulos();
            voittaja = px.haeNimi();
        }
    }
    return voittaja;
}
