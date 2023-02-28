// Nama Program : jarakGLBB.C
// Deskripsi : Menghitung GLBB(Geral Lurus Berubah Beraturan) dan menampilkan hasilnya dilayar
// Nama Pembuat : Muhammad Fikri Firdaus
// NIM : 24060122140115
// Tanggal : 2/23/2023

#include <stdio.h>

int main(){

//kamus

    float s;
    float v0;
    float t;
    float a;

// algoritma
    printf("===============Menghitung GLBB=================\n");
    ("===============================================\n");
    printf("\nMasukkan Inputan v0 = ");
    scanf("%f",&v0);
    printf("\nMasukkan Inputan t = ");
    scanf("%f",&t);
    printf("\nMasukkan Inputan a = ");
    scanf("%f",&a);

// rumus
    s = v0 * t +  0.5 *(a*t*t);

// input
    printf("===============================================\n");
    printf("Hasil dari s adalah %f",s);
    printf("\n===============================================");

return 0;

}
