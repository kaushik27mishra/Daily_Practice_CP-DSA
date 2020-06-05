#include<iostream>
using namespace std;

class Human{
        string name;
    public:
        Human();
};

Human :: Human() {
    cout<<Human::name<<endl;
}
// :: -> this is know as scope resolution operator

int main() {
    Human kaushik;
    kaushik.name="Kaushik";
    kaushik.introduce();
}