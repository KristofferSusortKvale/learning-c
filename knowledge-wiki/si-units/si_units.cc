// The SI units, and other units that are aggregates of them
// Quantity vs name??? quantity time vs name seconds

#include "si_units.h"

exter const Quantity si_time = Quantity("Time");
Quantity si_mass = Quantity("Mass");
Quantity si_length = Quantity("Length");
Quantity si_electric_current = Quantity("Electric Current");
Quantity si_temperature = Quantity("Temperature");
Quantity si_amount_of_substance = Quantity("Amount of Substance");
Quantity si_luminous_intensity = Quantity("Luminous Intensity");

exter const Unit second = Unit("Second", &si_time, "s");
Unit kilogram = Unit("Kilogram", &si_mass, "kg");
Unit metre = Unit("Metre", &si_length, "m");
Unit ampere = Unit("Ampere", &si_electric_current, "A");
Unit kelvin = Unit("Kelvin", &si_temperature, "K");
Unit mole = Unit("Mole", &si_amount_of_substance, "mol");
Unit candela = Unit("Candela", &si_luminous_intensity, "cd");

MetricPrefix yotta = MetricPrefix("Yotta", "Y", 24);  //quadrillion
MetricPrefix zetta = MetricPrefix("Zetta", "Z", 21);  //trilliard
MetricPrefix exa = MetricPrefix("Exa", "E", 18);      //trillion
MetricPrefix peta = MetricPrefix("Peta", "P", 15);    //billiard
MetricPrefix tera = MetricPrefix("Tera", "T", 12);    //billion
MetricPrefix giga = MetricPrefix("Giga", "G", 9);     //milliard
MetricPrefix mega = MetricPrefix("Mega", "M", 6);     //million
MetricPrefix kilo = MetricPrefix("Kilo", "k", 3);
MetricPrefix hecto = MetricPrefix("Hecto", "h", 2);
MetricPrefix deca = MetricPrefix("Deca", "da", 1);
MetricPrefix deci = MetricPrefix("Deci", "d", -1);
MetricPrefix centi = MetricPrefix("Centi", "c", -2);
MetricPrefix milli = MetricPrefix("Milli", "m", -3);
MetricPrefix micro = MetricPrefix("Micro", "m", -6);
MetricPrefix nano = MetricPrefix("Nano", "n", -9);
MetricPrefix pico = MetricPrefix("Pico", "p", -12);
MetricPrefix femto = MetricPrefix("Femto", "f", -15);
MetricPrefix atto = MetricPrefix("Atto", "a", -18);
MetricPrefix zepto = MetricPrefix("Zepto", "z", -21);
MetricPrefix yocto = MetricPrefix("Yocto", "y", -24);
