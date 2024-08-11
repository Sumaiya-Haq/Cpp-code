//chack a number is prime or not
/*#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,count=0;
    cout<<"Enter any n= ";
    cin>>n;

    if(n<=1)
    {
      count=1;
    }

     for(i=2;i<=sqrt(n);i++) //(i=2;i<n;i++)
     {
        if(n%i==0)
        {
            count=1;
        }
     }
     if(count==0)
     {
        cout<<n<<" is prime";
     }
     else{
        cout<<n<<" is not prime";
     }
    getch();
}*/


// print prim numbers from 1 to 100.
/*#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
   int i,n,count=0;
   for(n=1;n<=100;n++)
   {
      count=0;
      if(n<=1)
    {
      count=1;
    }

     for(i=2;i<=sqrt(n);i++) //(i=2;i<n;i++)
     {
        if(n%i==0)
        {
            count=1;
        }
     }
     if(count==0)
     {
        cout<<n<<" is prime\n";
     }
   }
}*/


// print & count prim numbers from 1 to 100.
/*#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
   int i,n,count=0,Totalprimenumbers=0;
   for(n=1;n<=100;n++)
   {
      count=0;
      if(n<=1)
    {
      count=1;
    }

     for(i=2;i<=sqrt(n);i++) //(i=2;i<n;i++)
     {
        if(n%i==0)
        {
            count=1;
        }
     }
     if(count==0)
     {
        cout<<n<<" is prime"<<endl;
        Totalprimenumbers++;
     }
   }
    cout<<endl<<"Total prime numbers is="<<Totalprimenumbers<<endl;
     getch();
}*/


//sum of prime numbers from 1 to 100.
/*#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
   int i,n,count=0,Totalprimenumbers=0,somofprimenumbers=0;
   for(n=1;n<=10;n++)
   {
      count=0;
      if(n<=1)
    {
      count=1;
    }

     for(i=2;i<=sqrt(n);i++) //(i=2;i<n;i++)
     {
        if(n%i==0)
        {
            count=1;
        }
     }
     if(count==0)
     {
        cout<<n<<" is prime"<<endl;
        Totalprimenumbers++;
        somofprimenumbers=somofprimenumbers+n;
     }
   }
    cout<<endl<<"Total prime numbers is="<<Totalprimenumbers<<endl;
    cout<<"sum of prime numbers= "<<somofprimenumbers;
     getch();
}*/


//print,count,sum of prime numbers m to n..
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
   int i,n,count=0,Totalprimenumbers=0,somofprimenumbers=0,
   starding_number,ending_number;

    cout<<"Enter Starding number= ";
    cin>>starding_number;
    cout<<"Enter Ending Number= ";
    cin>>ending_number;
    
   for(n=starding_number;n<=ending_number;n++)
   {
      count=0;
      if(n<=1)
    {
      count=1;
    }

     for(i=2;i<=sqrt(n);i++) //(i=2;i<n;i++)
     {
        if(n%i==0)
        {
            count=1;
        }
     }
     if(count==0)
     {
        cout<<n<<" is prime"<<endl;
        Totalprimenumbers++;
        somofprimenumbers=somofprimenumbers+n;
     }
   }
    cout<<endl<<"Total prime numbers is="<<Totalprimenumbers<<endl;
    cout<<"sum of prime numbers= "<<somofprimenumbers;
     getch();
}