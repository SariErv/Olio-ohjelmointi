#include "car.h"

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<Car> carList;
    //Luodaan Car luokan oliot
    Car objCar1=Car("Volvo","V60",2001);
    Car objCar2=Car("Skoda","Octavia",2015);
    Car objCar3=Car("Honda","CR-V",2004);

    //Lisätään oliot listaan(vektoriin)
    carList.push_back(objCar1);
    carList.push_back(objCar2);
    carList.push_back(objCar3);

    //Tulostetaan toisen alkion tiedot
    carList[1].printdata();

    //Tulostetaan kaikkien autojen tiedot käyttämällä for silmukkaa
    cout<<"Kaikkien autojen tiedot:"<<endl;
    for(int x=0; x<=2; x++){
        carList[x].printdata();
    }

    return 0;
}
