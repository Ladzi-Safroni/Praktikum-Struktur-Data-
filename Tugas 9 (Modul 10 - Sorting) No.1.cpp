#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i, j, k, t, x;
    char a[100];

    cout<<"\t\t\t\t=========================================="<<endl;
    cout<<"\t\t\t\t|| PROGRAM SORTING MENGURUTKAN KARAKTER ||"<<endl;
    cout<<"\t\t\t\t=========================================="<<endl<<endl;

    cout<<"> Masukkan Banyak Bilangan = ";
    cin>>x;
    for(i=1;i<=x;i++)
    {
        cout<<"\n  ~ Karakter Ke - "<<i<<" : ";
        cin>>a[i];
    }
    cout<<"\n> Karakter Sebelum Diurutkan (Input)  : ";
    for(i=1;i<=x;i++)
    {
        cout<<" "<<a[i];
    }

    cout<<endl;

    for(i=1;i<=x;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                  a[i]=a[j];
                  a[j]=t;
            }
        }
    }

    cout<<"\n> Karakter Setelah Diurutkan (Output) : ";
    for(i=1;i<=x;i++)
    {
        cout<<" "<<a[i];
    }
    getch();
}
