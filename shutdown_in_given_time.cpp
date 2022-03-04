#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<sstream>
using namespace std;
int main()
{
    int sec, i;
    string strOne, strTwo;
    char str_One[50], str_Two[10];
    ostringstream intToStr;
    cout<<"Enter Number of Seconds: ";
    cin>>sec;
    intToStr<<sec;
    strOne = "C:\\Windows\\System32\\shutdown /s /t ";
    strTwo = intToStr.str();
    i=0;
    while(strOne[i])
    {
        str_One[i] = strOne[i];
        i++;
    }
    str_One[i] = '\0';
    i=0;
    while(strTwo[i])
    {
        str_Two[i] = strTwo[i];
        i++;
    }
    str_Two[i] = '\0';
    strcat(str_One, str_Two);
    system(str_One);
    return 0;
}
