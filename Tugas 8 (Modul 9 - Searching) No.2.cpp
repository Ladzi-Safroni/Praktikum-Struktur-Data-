#include<stdio.h>
#include<string.h>

void gantihuruf( char *str, char c1, char c2)
{
    int i;
    int n;
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]==c1)
        str[i]=c2;
    }
}

int main()
{
    char str[20];
    char c1,c2;

    printf("\t\t\t\t============================================\n");
    printf("\t\t\t\t||  -->        PROGRAM REPLACE       <--  ||");
    printf("\n\t\t\t\t============================================\n\n");
    printf("Masukkan Sebuah Kalimat : ");
    gets(str);
    printf("\n> Masukkan Karakter yang Dicari\t: ");
    scanf("%c",&c1);
    fflush(stdin);
    printf("> Karakter Pengganti\t\t: ");
    scanf("%c",&c2);

    gantihuruf( str,c1,c2) ;
    printf("\nHasil Replace Adalah Sebagai Berikut : %s", str);
    printf("\n");
}
