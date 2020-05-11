#include<iostream>
#include<cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

double cross_product(Point a,Point b) {
    return a.x*b.y - a.y*b.x;
}

double area(Point vertices[], int n) {
    double sum=0.0;
    for(int i=0;i<n;i++) {
        sum += cross_product(vertices[i],vertices[(i+1)%n]);
    }

    return abs(sum)/2.0;
}

int main() {
    
}