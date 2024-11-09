#ifndef H2A_H
#define H2A_H
#include <string>
using namespace std;

class Car
{
private:

    string brand;
    string model;
    int yearModel;

public:

    Car();
    ~Car();
    Car(string, string, int);
    string getBrand() const;
    void setBrand(const string &newBrand);
    string getModel() const;
    void setModel(const string &newModel);
    int getYearModel() const;
    void setYearModel(int newYearModel);

    void printData();
};

class rectangle
{
private:

    double width;
    double height;

public:
    rectangle();
    ~rectangle();
    rectangle(double width, double height);
    double getWidth() const;
    void setWidth(double newWidth);
    double getHeight() const;
    void setHeight(double newHeight);

    double getArea() const;
    double getCircum() const;

    // void resetWidth();
    // void resetHeight();
};

class Student
{
private:

    string Name;
    int studentNumber;
    double average;

public:

    Student();
    ~Student();
    string getName() const;
    void setName(const string &newName);
    int getStudentNumber() const;
    void setStudentNumber(int newStudentNumber);
    double getAverage() const;
    void setAverage(double newAverage);
};

#endif // H2A_H
