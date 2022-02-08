#ifndef si_units_h
#define si_units_h

#include <string>
using namespace std;

// The quantities
class Quantity {
  public:
    string name;
    Quantity(string name) {
      name = name;
    }
};

// Units
class Unit {
  public:
    string name;
    Quantity* quantity;
    string symbol;
    Unit(string name, Quantity* quantity, string symbol) {
      name = name;
      quantity = quantity;
      symbol = symbol;
    }
};

class MetricPrefix {
  public:
    string name;
    string symbol_prefix;
    int scale; // multiplied by 10^scale
    MetricPrefix(string name, string symbol_prefix, int scale){
      name = name;
      symbol_prefix = symbol_prefix;
      scale = scale;
    }
};

class Measurement {
  public:
    Unit* unit;
    MetricPrefix* prefix;
    int amount;
    Measurement(Unit* unit, MetricPrefix* prefix, int amount){
      unit = unit;
      prefix = prefix;
      amount = amount;
    }
}; //a proper measurement is actually a measurement +- a measurement

Quantity si_time;
Quantity si_mass;
Quantity si_length;
Quantity si_electric_current;
Quantity si_temperature;
Quantity si_amount_of_substance;
Quantity si_luminous_intensity;

Unit second;
Unit kilogram;
Unit metre;
Unit ampere;
Unit kelvin;
Unit mole;
Unit candela;

MetricPrefix yotta;
MetricPrefix zetta;
MetricPrefix exa;
MetricPrefix peta;
MetricPrefix tera;
MetricPrefix giga;
MetricPrefix mega;
MetricPrefix kilo;
MetricPrefix hecto;
MetricPrefix deca;
MetricPrefix deci;
MetricPrefix centi;
MetricPrefix milli;
MetricPrefix micro;
MetricPrefix nano;
MetricPrefix pico;
MetricPrefix femto;
MetricPrefix atto;
MetricPrefix zepto;
MetricPrefix yocto;

#endif
