/*
Roll no: 23k-0013
Name: Zunaira Amjad
Desc:
*/

#include <iostream>
#include <string>
using namespace std;

//making a class named water bottle
class waterBottle{
    string company;
    string color;
    float waterCapacity_L;
    float waterCapacity_mL; 
    //recorded in both litres and millilitres

    public:
    //introducing setters for all attributes
    void setcompany(string name){
        company = name;
    }

    void setcolor(string c){
        color = c;
    }

    void setWaterCapacity_L(float capacity_L){
        waterCapacity_L = capacity_L;
    }

    void setWaterCapacity_mL(float capacity_mL){
        waterCapacity_mL = capacity_mL;
    }

    //intoducing getters for all attributes
    string getcompany(){
        return company;
    }

    string getcolor(){
        return color;
    }

    float getWaterCapacity_L(){
        return waterCapacity_L;
    }

    float getWaterCapacity_mL(){
        return waterCapacity_mL;
    }

    //additional method to update the water capacity
    float update_L(float water_consumed){
         cout<<"Kindly write the amount of water consumed in litres";
         waterCapacity_L = waterCapacity_L - water_consumed;
         return waterCapacity_L;
    }

     float update_mL(float water_consumed){
         cout<<"Kindly write the amount of water consumed in litres";
         waterCapacity_mL = waterCapacity_mL - water_consumed;
         return waterCapacity_mL;
    }


};

int main(){
    //making an object
    waterBottle bottle;

    //calling setters
    bottle.setcompany("Zonis");
    bottle.setcolor("red");
    bottle.setWaterCapacity_L(25.3);
    bottle.setWaterCapacity_mL(13.5);

    //calling getters and outputting
    cout<<"The comapny name is: "<<bottle.getcompany()<< "\n";
    cout<<"The color is: "<<bottle.getcolor()<< "\n";
    cout<<"The water capapcity in litres is: "<<bottle.getWaterCapacity_L()<< "\n";
    cout<,"After consumption the water in L is: "<<bottle.getupdate_L()<< "\n";
    cout<<"The water capapcity in millilitres is: "<<bottle.getWaterCapacity_mL()<< "\n";
    cout<<"After consumption the water in mL is: "<<bottle.getupdate_mL()<< "\n";


    return 0;
}
