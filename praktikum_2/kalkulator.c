// Nama Program : kalkulator.C
// Deskripsi : Memasukkan inputan perintah operasi aritmatika dan memunculkannya dilayar. 
// Nama Pembuat : Muhammad Fikri Firdaus
// NIM : 24060122140115
// Tanggal : 2/28/2023

#include <stdio.h>

int main (){

  //kamus

  int iA,iB;
  char choice;

  //algoritma

  printf("===========Kalkulator super sederhana============\n");
  printf("=================================================\n");
  printf("pilih operasi yang ingin digunakan (a,b,c,d,e,f) : ");
  scanf("%c",&choice);
  printf("Masukkan nilai iA = ");
  scanf("%d",&iA);
  printf("Masukkan nilai iB = ");
  scanf("%d",&iB);



  if(choice == 'a'){
    printf("===============================================\n");
    printf("Hasil %d + %d = %d\n",iA,iB, iA+iB);
    printf("\n===============================================");
  }else if(choice == 'b'){
    printf("===============================================\n");
     printf("Hasil %d - %d = %d\n",iA,iB, iA-iB);
    printf("\n===============================================");
  }else if (choice == 'c'){
    printf("===============================================\n");
     printf("Hasil %d x %d = %d",iA,iB, iA*iB);
    printf("\n===============================================");
  }else if (choice == 'd'){
    printf("===============================================\n");
     printf("Hasil %d / %d = %f",iA,iB, (float)iA/iB);
    printf("\n===============================================");
  }else if (choice == 'e'){
    printf("===============================================\n");
     printf("Hasil %d div %d = %d",iA,iB, iA/iB);
    printf("\n===============================================");
  }else if (choice == 'f'){
    printf("===============================================\n");
     printf("Hasil %d mod %d = %d",iA,iB, iA%iB);
    printf("\n===============================================");
  }else {
    printf("Bukan merupakan menu pilihan yang benar\n");
  }

  

  return 0;
}