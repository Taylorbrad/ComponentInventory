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
    Component();
    string toString();
    
    private:
    string identifier;
    string description;
    string componentType;
    double retailPrice = 0;
    double boughtPrice = 0;
};
