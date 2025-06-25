#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    ///Massive of chars
    /*const int COUNT = 255;

    char s1[COUNT];    //Задание строки
    char letter = 'a';

    int len = 0;
    int num = 0;
    cin.get(s1,COUNT);
    cin.ignore();
    //cout<<s1<<endl;
    len = strlen(s1);
    /*cout<<"Длина строки равна "<< len <<endl;
    for (int i = 0; i<=len;i++) cout<<s1[i];
    cout<<s1[0]<<endl;
    int i = 0;

    do {

        if (i==0 && s1[0] == letter) num++;
        if (i>0 && s1[i-1] == ' ' && s1[i] == letter) num++;
        i++;
    } while (i<len);
    //cout<<s1<<endl;
    cout<<"Количество слов, начинающихся с буквы 'а' равно "<< num<<endl;
    */




    ///String

    string str;
    const char letterstr = 'a';
    while (true)
    {

        int numstr = 0;
        getline(cin,str);
        if (str=="EXIT") break;

        int lens = str.length();

        for (int i = 0; i< lens; i++)
        {
            //cout<<"ПРЕД "<<i<<endl;
            int deg = 0;
            if (i==0 && str.find(letterstr) == 0){numstr++;/*cout<<"НШЛ"<<endl*/;continue;}

            deg = str.find(letterstr,i) - str.find(' ',i-1);
            if (deg==1)
            {
                numstr++;
                //cout<<"НШЛ"<<endl;
                i+=str.find(letterstr,i)-1;
            }
            //cout<<"ПОСЛ "<<i<<endl;
        }
        cout<<"Количество слов, начинающихся с буквы 'а' равно "<< numstr <<endl;
    }
    cout<<"Цикл закончен выходом"<<endl;




    /*
    char s1[COUNT];    //Задание строки
    char letter = 'a';

    int len = 0;
    int num = 0;
    cin.get(s1,COUNT);
    cin.ignore();
    //cout<<s1<<endl;
    len = strlen(s1);
    char bufer[COUNT];
    int prob = 0;

    for (int i = 0; i<len ; i++) {if (s1[i] == ' ') prob++;}

    */
    return 0;
}
