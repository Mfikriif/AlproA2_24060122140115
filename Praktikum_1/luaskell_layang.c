// Nama Program : luaskell_layang.C
// Deskripsi : Menghitung luas dan keliling dari layang-layang dan menampilkan hasilnya dilayar
// Nama Pembuat : Muhammad Fikri Firdaus
// NIM : 24060122140115
// Tanggal : 2/23/2023

#include <stdio.h>

int main()
{

  //kamus

  int luas;
  int kell;
  int d1;
  int d2;
  int s1;
  int s2;

  //algoritma

  printf("===============Menghitung Luas dan Keliling layang-layang===============\n");
  printf("========================================================================\n");
  printf("\nMasukkan nilai diagonal 1 layang-layang = ");
  scanf("%d",&d1);
  printf("\nMasukkan nilai diagonal 2 layang-layang = ");
  scanf("%d",&d2);
  printf("\nMasukkan nilai sisi 1 layang-layang = ");
  scanf("%d",&s1);
  printf("\nMasukkan nilai sisi 2 layang-layang = ");
  scanf("%d",&s2);
 
  //rumus

  luas = 0.5 * d1 * d2; 
  kell = 2 * ( s1 + s2);
  
  //output

  printf("========================================================================\n");
  printf("Hasil dari luas layang-layang adalah = %d",luas);
  printf("\nHasil dari keliling layang-layang adalah = %d",kell);
  printf("\n========================================================================");
  
return 0;
}