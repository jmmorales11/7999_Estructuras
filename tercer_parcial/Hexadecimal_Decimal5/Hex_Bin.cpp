/***********************************************************************
 * Module:  Hex_Bin.cpp
 * Author:  camilo
 * Modified: domingo, 12 de febrero de 2023 16:09:18
 * Purpose: Implementation of the class Hex_Bin
 ***********************************************************************/

#include "Hex_Bin.h"
#pragma once
using namespace std;
string Hex_Bin::getHex(void)
{
   return hex;
}

void Hex_Bin::setHex(string newHex)
{
   hex = newHex;
}

int Hex_Bin::getDec(void)
{
   return dec;
}

void Hex_Bin::setDec(int newDec)
{
   dec = newDec;
}

string Hex_Bin::getBin(void)
{
   return bin;
}

void Hex_Bin::setBin(string newBin)
{
   bin = newBin;
}

string Hex_Bin::getOct(void)
{
   return oct;
}

void Hex_Bin::setOct(string newOct)
{
   oct = newOct;
}

Hex_Bin::Hex_Bin()
{
}

Hex_Bin::~Hex_Bin()
{
   // TODO : implement
}