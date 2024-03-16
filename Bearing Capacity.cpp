#include <iostream>

enum shape
{
    square = 1,
    circle = 2,
    rectangle = 3,
    strip = 4
};

class Capacity
{
   private:
    float Nc;
    float Nq;
    float Ny;
    int foundationType;
    float foundationDepth;
    float foundationWidth;
    float unitWeight;
    float shearStrength;
    float frictionAngle;
    float FOS;
public:
    float returnCapacity();
    void setValues();
    void setNC();
    void setFoundationType();
    void setFoundationDepth();
    void setFoundationWidth();
    void setUnitWeight();
    void setShearStrength();
    void setFrictionAngle();
    void setFOS();

};

float Capacity::returnCapacity()
{
    if (foundationType == square)
    {
        return((1.3 * shearStrength * Nc) + (unitWeight * foundationDepth * Nq) + (0.4 * unitWeight * foundationWidth * Ny));
    }
    if (foundationType == circle)
    {

    }
    if (foundationType == rectangle) 
    {

    }
    if (foundationType == strip)
    {

    }
}

void Capacity::setValues()
{
    setNC();
    setFoundationType();
    setFoundationDepth();
    setFoundationWidth();
    setUnitWeight();
    setShearStrength();
    setFrictionAngle();
    setFOS();
}

void Capacity::setNC()
{
    std::cout << "Value for Nc:"; std::cin >> this->Nc;
    std::cout << "Value for Nq:"; std::cin >> this->Nq;
    std::cout << "Value for Ny:"; std::cin >> this->Ny;
}

void Capacity::setFoundationType()
{
    std::cout << "Foundation type; 1 for square, 2 for circle, 3 for rectangle, 4 for strip "; std::cin >> this->foundationType;
    
}

void Capacity::setFoundationDepth()
{
    std::cout << "Enter depth of foundation below ground "; std::cin >> this->foundationDepth;
}

void Capacity::setFoundationWidth()
{
    if (this->foundationType == square)
    {
        std::cout << "Enter the foundation width "; std::cin >> this->foundationWidth;
    }
}

void Capacity::setUnitWeight()
{
    std::cout << "Enter the unit weight of the soil "; std::cin >> this->unitWeight;
}

void Capacity::setShearStrength()
{
    std::cout << "Enter the shear strength of the soil: "; std::cin >> this->shearStrength; 
}

void Capacity::setFrictionAngle()
{
    std::cout << "Enter the soil friction angle "; std::cin >> this->frictionAngle;
}

void Capacity::setFOS()
{
    std::cout << "Enter the required FOS "; std::cin >> this->FOS;
}



int main()
{
    Capacity checkCapacity{};
    checkCapacity.setValues();
    std::cout << checkCapacity.returnCapacity();
}

