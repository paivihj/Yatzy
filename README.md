# Yatzy
Tämä Yatzy-noppapelin pöytäkirja on tehty C++-ohjelmointikurssin lopputyönä. Ohjelma ajetaan komentoikkunassa ja vaatii kääntäjän toimiakseen (koodi on kirjoitettu
ja testattu Qt Creatorilla, mutta muukin C++:aa kääntävä kääntäjä toimii).

Jos Yatzy-peli ei ole ennestään tuttu, voi sen sääntöihin tutustua esim. täällä https://www.lautapeliopas.fi/saannot/yatzy/. Itse nopan heitto tapahtuu oikeilla nopilla
ja tulokset kirjataan ohjelmaan. Pelaajia voi olla 2-10. Ohjelma toimii intuitiivisesti ja kertoo mitä missäkin vaiheessa pitää tehdä. Pelin päätyttyä ohjelma kertoo
pelaajien lopulliset pisteet sekä voittajan.

Tämän työn tekemisessä haastavinta oli alkuun pääseminen, erityisesti miten hyödyntää luokkia ja olioita ja miten rakentaa tulostaulukko ohjelmaan. Lähdin liikkeelle
hyvin yksinkertaisilla versioilla, joissa ei vielä ollut luokkia käytössä ja kun sain ne toimimaan kehitin ohjelmaa monimutkaisempaan suuntaan. Lopulta ihan 
ensimmäisestä versiosta ei jäänyt juuri mitään lopulliseen versioon, mutta oman oppimisen kannalta kaikki työ oli hyödyllistä. Voittajan kertovan for-silmukan teossa sain 
apua kokeneemmalta koodarilta; en osannut itsenäisesti tehdä olioita käsittelevää silmukkaa, vaikka perussilmukoiden teko on hyvinkin tuttua. Sain itsekin kirjoitettua
saman asian toteuttavan koodin, mutta paljon kömpelömmällä tavalla, jossa jokaisen pelaajan (olion) lopputulosta verrattiin erillisellä if-lauseella toisten tuloksiin. 
Tämä oli siis myös yksi haastava osuus työssä.

Jos alkaisin tehdä vastaavaa projektia uudelleen alusta, perehtyisin Gitin ja GitHubin käyttöön ennen itse koodaamisen aloittamista! Nyt minulla oli jo koodi 
kirjoitettuna siinä vaiheessa, kun siirsin sen GitHubiin. Sen käyttö jo työn tekovaiheessa olisi helpottanut ainakin version hallintaa.
