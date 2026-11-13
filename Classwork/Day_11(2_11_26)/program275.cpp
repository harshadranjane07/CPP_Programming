#include<iostream>
using namespace std;
class Arithmatic
{
    public:
        float No1;
        float No2;

        Arithmatic(float A,float B)
        {
            No1 = A;
            No2 = B;
        }

        float Addition()
        {   
            float Ans;
            Ans = No1+No2;
            return Ans;

        }

};
 
int main()
{   
     
    Arithmatic aobj1(10.2f,11.4f);
    Arithmatic aobj2(20.5f,11.6f);
    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";
    return EXIT_SUCCESS;

}