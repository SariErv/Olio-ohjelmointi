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

Tehtävässä käsiteltiin referenssejä, assosiaatiota ja aggregaatiota. 
Tässä harjoituksessa kerrataan mitä tarkoittavat termit muistiosoite ja osoitin l. pointteri. Lisäksi tutustutaan uuteen käsitteeseen referenssi.

C++-ohjelmoinnissa referenssi on viittaus olemassa olevaan muuttujaan. Se toimii aliaksena, eli referenssi ja alkuperäinen muuttuja viittaavat samaan muistipaikkaan. Referenssi määritellään käyttämällä &-operaattoria. Referensseillä on seuraavat ominaisuudet:

Ne on sidottava alustuksen yhteydessä, eikä niitä voi vaihtaa viittaamaan toiseen muuttujaan myöhemmin.
Käyttämällä referenssiä voidaan välttää kopioimasta suuria tietorakenteita funktioiden parametreissa.
Kaikki muutokset referenssin kautta vaikuttavat alkuperäiseen muuttujaan.
Esimerkki:
 
    int a = 10; 
    int &ref = a; // ref on viittaus muuttujaan a 
    ref = 20; // nyt myös a on 20 

Referenssejä käytetään usein funktioiden parametreina ja palautusarvoina tehokkuuden parantamiseksi.
Harjoitus5
HUOM!: Luo kullekin luokalle erillinen h-tiedosto ja cpp-tiedosto.

# Vaihe1
1. Luo uusi C++ sovellus
2. Luo mainissa:
    1. int muuttuja a ja anna arvoksi 5
    2. int muuttuja b ja anna arvoksi 10
3. Tulosta muuttujien a ja b arvot ja osoitteet


4. Lisää osoitinmuuttuja myPointer ja sijoita siihen muuttujan a osoite ja
    1. Tulosta osoittimen osoittaman muistipaikan osoite
    2. Tulosta osoittimen osoittaman muistipaikan sisältö
5. Suorita sovellus jolloin tuloksena pitäisi olla jotain tällaista:

6. Sijoita osoittimeen myPointer muuttujan b osoite ja
    1. Tulosta osoittimen osoittaman muistipaikan osoite
    2. Tulosta osoittimen osoittaman muistipaikan sisältö
7. Suorita sovellus jolloin tuloksena pitäisi olla jotain tällaista:

8. Luo referenssi nimeltään refA ja laita se viittaamaan muuttujaan a ja
    1. refA:n osoittama osoite
    2. refA:n osoittaman muistipaikan sisältö
9. Suorita sovellus jolloin tuloksena pitäisi olla jotain tällaista:
  

10. Kokeile voitko muuttaa refA:n osoittamaan b:n osoitteeseen?

# Vaihe2(Assosiation)

1. Lisää sovellukseen luokka ClassB, ja siihen
    1. private string muuttuja nimeltään info
    2. get ja set metodit muuttujalle info
2. Lisää sovellukseen luokka AssosiationA

Edellisen vaiheen tarkoitus on havainnollistaa, että alkuperäisen B-olion data ei muutu, vaikka muokkaat A-olion dataa.

# Vaihe3(Aggregation)

1. Lisää edelliseen tehtävään luokka AggregationA

Edellisen vaiheen tarkoitus on havainnollistaa, että myös alkuperäisen B-olion data muuttuu, kun muokkaat A-olion dataa.

Tehtävässä voidaan siis havaita, että kun oliolle A annetaan kopio oliosta B, niin A ei voi vaikuttaa olion B dataan.
Jos oliolle A annetaan referenssinä olion B osoite, niin A:n muokkaus muuttaa B:n dataa.

## H6

## H7