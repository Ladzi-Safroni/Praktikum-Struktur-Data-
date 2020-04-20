#include<stdio.h>

void main()
{
    //deklarasi variabel
    int A[10],index[10], n, i, j, k;

    printf("\t\t\t\t============================================\n");
    printf("\t\t\t\t||  -->        PENCARIAN ANGKA       <--  ||");
    printf("\n\t\t\t\t============================================\n\n");

    printf("\nMasukkan Banyak Angka : ");
    scanf("%d",&n);
    printf("\n");
    //proses penginputan data
    for(i=0;i<n;i++)
    {
        printf("Masukkan Angka ke - %d : ",i+1);
        scanf("%d",&A[i]);
    }
    //memasukkan data yang akan dicari ke dalam K
    printf("\nMasukkan Data Yang Ingin Dicari : ");
    scanf("%d",&k);

    //proses pencarian data
    j=0;
    for (i=0;i<n;i++)
    {
        if(A[i]==k)
        {
            index[j]=i;
            j++;
        }
    }

    //jika data ditemukan dalam array
    if (j>0)
    {
        printf("\nData %d yang dicari ada %d buah\n",k,j);
        printf("\nData tersebut terdapat dalam index ke (index dimulai dari 0) : ");
        for(i=0;i<j;i++)
        {
            printf(" %d ",index[i]);
        }
        printf("\n");
    }
    //jika tidak ditemukan
    else
    {
        printf("\n'Maaf Data Yang Dicari Tidak Ada'\n");
    }
}
