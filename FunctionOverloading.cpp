#include<iostream>

using namespace std;
class Arithematic
{
    public:
    int Addition(int no1, int no2) //Addition@2ii
    {
        return no1+no2;
    }
    int Addition(int no1, int no2, int no3) //Addition@3iii
    {
        return no1 + no2 + no3;
    }
    double Addition(double no1, double no2) //Addition@2dd
    {
        return no1 + no2;
    }
    double Addition(double no1, double no2, double no3) //Addition@3ddd
    {
        return no1 + no2 + no3;
    }

};

int main()
{
    Arithematic obj;
cout<<obj.Addition(11,21)<<"\n";
cout<<obj.Addition(11,21,51)<<"\n";
cout<<obj.Addition(11.234,21.654)<<"\n";
cout<<obj.Addition(11.324,21.546,51.223)<<"\n";
    return 0; 
}
