using namespace std;
class Duration{
    
    public:
    Duration();
    Duration(int x);
    int digit;
    int cdigit;
    //clone digit
    int days = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    void to_string();
    Duration operator + (Duration& d);
    Duration operator - (Duration& d);

};