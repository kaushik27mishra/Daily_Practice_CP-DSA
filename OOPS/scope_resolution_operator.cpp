#include<iostream>
using namespace std;

class Human{
    public:
        string name;
        void introduce();
};

void Human :: introduce() {
    cout<<Human::name<<endl;
}
// :: -> this is know as scope resolution operator

int main() {
    Human kaushik;
    kaushik.name="Kaushik";
    kaushik.introduce();
}