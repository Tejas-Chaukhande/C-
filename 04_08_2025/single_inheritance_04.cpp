/*
Single Inheritance
Create a base class Vehicle with:
max_speed and color
display() function
Derive a class Car that adds brand and fuel_type.
Override the display() function.
*/
#include<iostream>
using namespace std;
class Vehicle
{
    protected: int max_speed;
               string color;
    public: Vehicle(int max_speed,string color)
            {
                this->max_speed = max_speed;
                this->color = color;
            }
            void display()
            {
                cout<<"Max speed of vehicle: "<<max_speed<<"km/hr"<<endl;
                cout<<"Color of vehicle: "<<color<<endl;
            }
};
class Car:public Vehicle
{
    private:string brand;
            string fuel_type;
    public: Car(int max_speed,string color,string brand, string fuel_type):Vehicle(max_speed,color)
            {
                this->brand = brand;
                this->fuel_type = fuel_type;
            }
            void display()
            {
                cout<<"Brand of Car: "<<brand<<endl;
                cout<<"Fuel type of Car: "<<fuel_type<<endl;
                Vehicle::display();
            }
};
int main()
{
    Car c(120,"Black","Toyota","Petrol");
    c.display();
    return 0;
}