#include "h2a.h"
#include <iostream>
#include <memory>


    using namespace std;

int main()
{

    Car objCar1;
    objCar1.setBrand("BMW");
    objCar1.setModel("iX");
    objCar1.setYearModel(2010);

    Car objCar2("Volvo","EX30",2001);

    objCar1.printData();
    objCar2.printData();

    rectangle *objrectangle =new rectangle;
    objrectangle->setHeight(15);
    objrectangle->setWidth(20);

    cout<<"Suorakulmion pinta-ala: " <<objrectangle->getArea()<< endl;
    cout<<"Suorakulmion ymparysmitta: " <<objrectangle->getCircum()<< endl;

    delete objrectangle;
    objrectangle = nullptr;


    unique_ptr<Student> objstudent=make_unique<Student>();
    objstudent->setName("Olli Oppilas");
    objstudent->setStudentNumber(19);
    objstudent->setAverage(4.7);

    cout<<"Opiskelijan nimi on " <<objstudent->getName()<<endl;
    cout<<"opiskelijanumero " <<objstudent->getStudentNumber()<<endl;
    cout<<"ja keskiarvo " <<objstudent->getAverage()<<endl;



    // Car *objCar1=new Car;
    // objCar1->setBrand("BMW");
    // objCar1->setModel("iX");
    // objCar1->setYearModel(2010);

    // Car *objCar2=new Car("Volvo","EX30",2001);

    // objCar1->printData();
    // objCar2->printData();


    // delete objCar1;
    // objCar1 = nullptr;
    // delete objCar2;
    // objCar2 = nullptr;



    return 0;
}
