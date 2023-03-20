// Nama Program : FrekNilTabel.c
// Deskripsi : mencari nilai integer positif yang keluarannya lebih dari 1 kali lalu menampilkannya dilayar.
// Nama Pembuat : Muhammad Fikri Firdaus
// NIM : 24060122140115
// Tanggal : 14 maret 2023


#include <stdio.h>
#include <stdlib.h>

int main () {

  //kamus
  int *array;
  int i,j;
  int n,sama;


  //algoritma
 printf("masukkan jumlah array yang ingin digunakan : ");
 scanf("%d", &n);

 array = (int*)malloc(n*sizeof(int));
  for(i=0;i<n;i++){
    printf("masukkan indeks ke - %d : ",i);
    scanf("%d",&array[i]);
  }
  for(i=0;i<n;i++) {
    sama = 0;
    for(j=0;j<n;j++) {
      if(i==j){
        break;
      }
      else{
        if(array[i]==array[j]){
          sama+=1;
        }
      }
    }
    if (sama==1){
      printf("frekuensi yang sama yaitu %d\n",array[i]);
    }
  }


  return 0;
}
//7,4,5,7,6,5,3,5,1,4