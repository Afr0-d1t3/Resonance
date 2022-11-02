#include "Resonance.h"
#include <iomanip>
#include <iostream>
using namespace std;

//***************************************************************************************
// Title: Resonance.cpp
// Course: Computational Problem Solving II
// Developer: Santiago Sanchez
// Date: 9/19/2022
// Purpose: Functions of the Resonance class
//***************************************************************************************

Resonance::Resonance()  //Constructor: Default all zeros
{
	omega = 0;
	bandwidth = 0;
	gain = 0;
}
void Resonance::displayResonance()  //Displays resonance
{

	cout << scientific << setprecision(2) << "	k = " << gain  << endl;
	cout << fixed << setprecision(2) << "	omega = " << omega << endl;
	cout << fixed << setprecision(2) << "	bandwidth = " << bandwidth << endl;
}
//Get Functions
double Resonance::getOmega()
{
	return omega;
}
double Resonance::getBandwidth()
{
	return bandwidth;
}
double Resonance::getGain()
{
	return gain;
}
//Set Functions
void Resonance::setOmega(double w)
{
	omega = w;
}
void Resonance::setBandwidth(double b)
{
	bandwidth = b;
}
void Resonance::setGain(double k)
{
	gain = k;
}