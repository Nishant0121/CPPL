#include<iostream>

class quadrilateral
{
    private:
    int side1,side2,side3,side4;
    public:
    quadrilateral(int s1,int s2,int s3,int s4)
    {
        side1=s1;
        side2=s2;
        side3=s3;
        side4=s4;
    }
    void area()
    {
        std::cout<<"Area Of Quadrilateral "<<(side1*side2)<<std::endl;
    }
    void perimeter()
    {
        std::cout<<"Perimeter Of Quadrilateral "<<(side1+side2+side3+side4)<<std::endl;
    }
};

int main()
{
    int s1,s2,s3,s4;
    std::cout<<"Enter the length of four sides of Quadrilateral:";
    std::cin>>s1>>s2>>s3>>s4;
    quadrilateral q(s1,s2,s3,s4);
    q.area();
    q.perimeter();
    return 0;
}
