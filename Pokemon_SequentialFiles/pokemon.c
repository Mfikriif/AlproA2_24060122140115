/*Nama File 	: kelompokNilai_styleArray.c*/
/*Deskripsi 	: Mengelompokkan nilai berdasarkan kelompok nilai huruf terentu dan dioutputkan dalam file yang berbeda*/
/*Pembuat   	: 24060122140115-Muhammad Fikri Firdaus*/
/*Tgl Pembuatan	: 5 Juni 2023 

/*header file*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Program Utama*/
int main(void)
{
    /*Kamus Lokal*/
    int i, capacity;
    int nilai[10]; // array nilai dan nim
    char nama[10][255]; // array nama
    char (*name)[100]; // array pointer nama
    int retval;
    FILE *myFILE, *aFile, *bFile;

    i = 0;
    myFILE = fopen("DaftarPokemon.txt", "r");
    aFile = fopen("Pokemon_Sclass.txt","w");
    bFile = fopen("Pokemon_Aclass.txt","w");
    
    /*Algoritma*/
    if(!myFILE){
        printf("File tidak ditemukan!"); // Pesan muncul apabila file tidak ditemukan
    } else {
        retval = fscanf(myFILE, "%s %d", &nama[0],&nilai[0]);
        while (retval != EOF)
        {
            i++;
            retval = fscanf(myFILE, "%s %d", &nama[i],&nilai[i]);
        }
        capacity = i;
        name = malloc(capacity * sizeof(*name)); // alokasi name
        for(int s=0;s<capacity;s++){ // copy list nama dari array nama ke pointer array name
            strcpy(name[s], nama[s]);
        }
        fprintf(aFile, "Pokemon kategori S class \n");
        fprintf(bFile, "Pokemon kategori A class \n");
        
            for(int a=0;a<capacity;a++){ // proses input data ke masing-masing file kelompok nilai
                if(nilai[a] >= 80){
                    fprintf(aFile, "%s %d\n", name[a],nilai[a]);
                } else if(nilai[a] >= 70 && nilai[a] < 80){
                    fprintf(bFile, "%s %d\n", name[a],nilai[a]);
                }
            }

            printf("Nilai berhasil dikelompokkan");
                
            free(name); // membersihkan data pointer name
    }
    return 0;
}