#include<bits/stdc++.h>
#include<cmath>
using namespace std;

class Point
{
    int x,y;
    friend void distance(Point, Point);
    public:
        Point(int a, int b)
        {
            x=a;
            y=b;
        }

        void pointDisplay()
        {
            cout<<"The coordinates are ("<<x<<","<<y<<")"<<endl;
        }
};

void distance(Point p1, Point p2)
{
    float d;
    d=sqrt(pow(abs(p2.x-p1.x),2)+pow(abs(p2.y-p1.y),2));
    cout<<"The distance between the two points is: "<<d<<endl;
}

int main()
{
    Point a(1,3);
    a.pointDisplay();
    Point b(4,7);
    b.pointDisplay();
    distance(a,b);
    return 0;
}