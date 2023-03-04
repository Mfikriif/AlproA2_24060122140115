// Nama Program : hari.C
// Deskripsi : Memasukkan inputan nama-nama hari dari nomor hari. 
// Nama Pembuat : Muhammad Fikri Firdaus
// NIM : 24060122140115
// Tanggal : 2/27/2023


#include <stdio.h>

int main (){

  //Kamus

  int bil; //bilangan bulat integer
 

  //Algoritma 

  printf("\nMasukkan bilangan ");
  scanf("%d",&bil); // input



  if(bil == 1){
    printf("Hari ini hari senin");
  }else if (bil == 2){
    printf("Hari ini hari selasa");
  }else if (bil == 3){
    printf("Hari ini hari rabu");
  }else if (bil == 4){
    printf("Hari ini hari kamis");
  }else if (bil == 5){
    printf("Hari ini hari jum'at");
  }else if (bil == 6){
    printf("Hari ini hari sabtu");
  }else if (bil == 7){
    printf("Hari ini hari minggu");
  }else{
    printf("Masukkan Nomor hari dengan tepat");
  }

return 0;
}