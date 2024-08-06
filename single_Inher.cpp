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
    private:
    int length;
    int breadth;
    public:
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

int main()
{
    int n,l;
    int len,brd;
    std::cout<<"Enter the number of sides and legth of a side :";
    std::cin>>n>>l;
    quadrilatral q(n,l);
    std::cout<<"Enter the length And Bredth of rectangle :";
    std::cin>>len>>brd;
    rectangle r(len,brd);
    q.area();
    r.area();
    q.perimeter();
    return 0;
}