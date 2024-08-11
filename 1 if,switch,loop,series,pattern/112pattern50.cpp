#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,c,r;
    cout<<"Enter number:";
    cin>>n;
    /* printing top semi circular shapes of heart */
    for(r = n/2; r <= n; r+=2){ 
     /* Printing Spaces */
        for(c = 1; c < n-r; c+=2) {  
         cout<<" ";  
        }
        /* printing stars for left semi circle */
        for(c= 1; c <= r; c++){  
            cout<<"*";  
        }  
        /* Printing Spaces */
        for(c = 1; c <= n-r; c++){  
            cout<<" ";  
        }  
        /* printing stars for right semi circle */
        for(c = 1; c <= r; c++){  
            cout<<"*";  
        }  
        /* move to next row */
        cout<<endl;  
    }  
     
    /* printing inverted start pyramid */
    for(r= n; r >= 1; r--){  
        for(c= r; c < n; c++){  
            cout<<" ";  
        }  
        for(c= 1; c <= (r*2)-1; c++){  
            cout<<"*";  
        }  
        /* move to next row */
        cout<<endl;  
    }  
   getch();
}
    
    