/*
Roll no: 23k-0013
Name: Zunaira Amjad
Desc:
*/

#include <iostream>
using namespace std;

class boardMaker{
    string brand;
    string shade;
    bool refillable; //indicating whether it can be refilled or not
    bool ink_status; //indicating if the ink is depleted or not

    public:
    //getter and setter for brand name
    void setBrand(string b){
        brand = b;
    }

    string getBrand(){
        return brand;
    }

    //getter and setter for shade 
    void setshade(string s){
        shade = s;
    }

    string getshade(void){
        return shade;
    }

    //getter and setter for refillable bool
    void setrefillable(bool re){
        refillable = re;
    }

    bool getrefillable(){
        return refillable;
    }

    //getter and setter for ink status bool
    void setInkStatus(bool status){
        ink_status= status;
    }

    bool getInkStatus(){
        return ink_status;
    }

};

int main(){
    //making an object
    boardMarker b_d;

    //calling the setter method for all attributes
    b_d.setbrand("Zonis");
    b_d.setshade("red");
    b_d.setrefillable(true);
    b_d.setInkStatus(false);

    //calling getters to output
    cout<<"The name of the brand is: " <<b_d.setbrand() <<" \n";
    cout<<"The shade is: " <<b_d.setshade() <<" \n";
    cout<<"The refillable status is : " <<b_d.setrefillable() <<" \n";
    cout<<"The ink status is: " <<b_d.setInkStatus() <<" \n";

    return 0;
}
