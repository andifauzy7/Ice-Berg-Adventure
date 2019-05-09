//M. Rezky Bayusetya  (181511052)
#ifndef Rezky181511052_H
#define Rezky181511052_H
#include "HANA_181511045.h"
#include "RIZQA_181511065.h"

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
    mciSendString("open \"Sound/BGM.mp3\" type mpegvideo alias bgm", NULL, 0, NULL);
    mciSendString("play bgm", NULL, 0, NULL);
}

void FallSFX(){
    mciSendString("open \"Sound/Fall.mp3\" type mpegvideo alias fall",NULL, 0, NULL);
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
void kanan(game arr[BRS][KLM], int BRS_, int KLM_,int a)
{
    for (int i = 0; i <=3; i++){
            if (arr[BRS_][KLM_+i].peta==1){
                readpeta(MATRIX* (KLM_+i),MATRIX* BRS_,MATRIX* (KLM_+i+1),MATRIX* (BRS_+1));
            }
            if (arr[BRS_][KLM_+i].tangga==1){
                readtangga(MATRIX* (KLM_+i),MATRIX* BRS_,MATRIX* (KLM_+i+1),MATRIX* (BRS_+1));
            }
            if (arr[BRS_][KLM_+i].tangga==2){
                readtali(MATRIX* (KLM_+i),MATRIX* BRS_,MATRIX* (KLM_+i+1),MATRIX* (BRS_+1));
            }
            if (arr[BRS_][KLM_+i].tangga==3){
                readdiamond(MATRIX* (KLM_+i),MATRIX* BRS_,MATRIX* (KLM_+i+1),MATRIX* (BRS_+1));
            }
            if (arr[BRS_][KLM_+i].pemain==1){
                readpemain(MATRIX* (KLM_+i),MATRIX* BRS_,MATRIX* (KLM_+i+1),MATRIX* (BRS_+1),a);
            }
            if (arr[BRS_][KLM_+i].tangga==4){
                readpintu(MATRIX* (KLM_+i),MATRIX* BRS_,MATRIX* (KLM_+i+1),MATRIX* (BRS_+1));
            }
    }
}

void buatpeta2(game arr[BRS][KLM], int *BRS_, int *KLM_,int lvl)
{
    buatpeta(arr,BRS_,KLM_,lvl);
}
#endif // 181511052_H
