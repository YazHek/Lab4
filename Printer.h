

#ifndef Header_h
#define Header_h


#include <string>
#include <iostream>


using namespace std;





class printer {
    
    
private:
    string name;
    int speed;
    int price;
    
    
    
protected:
    int type;
    int druk;
    
    

    
public:
    string Color;
    int Weight;
    
    
    
    printer() {
        name = "Canon";
        speed = 8;
        price = 3;
        
    }
    
    printer (string Name, int Speed, int Price, int Type, int Druk){
        
        name = Name;
        speed = Speed;
        price = Price;
        type = Type;
        druk = Druk;
    }
    
    ~printer() {
        
        speed = 0;
    }
    
    string getName();
    int getSpeed();
    int getPrice();
    int getType();
    int getDruk();
    
};




#endif /* Header_h */


