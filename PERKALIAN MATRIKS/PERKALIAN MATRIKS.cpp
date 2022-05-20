#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
	
	cout << "######## PERKALIAN MATRIKS #######" << endl;
	cout << "########   LUTFI ZAKARIA   #######" << endl; 
	
    int m1[100][100], m2 [100][100], m3 [100][100], b,k,BB,BK,i,sum=0,kk;
    printf("=== Buat Matrik ===\n");
    printf("masukkan jumlah baris : ");scanf("%d",&b);
    printf("masukkan junlah kolom : ");scanf("%d",&k);

    for(i=1; i<3; i++){
        printf("\n\n======ELEMEN MATRIKS %d=======\n", i);
        for(BB=0;BB<b;BB++){
            for(BK=0;BK<k;BK++){
                if(i==1){
                    printf("masukan baris. ke %d kolom ke %d : ",BB+1,BK+1);scanf("%d",&m1[BB][BK]);}
                else{
                    printf("Bilangan baris ke %d kolom ke %d : ",BB+1,BK+1);scanf("%d",&m2[BB][BK]);}
            }
        }
    }
	
    printf("\n\n=== Gambar Matrik ===\n");
    for(i=1; i<3; i++){
        printf("== Matrik ke %d ==\n", i);
        for(BB=0;BB<b;BB++){
            for(BK=0;BK<k;BK++){
                if(i==1)
                    printf("  %d  ",m1[BB][BK]);
                else
                    printf("  %d  ",m2[BB][BK]);
            }
            printf("\n");
        }
        printf("\n\n");
    }

    for(BB=0;BB<b;BB++){
        for(BK=0;BK<k;BK++){
            for(BB=0;BB<b;BB++){
                for(BK=0;BK<k;BK++){
                    sum=0;
                    for(kk=0;kk<k;kk++){
                        sum=sum+m1[BB][kk]*m2[kk][BK];
                    }
                    m3[BB][BK]=sum;
                }
            }
        }
    }

    printf("=== Hasil Perkalian Matrik ===\n");
    for(BB=0;BB<b;BB++){
        for(BK=0;BK<k;BK++){
            printf("  %d  ",m3[BB][BK]);
        }
        printf("\n");
    }
    return 0;
}
