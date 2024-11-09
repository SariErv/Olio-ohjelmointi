#include "h2a.h"
#include <iostream>


string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

void Car::printData()
{
    cout<<"AUTON TIEDOT"<<endl;
    cout<<"Auton merkki " <<brand<<" ja malli: "<<model<<endl;
    cout<<"Auton valmistusvuosi: "<<yearModel<<endl;
    cout<<"---------------------------"<<endl;

}

Car::~Car()
{
    cout<<"Car tuhottiin"<<endl;

}

Car::Car()
{

}

Car::Car(string br, string md, int ym)
{
    brand= br;
    model= md;
    yearModel= ym;
}

rectangle::rectangle()
{

}

rectangle::~rectangle()
{
cout<<"rectangle tuhottiin"<<endl;
cout<<"---------------------------"<<endl;
}

rectangle::rectangle(double, double)
{

}

double rectangle::getWidth() const
{
    return width;
}

void rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

double rectangle::getHeight() const
{
    return height;
}

void rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

double rectangle::getArea() const
{
    return width * height;
}

double rectangle::getCircum() const
{
    return 2* (width + height);
}

Student::Student()
{

}

Student::~Student()
{
cout<<"Student tuhottiin"<<endl;
cout<<"---------------------------"<<endl;
}

string Student::getName() const
{
    return Name;
}

void Student::setName(const string &newName)
{
    Name = newName;
}

int Student::getStudentNumber() const
{
    return studentNumber;
}

void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

double Student::getAverage() const
{
    return average;
}

void Student::setAverage(double newAverage)
{
    average = newAverage;
}
