#include<iostream>
#include<windows.h>

using namespace std;

int main(int argc, char *argv[])
{
     int matA[2][2]={4,2,8,10};
     int matB[2][2]={-5,8,4,-12};
     int matC[2][2];
     int v,w,x,y,z;
     cout<<"Matriks A"<<endl;
     for(int v=0; v<2; v++)
    {
         for(int w=0; w<2; w++)
         {
            cout<<matA[v][w]<<" ";
         }
         cout<<endl;
     }
     cout<<endl;
     cout<<"Matriks B"<<endl;
     for(int v=0; v<2; v++)
     {
        for(int w=0; w<2; w++)
        {
          cout<<matB[v][w]<<" ";
        }
        cout<<endl;
     }
    z=0;
    for (v=0; v<2; v++)
    {
        for (w=0; w<2; w++)
        {
            matC[v][w]=0;
            for (x=0; x<2; x++)
            {
                z=matA[v][x]*matB[x][w];
                matC[v][w]=matC[v][w]+z;
            }
        }
   }
   cout<<endl;
   cout<<"Hasil Perkalian Matrik A dan B"<<endl;
    for(int v=0; v<2; v++)
     {
        for(int w=0; w<2; w++)
        {
          cout<<matC[v][w]<<" ";
        }
        cout<<endl;
     }
     cout<<endl;
     system("PAUSE");
     return 0;
}
