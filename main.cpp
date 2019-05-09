// File      : main.cpp
// Author    : Anggota Kelompok 11.
// Deskripsi : Program Utama dari Permainan Ice Berg Adventure.
// D3 JTK'18 : PPL 2

#include "Header/ANDI_181511007.h"
#include "Header/HANA_181511045.h"
#include "Header/KRESNA_181511051.h"
#include "Header/REZKY_181511052.h"
#include "Header/SOFIHIN_181511056.h"
#include "Header/RIZQA_181511065.h"

#define awal 20

int main()
{
    int mat[][35] =  {
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{0,1,4,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3,0,0,0,0,0,0,2,0,0,0,3,0,0,0,0,0,1},
	{0,1,1,1,1,2,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,2,1,1,1,0,1,1,1,0,0,1},
	{0,1,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1},
	{0,1,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,2,0,0,1},
	{0,1,0,0,0,2,1,1,1,1,1,2,1,1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,2,1,1,1},
	{0,1,0,0,0,2,1,0,0,0,0,2,0,0,0,0,0,0,3,3,3,3,3,3,3,0,0,0,3,3,3,2,0,0,1},
	{0,1,0,0,0,2,1,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,2,0,2,1},
	{0,1,0,0,0,2,1,0,0,0,0,2,0,0,0,0,0,2,3,3,0,0,0,0,0,0,0,0,0,0,0,1,1,2,1},

	{0,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,2,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,2,1},
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,1,0,0,2,0,0,0,0,0,2,1},
	{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,1,1,1,2,3,3,3,0,0,2,1},
	{0,1,0,0,0,2,3,3,3,3,0,0,0,0,0,0,0,2,0,0,0,0,0,0,1,0,0,2,0,0,1,2,0,2,1},
	{0,1,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,1,0,0,2,0,0,1,2,1,1,1},
	{0,1,0,0,0,2,0,0,0,0,1,2,0,0,2,1,1,1,1,2,0,0,0,0,1,0,0,2,0,0,1,2,0,0,1},
	{0,1,0,0,0,2,0,0,0,0,1,2,0,0,2,1,0,0,2,2,0,0,0,0,1,0,0,2,0,0,1,2,0,0,1},
	{0,1,1,1,1,1,1,0,0,0,1,2,0,0,2,1,0,0,2,2,0,0,0,0,1,2,0,2,0,0,1,2,0,0,1},
	{0,1,1,0,0,0,1,0,0,0,1,2,0,0,2,1,0,0,2,1,1,1,1,1,1,2,1,1,1,1,1,2,1,1,1},
	{0,1,1,0,0,0,1,1,1,1,1,1,1,0,2,1,0,0,2,1,1,1,1,1,1,2,1,1,1,1,1,2,1,1,1},

	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}

    };

    initwindow(1360, 760, "First Sample");
    readimagefile("Background/layout-game.gif",0,0,1360,760);
	node* kepala = membuatmatriks(mat, 22, 35);
	node* karakterutama;
	int baris;
	tampilarray(kepala);
    for(;;){
        switch(getch()){
            case 'w':
                karakterutama=cekkarakterutama(kepala);
                baris=cekbaris(karakterutama);
                if(karakterutama->atas!=NULL && karakterutama->letak==karakterutama->atas->letak){
                    setviewport(awal+30*karakterutama->letak,awal+30*baris,50+30*karakterutama->letak,50+30*baris,1);
                    clearviewport();
                    setviewport(0,0,1360,760,1);
                    karakterutama->objek=0;
                    karakterutama=karakterutama->atas;
                    karakterutama->objek=4;
                    baris=cekbaris(karakterutama);
                    readimagefile("Sprites/llama.gif",awal+30*karakterutama->letak,awal+30*baris,50+30*karakterutama->letak,50+30*baris);
                }
                // Keatas.
            break;
            case 'd':
                karakterutama=cekkarakterutama(kepala);
                baris=cekbaris(karakterutama);
                if(karakterutama->kanan!=NULL && karakterutama->letak+1==karakterutama->kanan->letak){
                    setviewport(awal+30*karakterutama->letak,awal+30*baris,50+30*karakterutama->letak,50+30*baris,1);
                    clearviewport();
                    setviewport(0,0,1360,760,1);
                    karakterutama->objek=0;
                    karakterutama=karakterutama->kanan;
                    karakterutama->objek=4;
                    readimagefile("Sprites/llama.gif",awal+30*karakterutama->letak,awal+30*baris,50+30*karakterutama->letak,50+30*baris);
                }
                // Kekanan.
            break;
            case 's':
                karakterutama=cekkarakterutama(kepala);
                baris=cekbaris(karakterutama);
                if(karakterutama->bawah!=NULL && karakterutama->letak==karakterutama->bawah->letak){
                    setviewport(awal+30*karakterutama->letak,awal+30*baris,50+30*karakterutama->letak,50+30*baris,1);
                    clearviewport();
                    setviewport(0,0,1360,760,1);
                    karakterutama->objek=0;
                    karakterutama=karakterutama->bawah;
                    karakterutama->objek=4;
                    baris=cekbaris(karakterutama);
                    readimagefile("Sprites/llama.gif",awal+30*karakterutama->letak,awal+30*baris,50+30*karakterutama->letak,50+30*baris);
                }
                // Kebawah.
            break;
            case 'a':
                karakterutama=cekkarakterutama(kepala);
                baris=cekbaris(karakterutama);
                if(karakterutama->kiri!=NULL && karakterutama->letak-1==karakterutama->kiri->letak && karakterutama->kiri->kiri!=NULL){
                    setviewport(awal+30*karakterutama->letak,awal+30*baris,50+30*karakterutama->letak,50+30*baris,1);
                    clearviewport();
                    setviewport(0,0,1360,760,1);
                    karakterutama->objek=0;
                    karakterutama=karakterutama->kiri;
                    karakterutama->objek=4;
                    readimagefile("Sprites/llama.gif",awal+30*karakterutama->letak,awal+30*baris,50+30*karakterutama->letak,50+30*baris);
                }
                // Kekiri.
            break;
            default :

                // None
            break;
        }
    }

	return 0;
}
