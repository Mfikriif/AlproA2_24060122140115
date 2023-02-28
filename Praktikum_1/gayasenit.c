// Nama Program : gayasenit.C
// Deskripsi : Menghitung gaya sentri petal dan menampilkan hasilnya dilayar
// Nama Pembuat : Muhammad Fikri Firdaus
// NIM : 24060122140115
// Tanggal : 2/23/2023

#include <stdio.h>

int main()
{

  //kamus
  float f;
  float m;
  float v;
  float r;

  //algoritma
  printf("===============Menghitung Gaya Sentripetal===============\n");
  printf("=========================================================\n");
  printf("\nMasukkan gaya = ");
  scanf("%f",&m);
  printf("\nMasukkan kecepatan = ");
  scanf("%f",&v);
  printf("\nMasukkan jari-jari = ");
  scanf("%f",&r);

  //rumus

  f = m * (v * v / r);

  //output

  printf("=========================================================\n");
  printf("Hasil dari gaya sentri petal adalah %f",f);
  printf("\n=========================================================");

  return 0;
}