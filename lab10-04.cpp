#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle{

private:
    point center;
    double radius;

public:
    Circle(point c,double r){
        center = c;
        radius = r;
    }

    double area(){
        return M_PI*radius*radius;
    }

    double distanceFromCenter(point pt){
        return sqrt(pow((center.xPosition - pt.xPosition),2) + pow((center.yPosition - pt.yPosition),2));

    }

    int contains(point pt){
        return (distanceFromCenter(pt)>radius)?0:1;

    }
};

int main()
{
point c,p;
    double r;
    cout << "Center of Circle: ";
    cin >> c.xPosition >> c.yPosition;
    cout << "Radius of Circle: ";
    cin >> r;
    cout << "Point to Check: ";
    cin >> p.xPosition >> p.yPosition;
    Circle circle(c,r);
    cout << "Area of Circle is " << circle.area() << endl;
    cout << "Distance from Center to Point (" << p.xPosition << ", " << p.yPosition << ") is "
            << circle.distanceFromCenter(p) << endl;
    if (circle.contains(p)) cout << "This circle contains this point." << endl;
    else cout << "This point is not in this circle." << endl;

}