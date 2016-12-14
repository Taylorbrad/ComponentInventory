#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

class Component
{
    public:
    Component(string id, string description, string type, double retail, double boughtFor, int quantity);
    string toString();
    string getComponentType();
    
    private:
    string identifier;
    string description;
    string componentType;
    double retailPrice = 0;
    double boughtPrice = 0;
    int quantity = 0;
};
