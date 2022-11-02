#pragma once
#include "Resonance.h"
#include <iomanip>
#include <iostream>
//***************************************************************************************
// Title: SeriesResonantCircuit.h
// Course: Computational Problem Solving II
// Developer: Santiago Sanchez
// Date: 9/19/2022
// Purpose: Declarations of SeriesResonantCircuit class
//***************************************************************************************
class SeriesResonantCircuit : public Resonance
{
private:
	double sResistance;  //All data members private to series
	double sCapacitance;
	double sInductance;
public:
	SeriesResonantCircuit(double k, double b, double w);  //Series Constructor
	void display();  //Display will do all
};