// Nama Program : NilMax2Tabel.c
// Deskripsi : Mencari niali max ke 2 dari sebuah array dan menampilkannya di layar
// Nama Pembuat : Muhammad Fikri Firdaus
// NIM : 24060122140115
// Tanggal : 14 maret 2023

#include <stdio.h>

int main() {

  int a[50];
  int i;
  int n;
  int max1=0,max2=0;
    
    printf("masukkan jumlah array yang ingin dipakai : ");
    scanf("\n%d",&n);

  for(i=0;i<n;i++) {
    printf("masukkan indeks ke -%d : ", i);
    scanf("%d", &a[i]);
  }
  for (i=0;i<n;i++) {
    if (a[i] > max1) {
      max2 = max1;
      max1 = a[i];
    }else if (a[i] == max1) {
      max1 = a[i];
    }else if(a[i] > max2) {
      max2 = a[i];
    } 


  }
    printf("%d",max2);

    return 0;

}