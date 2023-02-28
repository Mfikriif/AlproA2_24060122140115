// Nama Program : volBolKerct.C
// Deskripsi : Menghitung volume bola dan kerucut dan menampilkan hasilnya dilayar
// Nama Pembuat : Muhammad Fikri Firdaus
// NIM : 24060122140115
// Tanggal : 2/23/2023

#include <stdio.h>

int main()
{

  //kamus

  float vb;
  float vk;
  float r;
  const float phi = 3.1415;

  //algoritma
  printf("===============Menghitung Luas Bola dan luas Kercut===============\n");
  printf("==================================================================\n");
  printf("\nMasukkan Nilai Jari-jari lingkaran = ");
  scanf("%f",&r);

  vb = 1.3 * (phi * r * r * r);
  vk = 0.5 * vb;

  //outuput

  printf("==================================================================\n");
  printf("Hail dari volume bola adalah = %f",vb);
  printf("\nHail dari volume kerucut adalah = %f",vk);
  printf("\n==================================================================");


return 0;
}