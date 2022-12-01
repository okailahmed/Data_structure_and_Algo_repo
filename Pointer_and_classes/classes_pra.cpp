#include <iostream>

using namespace std;



class Cookie{

    private:
        string color;

    public:
        Cookie (string color)  // this is a constructor 
        {
            this->color = color;
        }

        string getColor()
        {
            return this->color;
        }

        void setColor(string color)
        {
            this->color = color;
        }

};

int main()
{
    Cookie * cookieone = new Cookie("green");

    Cookie * cookietwo = new Cookie("blue");


    cout<< "C1: "<< cookieone->getColor()<<endl;

    cout<< "C2: "<< cookietwo->getColor()<<endl;

    return 0;
}