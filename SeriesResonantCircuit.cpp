#include <iomanip>
#include <iostream>
#include <cmath>
#include "SeriesResonantCircuit.h"

using namespace std;

//***************************************************************************************
// Title: SeriesResonantCircuit.cpp
// Course: Computational Problem Solving II
// Developer: Santiago Sanchez
// Date: 9/19/2022
// Purpose: Functions of the SeriesResonantCircuit class
//***************************************************************************************

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Name: SeriesResonantCircuit() (Constructor)
// Input: Frequency, Bandwidth, gain
// Output: Sets the values within the class and calculates RLC
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
SeriesResonantCircuit::SeriesResonantCircuit(double k, double b, double w)  //The parallel constructor, calculations here too
{
	//Sets all values
	omega = w;
	bandwidth = b;
	gain = k;

	//Calculations
	sResistance = 1 / gain;  //Calculates resistance
	sInductance = (sResistance / bandwidth) * pow(10, 3);  //Calculates Inductance, puts into mH
	sCapacitance = (1 / (pow(omega, 2) * sInductance)) * pow(10, 9); //Calculates Capacitance, puts into uF
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Name: display()
// Input: N/A
// Output: Displays all values for series circuit
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void SeriesResonantCircuit::display()
{
	cout << "Series Resonant Circuit" << endl;  //Order is RLC
	cout << fixed << setprecision(2) << "	R = " << sResistance << " Ohms " << endl; //R: Fixed setprec(2)
	cout << scientific << setprecision(3) << "	L = " << sInductance << " mH " << endl; //L and C scientific setPrec(3)
	cout << scientific << setprecision(3) << "	C = " << sCapacitance << " uF " << endl;
	displayResonance();  //Uses parent function for other values
}