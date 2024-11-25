#include<iostream>
using namespace std;
float calculate(float &num1, float &num2,float &num3)
{
    if((num1>num2)&&(num1>num3))
    {
    return num1;
    }
    else if((num2>num1)&&(num2>num3))
    {
      return num2;
    }
    else{
        return num3;
    }
}
int main()
{
  float num1,num2,num3,h;
  cout<<"Enter Rakib numbers= ";
  cin>>num1;
  cout<<"Enter Hasan numbers= ";
  cin>>num2;
  cout<<"Enter purno numbers= ";
  cin>>num3;
  h=calculate(num1,num2,num3);
  if(h==num1)
  {
    cout<<"Rakib got the highest mark";
  }
  else if(h==num2)
  {
    cout<<"Hasan got the highest mark";
  }
  else
  {
    cout<<"Purno got the highest mark";
  }
  return 0;
  

}