#include "Duration.h"
using namespace std;

string Duration::to_string(){
    if ((digit - 86400)>0)
    {
        digit - 86400;
        days=days+1;
        //theyre 86400 seconds in a day
    }
    
    
}