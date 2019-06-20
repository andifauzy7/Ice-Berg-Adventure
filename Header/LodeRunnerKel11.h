#ifndef LodeRunnerKel11_H
#define LodeRunnerKel11_H
#include <graphics.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdbool.h>
#include <Mmsystem.h>
#include <time.h>
#pragma comment(lib, "Winmm.lib")

#define MATRIX 30
#define BRS 690/MATRIX
#define KLM 1050/MATRIX

typedef struct{
    int pemain;
    int peta;
    int tangga;
}game;

typedef struct{
    int baris;
    int kolom;
}posisi;

typedef struct{
    posisi pos;
    clock_t start;
}lubang;

typedef struct{
    lubang dt_lubang[20];
    int Count;
    int Max;
    int Head;
    int Tail;
}Queue;

typedef struct tdtmap *address;

typedef struct tdtmap {
    game arr[BRS][KLM];
    address next;
} dtmap;

typedef struct{
    int score;
    char name[20];
}high_score;

//game arr;
#include "SOFIHIN_181511056.h"
#include "REZKY_181511052.h"
#include "HANA_181511045.h"
#include "RIZQA_181511065.h"
#include "ANDI_181511007.h"
#include "KRESNA_181511051.h"

//visual
void readpeta(int x1,int y1,int x2,int y2);

void readpemain(int x1,int y1,int x2,int y2,int gerakpemain);

void readtangga(int x1,int y1,int x2,int y2);

void readtali(int x1,int y1,int x2,int y2);

void readdiamond(int x1,int y1,int x2,int y2);

void readbot(int x1,int y1,int x2,int y2);

void delpemain(game arr[BRS][KLM],int brs,int klm);

void diamond(game arr[BRS][KLM], int BRS_, int KLM_, int *score);

void delbalok (game arr[BRS][KLM],int baris,int kolom,int i);

void delbalokallpage(game arr[BRS][KLM],int baris,int kolom,int i);
//sound
void BGM();

void FallSFX();
//map
void readdesain1(game arr[BRS][KLM]); //Modul untuk desain level

void readdesain2(game arr[BRS][KLM]); //Modul untuk desain level

void readdesain3(game arr[BRS][KLM]); //Modul untuk desain level

void readdesain4(game arr[BRS][KLM]); //Modul untuk desain level

void inspemain(game arr[BRS][KLM],int baris,int kolom);

void buatpeta(game arr[BRS][KLM], int* BRS_, int* KLM_); //untuk membuat array

//inisiasi tampilan
void tampilall(game arr[BRS][KLM]);

void menu();
//kordinat pemain
posisi playercoordinate(game arr[BRS][KLM]);

//menampilkan sprites
void bawah(game arr[BRS][KLM], int BRS_, int KLM_,int a);

void atas(game arr[BRS][KLM], int BRS_, int KLM_,int a);

void kiri(game arr[BRS][KLM], int BRS_, int KLM_,int a);

void kanan(game arr[BRS][KLM], int BRS_, int KLM_,int a);

void tampilscore(int score);

void tampillvl(int lvl);

void tampilpintu(game arr[BRS][KLM],int score);

//kondisi penggunaan animasi
void animasi(int *a,int *b,int *c);

void animasi2(game arr[BRS][KLM],int baris,int kolom,int *a,int *b,int *c);
//untung memeriksa apakah di bawah ada objek atau tidak
bool diam(game arr[BRS][KLM], int BRS_, int KLM_);

bool atastangga(game arr[BRS][KLM], int BRS_, int KLM_);

bool jalan(game arr[BRS][KLM], int BRS_, int KLM_,int brsbef, int klmbef);

//memeriksa apakah di samping ada tembok atau tidak
bool kanankiri(game arr[BRS][KLM], int BRS_, int KLM_, int arah);


//untuk memeriksa apakah di bawah ada objek atau tudak
bool jatuh(game arr[BRS][KLM], int BRS_, int KLM_);

//untuk memeriksa apakah sedang di tangga atau tidak saat naik
bool naiktangga(game arr[BRS][KLM], int BRS_, int KLM_);

bool cekpintu(game arr[BRS][KLM], int baris, int kolom);

bool naiklvl(game arr[BRS][KLM], int baris, int kolom, int score);

//untuk memeriksa apakah sedang di tangga atau tidak saat turun
bool turuntangga(game arr[BRS][KLM], int BRS_, int KLM_);

bool cekbalok(game arr[BRS][KLM], int BRS_, int KLM_, int arah);

void buatpeta2(game arr[BRS][KLM], int *BRS_, int *KLM_);

//modul untuk mengemblikan lubang yang telah dibuat
void inisiasi_queue(Queue* P);

float hitungdurasi(clock_t awal,clockid_t sekarang);

void dealok(lubang* P);

lubang dequeue(Queue* P);

void enqueue(Queue* P, lubang Z);

void tampunglubang(lubang* Z,int baris, int kolom, clock_t waktu);

void isikembali(game arr[BRS][KLM], Queue* P, clock_t tsekarang);

//menggerakan pemain
void movement(char gerak, game arr[BRS][KLM], int* BRS_, int* KLM_,int *score, Queue* P);

//menampilkan gerakan pemain
void movementpemain(char gerak, game arr[BRS][KLM], int baris_, int kolom_,int page,int a,int b,int c);


void simpanfile(char nama[20], int score);
#endif // LodeRunnerKel11_H
