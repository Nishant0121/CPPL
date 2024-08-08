#include <iostream>

class rectangle {
    protected:
    double len,brd;
    public:
    rectangle(){}
    double area()
    {
        
        return len*brd;
    }
    double perimeter()
    {
        return (len+brd+len+brd);
    }
};

class WateringCost {
protected:
    double wateringRate;

public:
    WateringCost(){}
    void calculateWateringCost(double area) {
        std::cout<<"Watering cost required is "<<(wateringRate*area)<<std::endl;
    }
};

class BundhCost {
protected:
    double bundhRate;

public:
    BundhCost(){}
    void calculateBundhCost(double perimeter) {
        std::cout<<"Cost for constructing a low mud wall around the field is "<<(bundhRate*perimeter)<<std::endl;
    }
};

class Field:public rectangle,public WateringCost,public BundhCost
{
    public:
    Field(double l,double b,double wr,double br)
    {
        wateringRate =wr;
        bundhRate=br;
        len=l;
        brd=b;
        calculateBundhCost(perimeter());
        calculateWateringCost(area());
    }
};

int main()
{

    double len,brdth,water_rate,wall_rate;
    std::cout<<"Enter the length of Field "<<std::endl;
    std::cin>>len;
    std::cout<<"Enter the Breadth of Field "<<std::endl;
    std::cin>>brdth;
    std::cout<<"Enter the watering rate per SQ Meter "<<std::endl;
    std::cin>>water_rate;
    std::cout<<"Enter the rate to build small wall around field "<<std::endl;
    std::cin>>wall_rate;
    Field(len,brdth,water_rate,wall_rate);
    return 0;
}