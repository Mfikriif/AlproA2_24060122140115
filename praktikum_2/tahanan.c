// Nama Program : tahanan.C
// Deskripsi : Menggantikan tahanan dengan sebuah nilai,mencari total dari nilai tahanan tersebut dan menampilkannya dilayar.
// Nama Pembuat : Muhammad Fikri Firdaus
// NIM : 24060122140115
// Tanggal : 2/28/2023

#include <stdio.h>

int main (){

  //kamus 

  int tahanan_1;
  int tahanan_2;
  int tahanan_3;
  int total_tahanan;

  //algoritma

  printf("\nmasukkan nilai tahanan 1 = ");
  scanf("%d",&tahanan_1);
  printf("\nmasukkan nilai tahanan 2 = ");
  scanf("%d",&tahanan_2);
  printf("\nmasukkan nilai tahanan 3 = ");
  scanf("%d",&tahanan_3);

  if (tahanan_1 < 0 | tahanan_2 < 0 | tahanan_3 < 0){
    printf("\nmasukkan tahanan tidak boleh negatif ");
  }else {
    total_tahanan = tahanan_1 + tahanan_2 + tahanan_3;
    printf("\nTotal tahanan = %d",total_tahanan);
  }


  return 0;


}