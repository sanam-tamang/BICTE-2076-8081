#include <stdio.h>
#include <string>
#include <iostream>
#include "cfg.h"

using namespace std;

CFG::CFG(string inCode[], int stringLen)
{
    for (int a = 0; a < stringLen; a++)
    {
        //cout << inCode[a] << endl;
        this->code[a] = inCode[a];
    }
    for (int a = 0; a < stringLen; a++)
    {
        cout << this->code[a] << endl;
    }
}

char CFG::getStartNT()
{
    return startNT;
}

void CFG::setStartNT(char stNT)
{
    startNT = stNT;
}

bool CFG::processData(string inString, string wkString)
{
    //Our recursive function
    return true;
}

void CFG::garbage()
{
    return;
}