#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

class Flower {
    string name;
    int petals;
    float price;
public:
    Flower(string s, int i, float p);
    void setName(string name);
    void setPetals(int i);
    void setPrice(float f);
    string getName();
    int getPetals();
    float getPrice();
    ostream &operator<<(ostream &out);
};

Flower::Flower(string s, int i, float p)
{
    this->name = s;
    this->petals = i;
    this->price = p;
}

void Flower::setName(string name)
{
    this->name = name;
}
void Flower::setPetals(int petals)
{
    this->petals = petals;
}
void Flower::setPrice(float price)
{
    this->price = price;
}
string Flower::getName()
{
    return name;
}
int Flower::getPetals()
{
    return petals;
}
float Flower::getPrice()
{
    return price;
}

ostream &Flower::operator<<(ostream &out)
{
    return out << this->name << " " << this->petals << " " << this->price << endl;
}
int main(int argc, char const *argv[])
{

    Flower f("Rose", 10, 100);
    f << cout;
    return EXIT_SUCCESS;
}