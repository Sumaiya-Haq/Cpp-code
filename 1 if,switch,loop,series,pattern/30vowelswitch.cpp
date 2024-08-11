#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any charecter= ";
    cin>>ch;

    ch=tolower(ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    cout<<"vowel";
        break;
    
    default:
    cout<<"Consonant";
        break;
    }
    getch();
}