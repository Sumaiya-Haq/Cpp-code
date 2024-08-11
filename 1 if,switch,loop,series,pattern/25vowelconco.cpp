#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter your charecter= ";
    cin>>ch;

    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        cout<<"Vowel";
    }

    else{
        cout<<"Consonant";
    }

    getch();
}