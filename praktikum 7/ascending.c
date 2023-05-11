// Nama program : sequencial.c
// Deskripsi : Mengurutkan sebuah nilai yang berada dalam array, mengurutkan secara ascending yaiotu mengurutkan angka dari yang terkecil sampai dengan yang terbesar.
// Nama Pembuat : Muhammad Fikri Firdaus
// Nim : 24060122140115
// Tanggal : 10/5/2023

#include <stdio.h>

void CountSort(int T[], int N){
  //kamus lokal
  int Tabcount [N];
  int i;
  int K;

  //algoritma
  for(i = 0; i < N; i++){
    Tabcount[i] = 0;
  }

  for(i = 0; i < N;i++){
    Tabcount[T[i]] = Tabcount[T[i]] + 1;
  }

  K = 0;

  for(i = 0; i < N; i++){
    while(Tabcount[i]!=0){
      T[K]=i;
      K = K + 1;
      Tabcount[i]--;
    }
  }
}

int main(){

  // kamus lokal 

  int T[] = {2,5,6,3,2,4,1,2,1,7,4};
  int N;
  int i;

  //algoritma
  N = sizeof(T)/sizeof(int);

  CountSort(T,N);

  for(i = 0; i < N;i++){
    printf("%d ",T[i]);
  }

  return 0;
}