#ifndef _cfg_h_
#define _cfg_h_

using namespace std;

class CFG
{
    private:
        string code[25];
        char startNT;

    public:
        CFG(string inCode[], int stringLen);
        char getStartNT();
        void setStartNT(char stNT);
        bool processData(string inString, string wkString);
        void garbage();
};

#endif
