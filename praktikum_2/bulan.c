// Nama Program : bulan.C
// Deskripsi : Menentukan bulan menggunakan nomor bulan dan menampilkannya dilayar
// Nama Pembuat : Muhammad Fikri Firdaus
// NIM : 24060122140115
// Tanggal : 2/28/2023

#include <stdio.h>

int main (){

  //kamus
  int angka_bulan;

  //Algoritma 

  printf("\n Masukkan bulan dalam angka = ");
  scanf("%d",&angka_bulan);

  if (angka_bulan == 1){
    printf("Bulan Januari");
  }else if (angka_bulan == 2){
    printf("Bulan Februari");
  }else if (angka_bulan == 3){
    printf("Bulan Maret");
  }else if (angka_bulan == 4){
    printf("Bulan April");
  }else if (angka_bulan == 5){
    printf("Bulan Mei");
  }else if (angka_bulan == 6){
    printf("Bulan juni");
  }else if (angka_bulan == 7){
    printf("Bulan juli");
  }else if (angka_bulan == 8){
    printf("Bulan Agustus");
  }else if (angka_bulan == 9){
    printf("Bulan September");
  }else if (angka_bulan == 10){
    printf("Bulan Oktober");
  }else if (angka_bulan == 11){
    printf("Bulan November");
  }else if (angka_bulan == 12){
    printf("Bulan Desember");
  }else{
    printf("Masukkan nomor bulan tidak tepat");
  }



  return 0;
}