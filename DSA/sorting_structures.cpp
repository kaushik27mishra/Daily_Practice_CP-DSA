# include <bits/stdc++.h>
using namespace std;

struct Car
{
    int speed, price;
}cars[100];

bool cmp(Car A, Car B)
{
    return (1.0*A.speed/A.price) > (1.0*B.speed/B.price);
}

int main ()
{
    cars[1].speed=100; cars[1].price=50;
    cars[2].speed=200; cars[2].price=147;
    cars[3].speed=200; cars[3].price=153;
    cars[4].speed=132; cars[4].price=344;
    cars[5].speed=97;  cars[5].price=45;
    cars[6].speed=97;  cars[6].price=89;

    sort (cars+1, cars+7, cmp);


    return 0;
}