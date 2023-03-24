# Inheritance Demo in C++ using Scooter and ElectricalScooter

This is a small project demonstrating inheritance in C++ using two classes: Scooter and ElectricalScooter.

## Setup

The project consists of four files: main.cpp, Scooter.h, Scooter.cpp, ElectricalScooter.h, and ElectricalScooter.cpp.

## Usage

When running the compiled program, you will be prompted to input the following information for each scooter:

- Scooter maxKM:
- Scooter year:
- Electrical Scooter maxKM:
- Electrical Scooter year:
- Electrical Scooter charging time (mins):

After providing the necessary inputs, the program will output the following tests:

- Test DefaultConstructors
- Test GetPollutionScore
- Test GetTaxes
- Test Inheritance

## Example

```
Scooter maxKM: 500
Scooter year: 2000
Electrical Scooter maxKM: 300 
Electrical Scooter year: 2015
Electrical Scooter charging time (mins): 150 
>> Test DefaultConstructors
getMaxKM: 0
getYear: 0
getMaxKM: 0
getYear: 0
getChargingTime: 0
>> Test GetPollutionScore
getPollutionScore test1: 342.5
getPollutionScore test2: 411.0
getPollutionScore test3: 123.3
getPollutionScore test4: 115.1
>> Test GetTaxes
getTaxes test1: 275.0
getTaxes test2: 400.0
getTaxes test3: 70.0
getTaxes test4: 90.0
>> Test Inheritance
getTaxes test1: 220.0

Process returned 0 (0x0)   execution time : 15.726 s
Press ENTER to continue.

```
