using namespace std;
class Duration{
    
    public:
    Duration();
    Duration(int x);
    int digit;
    int cdigit;
    //clone digit
    int cdays = 0;
    int days();
    int chours = 0;
    int hours();
    int cminutes = 0;
    int minutes();
    int cseconds = 0;
    int seconds();
    void to_string();
    Duration operator + (Duration& d);
    Duration operator - (Duration& d);

};