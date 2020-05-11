#include<iostream>
#include<cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

const int LEFT= -1,RIGHT= 1,ON_THE_LINE=0;

double cross_product(Point a,Point b) {
    return a.x*b.y - a.y*b.x;
}

Point subtract(Point a,Point b) {
    Point ans;
    ans.x= a.x - b.x;
    ans.y= a.y -b.y;
    return ans;
}

int get_direction(Point a,Point b,Point p) {
    b=subtract(b,a);
    p=subtract(p,a);

    double ans = cross_product(b,p);
    
    if(ans<0)
        return LEFT;
    else if(ans>0)
        return RIGHT;
    else 
        return ON_THE_LINE;

}

int main() {
    
}