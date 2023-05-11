// Nama program : sequencial.c
// Deskripsi : Mencari sebuah nilai yang berada pada array dan menampilkan dilayar dalam bentuk posisi indeks ke berapa angka tersebut berada
// Nama Pembuat : Muhammad Fikri Firdaus
// Nim : 24060122140115
// Tanggal : 10/5/2023

#include <stdio.h>
void sequenceSearch(int T[], int n, int X){
  // kamus lokal 
  int i;
  int IX;

  //algoritma
   
  i = 0;
  while (i < n && T[i] != X){
    i++;
  }
  if (T[i] = X){
    IX = i;
  }else {
    IX = -1;
  }
  
  printf("%d",IX);
} 


int main() {

// kamus lokal
  int T[] = {1,3,5,-8,12,90,3,5} ; 
  int N; //size
  int X;// variabel untuk nyari nilai yang ingin dicari

  //algoritma 

  N = sizeof(T)/sizeof(int);
  X = 12;

  sequenceSearch(T, N, X);

   return 0; 
}