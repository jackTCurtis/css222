struct Time { 
    double second;
    int week, hour, minute;
    void increment(double parameterSeconds);

    void printTime();
    double convertToSeconds() const;
    Time add(Time t2);

    Time();
    Time(double seconds);
    Time(int d, int h, int m, double s);
};