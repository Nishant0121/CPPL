#include<iostream>

class quadrilatral
{
    private:
    int nsides;
    protected:
    int lsides;
    public:
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

int main()
{
    int n,l;
    std::cout<<"Enter the number of sides and legth of a side :";
    std::cin>>n>>l;
    quadrilatral q(n,l);
    q.area();
    q.perimeter();
    return 0;
}