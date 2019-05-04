// File      : KEL11_Header.h
// Author    : Anggota Kelompok 11.
// Deskripsi : Seluruh Deklarasi Prosedur, Fungsi & Struktur Data Game.
// D3 JTK'18 : PPL 2

/* NOTE Untuk Anggota :
   Setiap menambah Prosedur atau Fungsi, biasakan berikan komentar, Initial State (IS) dan Final State (FS)
   Agar tujuan dari modul dipahami baik input, alur proses dan outputnya. Clean Code Harga Mati!
   SEMANGAT! CHEERS!
*/

#include <stdio.h>
#include <malloc.h>
#include <graphics.h>
#define awal 20

#ifndef KEL11_Header_H_INCLUDED
#define KEL11_Header_H_INCLUDED

// Kamus Data dari Linked List.
struct node {
    int letak;
	int data, objek;
	node *kanan, *bawah, *kiri, *atas;
	/*  Letak : Untuk menampung identitas baris atau kolom dari suatu list.
        Data  : Untuk menampung jalur yang bisa dilewati karakter utama.
        Objek : Untuk menampung objek yang ditindih oleh karakter utama (Ex : Tali, Tangga dsb).
        Node  : Pointer penghubung. */
};

node* buatnode(int jalur, int objek, int letak);
/*  IS : Masukkan berupa integer untuk mengisi nilai data.
    FS : Mengembalikan pointer yang sudah berisi nilai. */

void tampilarray(node* head);
/*  IS : Masukkan berupa pointer paling awal, dengan asumsi sudah ada pointer tsb.
    FS : Menampilkan apa yang ditunjuk oleh pointer head hingga baris dan kolom NULL */

node* membuatmatriks(int mat[][35], int m, int n);
/*  IS : Masukkan berupa matriks yang sudah didefinisikan, dengan menentukan baris dan kolom
    FS : Mengembalikan sebuah pointer paling awal */

void ubahisiindex(node* head, int baris, int kolom, int data);
/*  IS : Masukkan berupa pointer head dengan asumsi telah dibuat, disertai index dan data yang akan me-replace.
    FS : Matriks yang ditunjuk oleh pointer Head telah diubah isi indexnya. */

node* cekkarakterutama(node *head);
/*  IS : Masukkan berupa pointer head dari List.
    FS : Diketahui keberadaan karakter utama (alamatnya) */

int cekbaris(node *head);
#endif

