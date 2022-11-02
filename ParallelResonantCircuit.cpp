#include <iomanip>
#include <iostream>
#include <cmath>
#include "ParallelResonantCircuit.h"

using namespace std;

//***************************************************************************************
// Title: ParallelResonantCircuit.cpp
// Course: Computational Problem Solving II
// Developer: Santiago Sanchez
// Date: 9/19/2022
// Purpose: Functions of the ParallelResonantCircuit class
//***************************************************************************************

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Name: ParallelResonantCircuit() (Constructor)
// Input: Frequency, Bandwidth, gain
// Output: Sets the values within the class and calculates RLC
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
ParallelResonantCircuit::ParallelResonantCircuit(double k, double b, double w)  //The parallel constructor, calculations here too
{
	//Sets all values
	omega = w;
	bandwidth = b;
	gain = k;  

	//Calculations
	pResistance = gain;  //Calculates resistance
	pCapacitance = (1 / (bandwidth * pResistance)) * pow(10, 6);  //Calculates Capacitance, puts into uF 
	pInductance = (1 / (pow(omega, 2) * pCapacitance)) * pow(10, 9);  //Calculates Inductance, puts into mH
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Name: display()
// Input: N/A
// Output: Displays all values for parallel circuit
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void ParallelResonantCircuit::display()
{
	cout << "Parallel Resonant Circuit" << endl;  //Order is RLC
	cout << fixed << setprecision(2) << "	R = " << pResistance << " Ohms " << endl; //R: Fixed setprec(2)
	cout << scientific << setprecision(3) << "	L = " << pInductance << " mH " << endl; //L and C scientific setPrec(3)
	cout << scientific << setprecision(3) << "	C = " << pCapacitance << " uF " << endl;
	displayResonance();  //Calls parent to keep the same between functions
}