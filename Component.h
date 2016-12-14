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
    string toString() = 0;
    
    private:
    string identifier;
    double retailPrice = 0;
    double boughtPrice = 0;
};
