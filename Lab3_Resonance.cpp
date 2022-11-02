// Lab3_Resonance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iomanip>
#include <iostream>
#include "Resonance.h"
#include "ParallelResonantCircuit.h"
#include "SeriesResonantCircuit.h"
/**********************************************************************/
/*** Title: Lab3_Resonance.cpp							              */
/*   Programmer: Santiago Sanchez									  */
/*	 Computational Problem Solving II								  */
/*   Date: 9/19/2022												  */
/*** Description: Finds the resonance values of an RLC circuit		  */
/**********************************************************************/
int main()
{
	SeriesResonantCircuit SRC1(0.0025, 12345, 1200000); //k, b, w is the order
	ParallelResonantCircuit PRC1(120, 654321, 450000);
	SRC1.display();
	PRC1.display();
	return (0);
}
