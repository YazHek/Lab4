#include "Printer.h"
#include <iostream>


using namespace std;

int main(void) {
    
    printer * NewPrinter1 = new printer("Canon", 20, 10, 3, 5);
    printer * NewPrinter2 = new printer("Hp", 30, 15, 4, 15);
    printer * NewPrinter3 = new printer ("Epson", 40, 20, 5, 25);
    
    
    
    NewPrinter1->Color = "black";
    NewPrinter1->Weight = 20;
    
    NewPrinter2->Color = "pink";
    NewPrinter2->Weight = 23;
    
    NewPrinter3->Color = "white";
    NewPrinter3->Weight = 25;
    
    
    cout << NewPrinter1->getName() << endl
    << NewPrinter1->getSpeed() << endl
    << NewPrinter1->getPrice() << endl
    << NewPrinter1->getType() << endl
    << NewPrinter1->getDruk() << endl
    << NewPrinter1->Color << endl
    << NewPrinter1->Weight << endl;
    
    cout << endl;
    
    
    
    cout
    << NewPrinter2->getName() << endl
    << NewPrinter2->getSpeed() << endl
    << NewPrinter2->getPrice() << endl
    << NewPrinter2->getType() << endl
    << NewPrinter2->getDruk() << endl
    << NewPrinter2->Color << endl
    << NewPrinter2->Weight << endl;
    
    cout << endl;
    
    
    
    cout << NewPrinter3->getName() << endl
    << NewPrinter3->getSpeed() << endl
    << NewPrinter3->getPrice() << endl
    << NewPrinter3->getType() << endl
    << NewPrinter3->getDruk() << endl
    << NewPrinter3->Color << endl
    << NewPrinter3->Weight << endl;
    
    cout << endl;
    
    
    delete NewPrinter1;
    delete NewPrinter2;
    delete NewPrinter3;
    
    return 0;
};
