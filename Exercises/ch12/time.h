struct Time { 
    double seconds;
    int dayOfWeek, hours, minutes;
    void increment(double parameterSeconds);

    void printTime();
    bool after(Time pTime);
    double convertToSeconds() const;
    Time add(Time t2);

    Time();
    Time(double seconds);
    Time(int d, int h, int m, double s);
};