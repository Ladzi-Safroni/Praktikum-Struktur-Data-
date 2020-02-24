#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
     int matA[2][2]={4, 8, 2, 10};
     int j,k;
     cout<<"Matriks A"<<endl;
     for(int i=0; i<2; i++){
         for(int j=0; j<2; j++){
            cout<<matA[i][j]<<" ";
     }
         cout<<endl;
     }
     cout<<endl;
     cout<<"Hasil dari Matriks A dan Eksponen 5 "<<endl;
     for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
          cout<<pow(matA[i][j],5)<<" ";
     }
        cout<<endl;
     }
     cout<<endl;
     system("PAUSE");
     return 0;
}
