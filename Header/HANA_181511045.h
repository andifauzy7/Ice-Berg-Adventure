//Hana Kirana (181511045)
#ifndef Hana181511045_H
#define Hana181511045_H
#include "ANDI_181511007.h"

void readdesain1(game arr[BRS][KLM]) //Modul untuk desain level
{
	//bata
arr[4][0].peta=1;   arr[4][1].peta=1;   arr[4][3].peta=1;   arr[4][4].peta=1;   arr[4][5].peta=1;   arr[4][6].peta=1;   arr[4][7].peta=1;  arr[4][8].peta=1;
arr[4][9].peta=1;   arr[4][15].peta=1;  arr[4][16].peta=1;  arr[4][17].peta=1;  arr[4][18].peta=1;  arr[4][19].peta=1;  arr[4][20].peta=1; arr[4][21].peta=1;
arr[4][22].peta=1;  arr[4][23].peta=1;  arr[4][24].peta=1;  arr[4][25].peta=1;  arr[6][26].peta=1;  arr[6][27].peta=1;  arr[6][28].peta=1; arr[6][29].peta=1;
arr[6][30].peta=1;  arr[6][31].peta=1;  arr[6][32].peta=1;  arr[6][33].peta=1;  arr[7][10].peta=1;  arr[7][15].peta=1;  arr[7][16].peta=1; arr[7][17].peta=1;
arr[7][18].peta=1;  arr[7][19].peta=1;  arr[7][20].peta=1;  arr[7][21].peta=1;  arr[7][22].peta=1;  arr[7][23].peta=1;  arr[7][24].peta=1; arr[8][3].peta=1;
arr[8][4].peta=1;   arr[8][5].peta=1;   arr[8][6].peta=1;   arr[8][7].peta=1;   arr[8][9].peta=1;   arr[8][10].peta=1;  arr[8][11].peta=1; arr[8][24].peta=1;
arr[9][3].peta=1;   arr[9][6].peta=1;   arr[10][3].peta=1;  arr[10][6].peta=1;  arr[10][24].peta=1; arr[11][3].peta=1;  arr[11][8].peta=1; arr[11][9].peta=1;
arr[11][10].peta=1; arr[11][11].peta=1; arr[11][15].peta=1; arr[11][16].peta=1; arr[11][17].peta=1; arr[11][18].peta=1; arr[11][19].peta=1;
arr[11][20].peta=1; arr[11][21].peta=1; arr[11][22].peta=1; arr[11][23].peta=1; arr[11][33].peta=1; arr[11][34].peta=1; arr[12][3].peta=1;
arr[12][26].peta=1; arr[13][0].peta=1;  arr[13][1].peta=1;  arr[13][2].peta=1;  arr[13][3].peta=1;  arr[13][4].peta=1;  arr[13][23].peta=1; arr[13][24].peta=1;
arr[13][26].peta=1; arr[14][19].peta=1; arr[14][26].peta=1; arr[13][20].peta=1; arr[13][21].peta=1; arr[15][19].peta=1; arr[15][26].peta=1; arr[16][19].peta=1;
arr[16][26].peta=1; arr[16][28].peta=1; arr[16][29].peta=1; arr[16][30].peta=1; arr[17][8].peta=1;  arr[17][12].peta=1; arr[17][15].peta=1; arr[17][16].peta=1;
arr[17][17].peta=1; arr[17][28].peta=1; arr[17][29].peta=1; arr[17][30].peta=1; arr[18][8].peta=1;  arr[18][12].peta=1; arr[18][15].peta=1; arr[18][16].peta=1;
arr[18][17].peta=1; arr[18][28].peta=1; arr[18][29].peta=1; arr[18][30].peta=1; arr[19][8].peta=1;  arr[19][12].peta=1; arr[19][15].peta=1; arr[19][16].peta=1;
arr[19][17].peta=1; arr[19][22].peta=1; arr[19][23].peta=1; arr[19][24].peta=1; arr[19][25].peta=1; arr[19][26].peta=1; arr[19][28].peta=1; arr[19][30].peta=1;
arr[20][0].peta=1;  arr[20][1].peta=1;  arr[20][2].peta=1;  arr[20][3].peta=1;  arr[20][4].peta=1;  arr[20][8].peta=1;  arr[20][12].peta=1; arr[20][17].peta=1;
arr[20][22].peta=1; arr[20][23].peta=1; arr[20][24].peta=1; arr[20][25].peta=1; arr[20][26].peta=1; arr[20][28].peta=1; arr[20][29].peta=1; arr[20][30].peta=1;
arr[20][31].peta=1; arr[21][0].peta=1;  arr[21][8].peta=1;  arr[21][9].peta=1;  arr[21][10].peta=1; arr[21][12].peta=1; arr[16][18].peta=1;
arr[21][22].peta=1; arr[21][23].peta=1; arr[21][24].peta=1; arr[21][25].peta=1; arr[21][26].peta=1; arr[22][0].peta=1;  arr[22][1].peta=1;  arr[22][2].peta=1;
arr[22][3].peta=1;  arr[22][4].peta=1;  arr[22][5].peta=1;  arr[22][6].peta=1;  arr[22][7].peta=1;  arr[22][8].peta=1;  arr[22][9].peta=1;  arr[22][10].peta=1;
arr[22][11].peta=1; arr[22][12].peta=1; arr[22][13].peta=1; arr[22][14].peta=1; arr[22][15].peta=1; arr[22][16].peta=1; arr[22][17].peta=1; arr[22][18].peta=1;
arr[22][19].peta=1; arr[22][20].peta=1; arr[22][21].peta=1; arr[22][22].peta=1; arr[22][23].peta=1; arr[22][24].peta=1; arr[22][25].peta=1; arr[22][26].peta=1;
arr[22][27].peta=1; arr[22][28].peta=1; arr[22][29].peta=1; arr[22][30].peta=1; arr[22][31].peta=1; arr[22][32].peta=1; arr[22][33].peta=1; arr[22][34].peta=1;
//arr[21][4].peta=1;
//tangga
arr[4][2].tangga=1;   arr[5][2].tangga=1;   arr[6][2].tangga=1;   arr[7][2].tangga=1;   arr[8][2].tangga=1;   arr[9][2].tangga=1;   arr[10][2].tangga=1;
arr[12][2].tangga=1;  arr[8][8].tangga=1;   arr[9][8].tangga=1;   arr[10][8].tangga=1;  arr[5][25].tangga=1;  arr[6][25].tangga=1;  arr[7][25].tangga=1;
arr[8][25].tangga=1;  arr[9][25].tangga=1;  arr[10][25].tangga=1; arr[11][25].tangga=1; arr[12][25].tangga=1; arr[13][25].tangga=1; arr[15][3].tangga=1;
arr[16][3].tangga=1;  arr[17][3].tangga=1;  arr[18][3].tangga=1;  arr[19][3].tangga=1;  arr[17][9].tangga=1;  arr[18][9].tangga=1;  arr[19][9].tangga=1;
arr[20][9].tangga=1;  arr[17][11].tangga=1; arr[18][11].tangga=1; arr[19][11].tangga=1; arr[20][11].tangga=1; arr[21][11].tangga=1; arr[14][21].tangga=1;
arr[15][21].tangga=1; arr[16][21].tangga=1; arr[17][21].tangga=1; arr[18][21].tangga=1; arr[19][21].tangga=1; arr[20][21].tangga=1; arr[21][21].tangga=1;
arr[13][22].tangga=1; arr[14][22].tangga=1; arr[15][22].tangga=1; arr[16][22].tangga=1; arr[17][22].tangga=1; arr[18][22].tangga=1; arr[11][32].tangga=1;
arr[12][32].tangga=1; arr[13][32].tangga=1; arr[14][32].tangga=1; arr[15][32].tangga=1; arr[16][32].tangga=1; arr[17][32].tangga=1; arr[18][32].tangga=1;
arr[19][32].tangga=1; arr[20][32].tangga=1; arr[21][32].tangga=1; arr[20][5].tangga=1;  arr[21][5].tangga=1;  arr[11][2].tangga=1;

//tali
arr[3][10].tangga=2;  arr[3][11].tangga=2;  arr[3][12].tangga=2;  arr[3][13].tangga=2;  arr[3][14].tangga=2;  arr[3][26].tangga=2;  arr[3][27].tangga=2;
arr[3][28].tangga=2;  arr[3][29].tangga=2;  arr[9][14].tangga=2;  arr[9][15].tangga=2;  arr[9][16].tangga=2;  arr[9][17].tangga=2;  arr[9][18].tangga=2;
arr[9][19].tangga=2;  arr[9][20].tangga=2;  arr[9][21].tangga=2;  arr[9][22].tangga=2;  arr[9][23].tangga=2;  arr[10][12].tangga=2; arr[10][13].tangga=2;
arr[10][14].tangga=2; arr[10][26].tangga=2; arr[10][27].tangga=2; arr[10][28].tangga=2; arr[10][29].tangga=2; arr[10][30].tangga=2; arr[10][31].tangga=2;
arr[15][4].tangga=2;  arr[15][5].tangga=2;  arr[15][6].tangga=2;  arr[15][7].tangga=2;  arr[15][8].tangga=2;  arr[16][13].tangga=2; arr[16][14].tangga=2;

// emerald
arr[21][14].tangga=3; arr[13][19].tangga=3; arr[6][17].tangga=3; arr[7][6].tangga=3; arr[15][29].tangga=3;
}
void readdesain2(game arr[BRS][KLM]) //Modul untuk desain level
{
	// bata
arr[1][4].peta=1;   arr[1][5].peta=1;   arr[1][25].peta=1;  arr[1][26].peta=1;  arr[1][27].peta=1;  arr[1][28].peta=1;
arr[1][29].peta=1;  arr[2][5].peta=1;   arr[2][6].peta=1;   arr[2][25].peta=1;  arr[3][5].peta=1;   arr[3][6].peta=1;
arr[3][19].peta=1;  arr[3][20].peta=1;  arr[4][16].peta=1;  arr[4][17].peta=1;  arr[4][18].peta=1;  arr[4][19].peta=1;
arr[4][20].peta=1;  arr[5][16].peta=1;  arr[5][17].peta=1;  arr[5][18].peta=1;  arr[5][19].peta=1;  arr[5][20].peta=1;
arr[7][11].peta=1;  arr[7][22].peta=1;  arr[8][5].peta=1;   arr[8][6].peta=1;   arr[8][7].peta=1;   arr[8][8].peta=1;
arr[8][10].peta=1;  arr[8][11].peta=1;  arr[8][12].peta=1;  arr[8][13].peta=1;  arr[8][14].peta=1;  arr[8][15].peta=1;
arr[8][19].peta=1;  arr[8][20].peta=1;  arr[8][21].peta=1;  arr[8][22].peta=1;  arr[8][23].peta=1;  arr[8][24].peta=1;
arr[8][26].peta=1;  arr[8][27].peta=1;  arr[8][28].peta=1;  arr[8][29].peta=1;  arr[8][30].peta=1;  arr[8][32].peta=1;
arr[9][31].peta=1;  arr[9][32].peta=1;  arr[10][31].peta=1; arr[10][32].peta=1; arr[11][31].peta=1; arr[12][31].peta=1;
arr[13][1].peta=1;  arr[13][2].peta=1;  arr[14][1].peta=1;  arr[14][2].peta=1;  arr[14][5].peta=1;  arr[14][6].peta=1;
arr[14][7].peta=1;  arr[14][8].peta=1;  arr[14][9].peta=1;  arr[14][10].peta=1; arr[14][11].peta=1; arr[14][12].peta=1;
arr[14][13].peta=1; arr[14][14].peta=1; arr[14][15].peta=1; arr[14][18].peta=1; arr[14][19].peta=1; arr[14][21].peta=1;
arr[14][22].peta=1; arr[14][23].peta=1; arr[14][24].peta=1; arr[14][25].peta=1; arr[14][26].peta=1; arr[14][27].peta=1;
arr[14][28].peta=1; arr[14][29].peta=1; arr[14][30].peta=1; arr[15][1].peta=1;  arr[15][2].peta=1;  arr[15][11].peta=1;
arr[15][18].peta=1; arr[15][19].peta=1; arr[15][24].peta=1; arr[16][1].peta=1;  arr[16][2].peta=1;  arr[16][3].peta=1;
arr[16][4].peta=1;  arr[16][11].peta=1; arr[16][24].peta=1; arr[17][1].peta=1;  arr[17][2].peta=1;  arr[17][3].peta=1;
arr[17][4].peta=1;  arr[17][11].peta=1; arr[17][24].peta=1; arr[18][1].peta=1;  arr[18][2].peta=1;  arr[18][3].peta=1;
arr[18][4].peta=1;  arr[18][11].peta=1; arr[18][24].peta=1; arr[18][32].peta=1; arr[19][5].peta=1;  arr[19][6].peta=1;
arr[19][7].peta=1;  arr[19][8].peta=1;  arr[19][9].peta=1;  arr[19][10].peta=1; arr[19][11].peta=1; arr[19][12].peta=1;
arr[19][13].peta=1; arr[19][14].peta=1; arr[19][15].peta=1; arr[19][21].peta=1; arr[19][22].peta=1; arr[19][23].peta=1;
arr[19][24].peta=1; arr[19][25].peta=1; arr[19][26].peta=1; arr[19][27].peta=1; arr[19][28].peta=1; arr[19][29].peta=1;
arr[19][30].peta=1; arr[5][33].peta=1;  arr[6][33].peta=1;  arr[7][33].peta=1;  arr[8][33].peta=1;  arr[9][33].peta=1;
arr[10][33].peta=1; arr[11][33].peta=1; arr[12][33].peta=1; arr[13][33].peta=1; arr[14][33].peta=1; arr[15][33].peta=1;
arr[16][33].peta=1; arr[17][33].peta=1; arr[18][33].peta=1; arr[19][33].peta=1; arr[20][33].peta=1; arr[21][33].peta=1;
arr[8][31].peta=1;  arr[11][32].peta=1; arr[12][32].peta=1;

// tangga
arr[3][7].tangga=1;   arr[4][7].tangga=1;   arr[5][7].tangga=1;   arr[6][7].tangga=1;   arr[7][7].tangga=1;
arr[8][9].tangga=1;   arr[9][9].tangga=1;   arr[10][9].tangga=1;  arr[11][9].tangga=1;  arr[12][9].tangga=1;
arr[13][9].tangga=1;  arr[8][25].tangga=1;  arr[9][25].tangga=1;  arr[10][25].tangga=1; arr[11][25].tangga=1;
arr[12][25].tangga=1; arr[13][25].tangga=1; arr[14][16].tangga=1; arr[15][16].tangga=1; arr[16][16].tangga=1;
arr[17][16].tangga=1; arr[18][16].tangga=1; arr[19][16].tangga=1; arr[20][16].tangga=1; arr[21][16].tangga=1;
arr[14][20].tangga=1; arr[15][20].tangga=1; arr[16][20].tangga=1; arr[17][20].tangga=1; arr[18][20].tangga=1;
arr[19][20].tangga=1; arr[20][20].tangga=1; arr[21][20].tangga=1;

//tali
arr[3][8].tangga=2;   arr[3][9].tangga=2;   arr[3][10].tangga=2;  arr[3][11].tangga=2;  arr[3][12].tangga=2;
arr[3][13].tangga=2;  arr[3][14].tangga=2;  arr[3][15].tangga=2;  arr[10][10].tangga=2; arr[10][11].tangga=2;
arr[10][12].tangga=2; arr[10][13].tangga=2; arr[10][14].tangga=2; arr[10][15].tangga=2; arr[10][16].tangga=2;
arr[10][17].tangga=2; arr[10][18].tangga=2; arr[10][19].tangga=2; arr[10][20].tangga=2; arr[10][21].tangga=2;
arr[10][22].tangga=2; arr[10][23].tangga=2; arr[10][24].tangga=2; arr[13][16].tangga=2; arr[13][17].tangga=2;

// diamond
arr[3][17].tangga=3;  arr[7][5].tangga=3;  arr[7][14].tangga=3; arr[7][29].tangga=3;
arr[13][28].tangga=3; arr[18][6].tangga=3; arr[18][9].tangga=3; arr[18][22].tangga=3;

}
void buatpeta(game arr[BRS][KLM], int* BRS_, int* KLM_,int lvl) //untuk membuat array
{
    for (int i=0 ; i<BRS ; i++){
        for (int j=0 ; j<KLM ; j++){
            arr[i][j].pemain = 0;
            arr[i][j].tangga = 0;
            if (i==BRS-1||i==0||j==0||j==KLM-1){
                arr[i][j].peta = 1;
            }else{
                arr[i][j].peta = 0;
            }
        }
    }
    //peta
    if (lvl==0)
    {
        readdesain1(arr);//lvl 1
    }
    if (lvl==1)
    {
        readdesain2(arr);//lvl 2
    }


    *BRS_ = BRS-2;
    *KLM_ = KLM/2;
    inspemain(arr,*BRS_, *KLM_);
}
void tampilall(game arr[BRS][KLM])
{
    for (int i = 0; i < BRS; i++){
        for (int j = 0; j < KLM; j++){
            if (arr[i][j].peta==1){
                readpeta(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1));
            }
            if (arr[i][j].tangga==1){
                readtangga(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1));
            }
            if (arr[i][j].tangga==2){
                readtali(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1));
            }
            if (arr[i][j].tangga==3){
                readdiamond(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1));
            }
            if (arr[i][j].pemain==1){
                readpemain(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1),1);
            }
            /*if (arr[i][j].tangga==4){
                readpintu(MATRIX* j,MATRIX* i,MATRIX* (j+1),MATRIX* (i+1));
            }*/
        }
    }

}
void bawah(game arr[BRS][KLM], int BRS_, int KLM_,int a)
{
    for (int i = 0; i <=2; i++){
            if (arr[BRS_+i][KLM_].peta==1){
                readpeta(MATRIX* KLM_,MATRIX* (BRS_+i),MATRIX* (KLM_+1),MATRIX* (BRS_+i+1));
            }
            if (arr[BRS_+i][KLM_].tangga==1){
                readtangga(MATRIX* KLM_,MATRIX* (BRS_+i),MATRIX* (KLM_+1),MATRIX* (BRS_+i+1));
            }
            if (arr[BRS_+i][KLM_].tangga==2){
                readtali(MATRIX* KLM_,MATRIX* (BRS_+i),MATRIX* (KLM_+1),MATRIX* (BRS_+i+1));
            }
            if (arr[BRS_+i][KLM_].tangga==3){
                readdiamond(MATRIX* KLM_,MATRIX* (BRS_+i),MATRIX* (KLM_+1),MATRIX* (BRS_+i+1));
            }
            if (arr[BRS_+i][KLM_].pemain==1){
                readpemain(MATRIX* KLM_,MATRIX* (BRS_+i),MATRIX* (KLM_+1),MATRIX* (BRS_+i+1),a);
            }
            if (arr[BRS_+i][KLM_].tangga==4){
                readpintu(MATRIX* KLM_,MATRIX* (BRS_+i),MATRIX* (KLM_+1),MATRIX* (BRS_+i+1));
            }
    }

}

#endif // 181511045_H
