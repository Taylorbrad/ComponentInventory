#include "Component.h"

Component::Component(string id, string description, string type, double retail, double boughtFor, int quantity) : identifier(id), description(description), componentType(type), retialPrice(retail), boughtPrice(boughtFor), quantity(quantity)
{}
string Component::toString()
{
  stringstream ss;
  ss << "ID: " << this->identifier << endl;
  ss << "Retail Price: $" << this->retailPrice << endl;
  ss << "Purchase Price: $" << this->boughtPrice << endl;
  ss << "Quantity: " << this->quantity << endl;
  
  return ss.str();
}
Component::getComponentType()
{
  return this->componentType;
}
