#pragma once
#include "Resonance.h"
//***************************************************************************************
// Title: ParallelResonantCircuit.h
// Course: Computational Problem Solving II
// Developer: Santiago Sanchez
// Date: 9/19/2022
// Purpose: Declarations of ParallelResonantCircuit class
//***************************************************************************************
class ParallelResonantCircuit : public Resonance
{
private:
	double pResistance;  //All private to only the Parallel class
	double pCapacitance;
	double pInductance;
public:
	ParallelResonantCircuit(double k, double b, double w);  //The parallel constructor
	void display();
};