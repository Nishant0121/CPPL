#include<iostream>

class quadrilateral
{
    protected:
    int side1,side2,side3,side4;
    public:
    quadrilateral(){};
    quadrilateral(int s1,int s2,int s3,int s4)
    {
        side1=s1;
        side2=s2;
        side3=s3;
        side4=s4;
    }
    int area()
    {
        std::cout<<"Area Of Quadrilateral "<<(side1*side2)<<std::endl;
        return 0;
    }
    int perimeter()
    {
        std::cout<<"Perimeter Of Quadrilateral "<<(side1+side2+side3+side4)<<std::endl;
        return 0;
    }
};


class rectangle :public quadrilateral
{
    // private:
    // int length;
    // int breadth;
    public:
    rectangle(int l,int b)
    {
        side1=l;
        side2=b;
        side3=l;
        side4=b;
    }
    int area(int l,int b)
    {
        std::cout<<"Area Of Recatngle "<<(side1*side2)<<std::endl;
        return 0;
    }
    int perimeter(int l,int b)
    {
        std::cout<<"Perimeter Of Recatngle "<<(side1+side2+side3+side4)<<std::endl;
        return 0;
    }
};

int main()
{
    int s1,s2,s3,s4;
    int l,b;
    std::cout<<"Enter the length and breadth of Rectangle:";
    std::cin>>l>>b;
    rectangle r(l,b);
    r.area(l,b);
    r.perimeter(l,b);
    return 0;
}