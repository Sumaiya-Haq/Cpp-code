//convert kg to puunds into kilograms
#include<iostream>
using namespace std;
inline void pounds_kilograms(int kg)
{
    float pounds=kg*2.205;
    float kilograms=pounds*0.454;
  
} 
int main()
{
    int kg;
    float pounds ,kilograms;
    cin>>kg;
    cout<<"kg to pounds= "<<pounds<<"into kilograms= "<<kilograms;
    pounds_kilograms(kg);
    return 0;

}
