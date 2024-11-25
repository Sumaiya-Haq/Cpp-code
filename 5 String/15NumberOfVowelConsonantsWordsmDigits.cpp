#include<iostream>
#include<conio.h>
#include<cstring>//header file for string
using namespace std;
int main()
{
    char str1[100],ch;
    int i=0,vowel=0,consonant=0,words=0,digit=0,others=0;
    cout<<"Enter any string= ";
    gets(str1);
    while((ch=str1[i])!='\0')
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            vowel++;
        }
        else if((ch>='a'&& ch<='z')|| (ch>='A'&& ch<='Z'))
        {
            consonant++;
        }
        else if(ch>='0' && ch<='9')
        {
            digit++;
        }
        else if(ch==' ')
        {
            words++;
        }
        else{
            others++;
        }

        i++;

    }
    words++;
    cout<<"number of vowel is= "<<vowel<<endl;
    cout<<"number of consonant is= "<<consonant<<endl;
    cout<<"number of digit is= "<<digit<<endl;
    cout<<"number of words is= "<<words<<endl;
    cout<<"number of others is= "<<others<<endl;

    getch();

}