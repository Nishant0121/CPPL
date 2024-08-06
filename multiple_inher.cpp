#include<iostream>

class quadrilatral
{
    private:
    int nsides;
    protected:
    int lsides;
    public:
    quadrilatral(){}
    quadrilatral(int n,int l)
    {
        nsides=n;
        lsides=l;
    }
    void area()
    {
        std::cout<<"Area Of Quadritral "<<(lsides*lsides)<<std::endl;
    }
    void perimeter()
    {
        std::cout<<"Perimeter Of Quadritral "<<(lsides*nsides)<<std::endl;
    }
};

class rectangle :public quadrilatral
{
    protected:
    int breadth;
    public:
    rectangle(){};
    rectangle(int l,int b)
    {
        lsides=l;
        breadth=b;
    }
    void area()
    {
        std::cout<<"Area Of Recatngle "<<(lsides*breadth)<<std::endl;
    }
};

class field :public rectangle
{
    private:
    int c_per_m;
    public:
    field(int c,int l,int b)
    {
        lsides=l;
        breadth=b;
        c_per_m=c;
    }
    void costWater()
    {
        std::cout<<"Total amount of water need for Water the field of length "<<lsides<<"and "<<breadth<<"is "<<(lsides*breadth*c_per_m);
    }

};


int main()
{
    int rate,length,brdth;
    std::cout<<"Enter the rate of watering for 1_sqm: ";
    std::cin>>rate;
    std::cout<<"Enter the Length of field: ";
    std::cin>>length;
    std::cout<<"Enter the Brdth of Filed: ";
    std::cin>>brdth;
    field f(rate,length,brdth);
    f.costWater();
    return 0;
}