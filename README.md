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

### Vaihe1
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

### Vaihe2(Assosiation)

1. Lisää sovellukseen luokka ClassB, ja siihen
    1. private string muuttuja nimeltään info
    2. get ja set metodit muuttujalle info
2. Lisää sovellukseen luokka AssosiationA

Edellisen vaiheen tarkoitus on havainnollistaa, että alkuperäisen B-olion data ei muutu, vaikka muokkaat A-olion dataa.

### Vaihe3(Aggregation)

1. Lisää edelliseen tehtävään luokka AggregationA

Edellisen vaiheen tarkoitus on havainnollistaa, että myös alkuperäisen B-olion data muuttuu, kun muokkaat A-olion dataa.

Tehtävässä voidaan siis havaita, että kun oliolle A annetaan kopio oliosta B, niin A ei voi vaikuttaa olion B dataan.
Jos oliolle A annetaan referenssinä olion B osoite, niin A:n muokkaus muuttaa B:n dataa.

## H6a

Qt-konsolisovellus

Tehtävässa luodaan Qt-konsolisovellus ja se voitaisiin luoda valitsemalla tyypiksi Qt-console application. 
Tee se kuitenkin ohjeiden mukaan "plain C++" tyyppisenä.

1. Luo uusi sovellus, jonka tyyppi on Non-Qt/Plain C++
2. Muokkaa .pro-tiedostoa:
    1. Lisää rivi QT = core
    2. Poista rivi CONFIG -= qt
3. Lisää luokka MyClass
4. Muokkaa myclass.h muotoon: "valmiiksi annettu"
5. Muokkaa myclass.cpp muotoon: "valmiiksi annettu"
6. Luo main.cpp olio luokasta MyClass ja kutsu sen metodia raiseMySignal


## H6b

Qt-konsolisovellus

Rakenna tämän tehtävän sovellus luomalla sovellus, jonka tyyppinä on Qt-Console hyödyntäen Qt Creatorin ominaisuuksia.

1. Luo uusi sovellus ja valitse nyt tyypiksi Application (Qt)->Qt Console Application
2. Tutki sovelluksen pro-tiedostoa ja main.cpp-tiedostoa
3. Lisää sovellukseen luokka ExampleClass (Qt Creatorin "Add New->C++ Class"). Kun luot luokan rastita
    1. Include QObject
    2. Add Q_OBJECT
    Ja periytä ExampleClass luokasta QObject,
4. Vertaa tiedoston exampleclass.h tiedostoa edellisen tehtävän h-tiedostoon
5. Periytä ExampleClass luokasta QObject
6. Lisää luokkaan: (h-tiedostoon)
    1. public metodi void startToWait();
    2. signals osioon signaali void readyToSay();
    3. public slots osio ja siihen metodi void sayHelloSlot();
    4. Lisää #include <QThread>
    5. Lisää myös #include <QCoreApplication>, jos se puuttuu
7. Kirjoita metodien toteutukset (cpp-tiedostoon)
    1. startToWait() -metodiin seuraava koodi:
                QThread::msleep(1000);
                emit readyToSay();
                
    2. sayHelloSlot() -metodiin seuraava koodi:
                qDebug()<<"Terve";
                
8. Kirjoita luokan muodostimeen rivit:
        qDebug()<<"Start";
        connect... 
        qDebug()<<"End";
        
Muokkaa edellä tuota connect-riviä, niin että readyToSay-signaali yhdistetään slottiin sayHelloSlot. Tuon connect-funktion syntaksi on kuvattu sivulla https://peatutor.com/qt/signal_slot.php
9. Luo main.cpp:ssä luokan ExampleClass-olio ja kutsu sen metodia startToWait
10. Testaa sovellustasi

Huom! qDebug toimii myös näin qDebug("Terve");, mutta yllä oleva tapa on uudempi.

## H7
Tässä tehtävässä harjoitellaan QtWidget-sovelluksen luontia.

Qt Widget -sovellus on graafinen käyttöliittymäsovellus, joka on rakennettu Qt-käyttöliittymäkirjaston avulla. Se käyttää widgettejä eli käyttöliittymän osia, kuten painikkeita, tekstikenttiä, valikoita ja muita visuaalisia elementtejä, joilla käyttäjä voi olla vuorovaikutuksessa sovelluksen kanssa. Qt Widget -sovellukset ovat yleisiä työpöytäsovelluksissa, ja ne voivat toimia monilla eri käyttöjärjestelmillä, kuten Windowsissa, Linuxissa ja macOS

1. Luo QtWidget sovellus
2. Suorita sovellus
3. Tutki main.cpp tiedoston rakennetta
4. Lisää sovelluksen käyttöliittymään:
    1. Kaksi pushButtonia ja nimeä oliot: btnCount ja btnReset
    2. Lisää lineEdit ja nimeä olio: txtResult ja laita arvoksi 0
    3. Lisää label ja nimeä olio: labelInfo ja laita tekstiksi "Painiketta painettu 0 kertaa"
5. Esittele mainwindow.h tiedostossa privaatti int tyyppinen muuttuja nimeltään counter ja aseta sille alkuarvo nolla
6. Luo Count-painikkeen clicked signaalille SLOT, joka kasvattaa counter:ia ja tulostaa tekstin labeliin ja lineEdittiin. Huomaa, että int muuttuja on muutettava QStringiksi, jotta sen voi tulostaa labeliin ja lineEdittiin.
    QString s = QString::number(counter);
    
7. Luo Reset-painikkeen clicked signaalille SLOT, joka nollaa counterin ja tulostaa tekstin labeliin ja lineEdittiin.

Sovelluksen toiminta:
1. Kun sovellus käynnistyy, se näyttää tältä
terminal
2. Kun painiketta Count on painettu kaksi kertaa, sovellus näyttää tältä:
terminal
3. Jokainen Count painikkeen painallus siis kasvattaa sekä lineEditin lukemaa, että labelin tekstin lukemaa
4. Reset painikkeen painaminen nollaa lukeman, jolloin näkymä on sama kuin alussa