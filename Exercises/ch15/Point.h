class Point{
double x,y;

public:
void print_point();
double distance(Point p1, Point p2);

double get_x() const;
double get_y() const;

void reflect();
void swap();
}