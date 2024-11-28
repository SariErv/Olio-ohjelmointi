# Olio-ohjelmoinnin harjoituksia

## H1

"Kirjoita C++-sovellus, joka kysyy kaksi kokonaislukua (a ja b) ja tulostaa niiden summan ja osamäärän. Osamäärä tulostetaan kahdella desimaalilla."

Toteutettu harjoitus Vaihe 1, Vaihe 2 ja Vaihe 3, joissa käytin header- /cpp tiedostoja.
Harjoituksessa myös kommentteihin laitettuna opettajan näyttämä harjoitus luennolla joka laskee kertomaa kahdelle kokonaisluvulle. 

## H2a

"Tee kaikki tehtävässä mainitut luokat samaan projektiin. Noudata kussakin luokassa periaatetta
<ul>
<li>jäsenmuuttujat ovat privaatteja</li>
<li>metodit ovat publikkeja"</li>
</ul>

Harjoituksessa oli kolme vaihetta.

Ensimmäisessä vaiheessa luotiin pinomuistiin luokka nimeltään Car, tälle määriteltiin jäsenmuuttujia sekä metodeita.
Pääohjelmassa tulostettiin tiedot käyttämällä printdata() metodia.
Testasin tässä olioiden käyttöä kahdella eri tavalla opettajan luennosta inspiroituneena.

Toisessa vaiheessa luotiin Rectangle-luokka kekomuistiin. Luokalle määriteltiin jäsenmuuttujia sekä metodeita.
Kahdellla metodeista laskettiin laskutoimitusia ja vastaukset tulostettiin kahdella muulla metodilla. Lopuksi tuhottiin Olio.

Kolmannessa vaiheessa luotiin Student niminen luokka smart pointtereilla. Luokalle lisätiin myös jäsenmuuttujia sekä metodeita. 
Tässä vaiheessa oli tarkoitus viimeistään opetella käyttämään Qt.creatorin Refactor toimintoa, jolla sai helposti luotua getter ja setter metodit.
Opiskelijan tiedot syötettiin setter metodeja käyttäen ja tiedot tulostettiin näkyviin getter metodien avulla. 


## H2b

Harjoituksessa pyydettiin luomaan luokka nimeltään Car.
Luokalle tuli kolme jäsenmuuttujaa, brand, model ja yearModel. Lisäksi luokalle lisätiin kaksi metodia.
Pääohjelmassa tuli luoda vektori nimeltään carList ja luoda siihen kolme Car-luokan oliota. Tämän jälkeen oliot lisättiin listaan.
Tehtävä tuli valmiiksi tulostamalla ensin toisen alkion tiedot ja tämän jälkeen kaikkien alkioiden tiedot käyttämällä for silmukkaa. 

## H3a

Tässä harjoituksessa opiskellaan perintää ja UML-luokkakaavioiden tulkintaa.
Noudata käytäntöä että kullekkin luokalle luodaan oma header-tiedosto ja oma cpp-tiedosto, joilla on sama nimi kuin luokalla.
Harjoituksen kantaluokaksi luotiin Chef ja sille metodit Chef(string), makeSalad(void) ja makeSoup(void).
Tämän jälkeen lisättiin luokka ItalianChef joka perii luokan Chef.
ItalianChef luokalle luotiin metodit ItalianChef(string), getName(string) ja makePasta(void).

## H3b

Tässä tehtävässä harjoitellaan periytymistä ja metodien ylikirjoittamista C++-ohjelmoinnissa.
Tavoitteena on ymmärtää, miten perivä luokka voi ylikirjoittaa kantaluokan metodin, ja nähdä polymorfismi käytännössä C++:ssa.

1. Luotuasi projektin, lisää siihen kantaluokka nimeltä Animal, joka sisältää virtuaalisen metodin callOut. Tämä metodi tulostaa tekstin "Eläin ääntelee."
2. Luo kantaluokasta perivä luokka nimeltä Dog, joka ylikirjoittaa metodin callOut. Ylikirjoitetun metodin tulisi tulostaa teksti "Koira haukkuu!"
3. Kirjoita main-funktio, jossa luodaan Animal-luokan olio ja Dog-luokan olio.
4. Kutsu molemmissa tapauksissa callOut-metodia ja varmista, että oikea viesti tulostuu.
5. Varmista, että luomasi oliot tuhoutuvat.

## H4

Tässä harjoituksessa opiskellaan vahvaa koostetta(kompositiota) ja UML-luokkakaavion tulkintaa. Harjoituksessa Car-luokan olio luo Engine-luokan olion ja neljä Wheel-luokan oliota. Car-luokka on siis koosteluokka.

Miksi tässä käytetään koostetta eikä perintää?
Ei voida sanoa, että auto on rengas tai rengas on auto, joten perintä ei tule kysymykseen.
Voidaan sanoa, että autossa on rengas, ja autossa on moottori, siksi siis kooste.

Tässä tehtävässä tarkoituksena on mallintaa yksinkertainen auton rakenne C++:ssa käyttämällä kompositiota. Sinun tulee luoda luokat Engine, Wheel ja Car, ja yhdistää nämä osat luokkaan Car komposition avulla.

Vaihessä luotavan sovelluksen luokkakaavio on seuraava:
Tässä tehtävässä on tarkoituksena mallintaa yksinkertainen auton rakenne C++:ssa käyttämällä kompositiota. Sinun tulee luoda luokat Engine, Wheel ja Car,
ja yhdistää nämä osat luokkaan Car komposition avulla.

1. Luokan Engine toteutus:
Luo luokka Engine, joka sisältää seuraavat ominaisuudet:
int horsepower: moottorin hevosvoimat.
double displacement: moottorin tilavuus litroissa.
Luo konstruktori ja kaaviossa esitetyt getterit ja setterit yllä oleville ominaisuuksille.

2. Luokan Wheel toteutus:
Luo luokka Wheel, joka sisältää seuraavat ominaisuudet:
int size: renkaan koko (esim. tuumina).
string type: renkaan tyyppi (esim. "kesärengas" tai "talvirengas").
Luo konstruktori ja kaaviossa esitetyt getterit ja setterit yllä oleville ominaisuuksille.

3. Luokan Car toteutus:
Luo luokka Car, joka koostuu seuraavista osista:
Yksi Engine-olio.
Neljä Wheel-oliota.
string model: auton malli.
string brand: auton merkki.
Luo konstruktori ja kaaviossa esitetyt getterit ja setterit yllä oleville ominaisuuksille.
Aseta metodissa setEngine moottorille ominaisuudet: hevosvoimia=150 ja moottorintilavuus=2.0
Aseta metodissa setWheels, kullekin renkaalle ominaisuudet: koko=17 ja tyyppi=kesarengas
Toteuta metodi void printDetails(), joka tulostaa auton tiedot, mukaan lukien moottorin ja renkaiden tiedot (katso mallia esimerkkitulosteesta alla).

4. Pääohjelma:
Luo mainissa
Car-olio (brand Toyota ja model Corolla)
Kutsu Car-olion setEngine metodia
Kutsu Car-olion setWheels metodia



## H5

## H6

## H7