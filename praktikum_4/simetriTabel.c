// Nama Program : simetriTabel.c
// Deskripsi : Menentukan 2 buah array simetri atau tidak simetri melalui banyak elemen dan nilai yang ada pada elemen dan menampillkan hasil nya dilayar.
// Nama Pembuat : Muhammad Fikri Firdaus
// NIM : 24060122140115
// Tanggal : 14 maret 2023

#include <stdio.h>
#include <stdlib.h>

int main() {

  //kamus
  int *array_a;
  int *array_b;
  int n,m,i,c=0;

  //algoritma
  printf("Masukkan jumlah elemen array a: ");
  scanf("%d",&n);
  array_a = (int*)malloc(n*sizeof(int));

  printf("Masukkan jumlah elemen array b: ");
  scanf("%d",&m);
  array_b = (int*)malloc(m*sizeof(int));

  if(n==m){
        printf("Masukkan nilai array a : ");
      for(i=0;i<n;i++){
        printf("\nMasukkan nilai indeks ke- %d : ",i);
        scanf("%d",&array_a[i]);
   }
        printf("\nMasukkan nilai array b : ");
      for(i=0;i<m;i++) {
        printf("\nMasukkan nilai indeks ke- %d : ",i);
        scanf("%d",&array_b[i]);
    }

      for(i=0;i<n;i++){
        if(array_a[i]==array_b[i]){
          c++;
        }

      }
        if(c==n) {
          printf("Simetri");
      }else{
          printf("Tidak simetri");
        }
      

  }else {
    printf("array tidak simetri");
  }


  free(array_a);
  free(array_b);
  return 0;
}