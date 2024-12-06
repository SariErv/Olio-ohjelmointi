#include <iostream>
#include "assosiationa.h"
#include "aggregationa.h"

using namespace std;

int main()
{
    //int muuttuja a ja anna arvoksi 5
    //int muuttuja b ja anna arvoksi 10
    int a=5;
    int b=10;

    //Tulosta muuttujien a ja b arvot ja osoitteet
    cout<<"a:n arvo on: "<< a <<" ja a:n osoite on:"<<&a<<endl;
    cout<<"b:n arvo on: "<< b <<" ja b:n osoite on:"<<&b<<endl;

    //Lisää osoitinmuuttuja myPointer ja sijoita siihen muuttujan a osoite
    int *myPointer=&a;

    cout<<endl;

    //Tulosta osoittimen osoittaman muistipaikan osoite
    //Tulosta osoittimen osoittaman muistipaikan sisältö
    cout<<"Pointterin osoittama osoite on:"<<myPointer<<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on:"<<*myPointer<<endl;

    cout<<endl;

    //Sijoita osoittimeen myPointer muuttujan b osoite
    myPointer=&b;

    //Tulosta osoittimen osoittaman muistipaikan osoite
    //Tulosta osoittimen osoittaman muistipaikan sisältö
    cout<<"Pointterin osoittama osoite on:"<<myPointer<<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on:"<<*myPointer<<endl;

    //Luo referenssi nimeltään refA ja laita se viittaamaan muuttujaan a
    int &refA=a;

    cout<<endl;

    //refA:n osoittama osoite
    //refA:n osoittaman muistipaikan sisältö
    cout<<"refA osoittaa osoitteeseen on:"<<&refA<<endl;
    cout<<"refA:n osoittaman muistipaikan arvo on:"<<refA<<endl;

    cout<<endl;

    //Kokeile voitko muuttaa refA:n osoittamaan b:n osoitteeseen?
    //refA=b;
    //cout<<"refA osoittaa osoitteeseen on:"<<&refA<<endl;
    //cout<<"refA:n osoittaman muistipaikan arvo on:"<<refA<<endl;
    //Osoite ei muutu vaikka muuttuja muuttuu..

    cout<<endl;

    cout<<"**************************************"<<endl;

    //Assosiation

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;

    cout<<endl;

    //Aggregation

    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;










































    return 0;
}
