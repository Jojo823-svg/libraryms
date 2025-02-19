#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <fstream>

using namespace std;

class LibraryEntity {//abstract class
public://access specifier, polymorphism concept 
    virtual void displayDetails() const = 0;//pure virtual functionsS
    virtual void saveToFile(ofstream &outFile) const = 0;
    virtual void loadFromFile(ifstream &inFile) = 0;
};

class Person {//base class
protected://access specifier, encapsulation concept (bundling of data)
    string name;
    int id;
    string contact;
    string role;
public://access specifier-public access
    Person(string n, int i, string c, string r) : name(n), id(i), contact(c), role(r) {}//constructor initializing the attributes
    int getId() const { return id; }
    string getRole() const { return role; }
    virtual void displayDetails() const {//virtual function, polymorphism concept
        cout << "Name: " << name << ", ID: " << id << ", Contact: " << contact << ", Role: " << role << endl;
    }
};
