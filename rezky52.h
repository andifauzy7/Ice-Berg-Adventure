//M. Rezky Bayusetya  (181511052)
#ifndef Rezky181511052_H
#define Rezky181511052_H
#include "hana45.h"
#include "rizqa65.h"

void About(int x, int y){
    readimagefile("gambar/About.gif",0,0,getmaxx(),getmaxy());
    while(1){
        getmouseclick(WM_LBUTTONDOWN, x, y);
        if((x>26)&&(x<127)&&(y>600)&&(y<getmaxy()-28)){
            break;
        }
    }
}


void menu(){
    void control_button();
    int x, y;

    readimagefile("gambar/awal.gif",0,0,getmaxx(),getmaxy());
    //splash screen
    delay(1200);
    menu:
    while(!ismouseclick(WM_LBUTTONDOWN)){
    readimagefile("gambar/menu.gif",0,0,getmaxx(),getmaxy());
    }

    while(1){
        getmouseclick(WM_LBUTTONDOWN, x, y);
        //Masuk ke Permainan
        if((x>getmaxx()-460)&&(x<getmaxx()-104)&&(y>220)&&(y<356)){
            cleardevice();
            settextstyle(BOLD_FONT, HORIZ_DIR, 5);
            outtextxy(470, 240, "Selamat Bermain");
            delay(600);
            cleardevice();
            break;
        }
        //Menampilkan Leaderboard
        else if((x>getmaxx()-460)&&(x<getmaxx()-104)&&(y>378)&&(y<500)){
            leaderboard(x,y);
            goto menu;
        }
        else if((x>getmaxx()-460)&&(x<getmaxx()-104)&&(y>530)&&(y<654)){
            About(x,y);
            goto menu;
        }
        else if((x>26)&&(x<127)&&(y>600)&&(y<getmaxy()-28)){
            delay(200);
            exit(1);
        }
    }
}


void BGM(){
    mciSendString("open \"suara/BGM.mp3\" type mpegvideo alias bgm", NULL, 0, NULL);
    mciSendString("play bgm", NULL, 0, NULL);
}

void FallSFX(){
    mciSendString("open \"suara/Fall.mp3\" type mpegvideo alias fall",NULL, 0, NULL);
    mciSendString("play fall from 0", NULL, 0, NULL);
}
//Fall FX

//catatan: tambahin linker di project biar sound bisa dipake >> "lwinmm"
/*posisi playercoordinate(game arr[BRS][KLM])
{
    posisi mulai;
    for (int i = 0; i < BRS; i++){
        for (int j = 0; j < KLM; j++){
           if (arr[i][j].pemain == 1){
                mulai.x = i;
                mulai.y = j;
                return mulai;
            }
        }
    }
}*/
void kanan(game arr[BRS][KLM], int baris, int kolom,int a)
{
    for (int i = 0; i <=3; i++){
            if (arr[baris][kolom+i].peta==1){
                readpeta(MATRIX* (kolom+i),MATRIX* baris,MATRIX* (kolom+i+1),MATRIX* (baris+1));
            }
            if (arr[baris][kolom+i].benda==1){
                readtangga(MATRIX* (kolom+i),MATRIX* baris,MATRIX* (kolom+i+1),MATRIX* (baris+1));
            }
            if (arr[baris][kolom+i].benda==2){
                readtali(MATRIX* (kolom+i),MATRIX* baris,MATRIX* (kolom+i+1),MATRIX* (baris+1));
            }
            if (arr[baris][kolom+i].benda==3){
                readdiamond(MATRIX* (kolom+i),MATRIX* baris,MATRIX* (kolom+i+1),MATRIX* (baris+1));
            }
            if (arr[baris][kolom+i].benda==4){
                readpintu(MATRIX* (kolom+i),MATRIX* baris,MATRIX* (kolom+i+1),MATRIX* (baris+1));
            }
    }
}

void buatpeta2(game arr[BRS][KLM], int *baris, int *kolom,int level, kordinat*player)
{
    buatpeta(arr,baris,kolom,level,player);
}
#endif // 181511052_H
