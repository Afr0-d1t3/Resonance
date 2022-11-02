#pragma once
//***************************************************************************************
// Title: Resonance.h
// Course: Computational Problem Solving II
// Developer: Santiago Sanchez
// Date: 9/19/2022
// Purpose: Declarations of Resonance class
//***************************************************************************************
class Resonance
{
protected:
	double omega;
	double bandwidth;
	double gain;
public:
	Resonance();  //Constructor
	void displayResonance();  //Displays resonance
	//Get Functions
	double getOmega();
	double getBandwidth();
	double getGain();
	//Set Functions
	void setOmega(double w);
	void setBandwidth(double b);
	void setGain(double k);
};