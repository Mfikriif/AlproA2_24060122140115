// Nama program : sequencial.c
// Deskripsi : Mengurutkan sebuah nilai yang berada dalam array, mengurutkan secara descending yaiotu mengurutkan angka dari yang terbesar sampai dengan yang terkecil.
// Nama Pembuat : Muhammad Fikri Firdaus
// Nim : 24060122140115
// Tanggal : 10/5/2023

#include <stdio.h>

void MaxSort(int T[], int N){
  //kamus lokal
  int i;
  int pass;
  int Temp;
  int Imax;

  //algoritma

  for(pass = 0; pass < N-1 ; pass++){
    Imax = pass;
    for (i = pass + 1; i < N; i++){
      if (T[Imax] < T[i]){
        Imax = i;
      }
    }
    Temp = T[Imax];
    T[Imax] = T[pass];
    T[pass] = Temp;
  }


}

int main(){
  //kamus lokal

  int T[] = {1,2,3,4,5,16,17,18,20,11,13,14,15,17,18,12};
  int N;
  int i;
  //algoritma
  N = sizeof(T)/sizeof(int);

  MaxSort(T,N);

  for(i = 0; i < N; i++){
    printf("%d ",T[i]);
  }

  return 0;
}