#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char kata[50];
    int total_kata, penentuan_kata;
    char balik_kata;
    bool palindrome=true;

    cout<<"\t\t\t==============================================================================\n";
    cout<<"\t\t\t        Aplikasi Stack Untuk Menentukan Palindrom atau Bukan Palindrom\n";
    cout<<"\t\t\t==============================================================================\n\n\n";
    cout<<"Masukkan Kata \t\t: ";
    cin>>kata;
    total_kata=strlen(kata);
    cout<<"\nJumlah Huruf \t\t: "<<total_kata;
    cout<<"\nKata Asli \t\t: "<<kata<<endl;
    cout<<"Kata Setelah Dibalik \t: ";
        for (int a=total_kata;a>=1;a--)
            {
                balik_kata=kata[a-1];
                cout<<balik_kata;
            }
    penentuan_kata=total_kata-1;
    for (int a=0;a<total_kata;a++)
    {
        if((char)tolower(kata[a]!=(char)tolower(kata[penentuan_kata])))
        {
            palindrome = false;
            break;
        }
        penentuan_kata--;
    }
    if(palindrome)
        {
            cout<<"\n\nKalimat tersebut adalah Palindrom\n\n\n";
        }
    else
        {
            cout<<"\n\nKalimat tersebut adalah Bukan Palindrom\n\n\n";
        }
    getch();

    cout<<"Masukkan Kata \t\t: ";
    cin>>kata;
    total_kata=strlen(kata);
    cout<<"\nJumlah Huruf \t\t: "<<total_kata;
    cout<<"\nKata Asli \t\t: "<<kata<<endl;
     cout<<"Kata Setelah Dibalik \t: ";
        for (int a=total_kata;a>=1;a--)
            {
                balik_kata=kata[a-1];
                cout<<balik_kata;
            }
    penentuan_kata=total_kata-1;
    for (int a=0;a<total_kata;a++)
    {
        if((char)tolower(kata[a]!=(char)tolower(kata[penentuan_kata])))
        {
            palindrome = false;
            break;
        }
        penentuan_kata--;
    }
    if(palindrome)
        {
            cout<<"\n\nKalimat tersebut adalah Palindrom\n\n\n";
        }
    else
        {
            cout<<"\n\nKalimat tersebut adalah Bukan Palindrom\n\n\n";
        }
    getch();
}
