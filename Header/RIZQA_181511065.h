//Rizqa Fauziyyah Nabila  (181511065)
#ifndef Rizqa181511065_H
#define Rizqa181511065_H

void diamond(game arr[BRS][KLM], int BRS_, int KLM_, int *score)
{
    if(arr[BRS_][KLM_].tangga == 3){
        *score=*score+1;
        arr[BRS_][KLM_].tangga = 0;
    }
}
void readdesain3(game arr[BRS][KLM]) //Modul untuk desain level
{
//balok
arr[0][0].peta=1; arr[0][1].peta=1; arr[0][2].peta=1; arr[0][3].peta=1; arr[0][4].peta=1;
arr[0][5].peta=1; arr[0][6].peta=1; arr[0][7].peta=1; arr[0][8].peta=1; arr[0][9].peta=1;
arr[0][10].peta=1; arr[0][11].peta=1; arr[0][12].peta=1; arr[0][13].peta=1; arr[0][14].peta=1;
arr[0][15].peta=1; arr[0][16].peta=1; arr[0][17].peta=1; arr[0][18].peta=1; arr[0][19].peta=1;
arr[0][20].peta=1; arr[0][21].peta=1; arr[0][22].peta=1; arr[0][23].peta=1; arr[0][24].peta=1;
arr[0][25].peta=1; arr[0][26].peta=1; arr[0][27].peta=1; arr[0][28].peta=1; arr[0][29].peta=1;
arr[0][30].peta=1; arr[0][31].peta=1; arr[0][32].peta=1; arr[0][33].peta=1; arr[0][34].peta=1;

arr[22][0].peta=1; arr[22][1].peta=1; arr[22][2].peta=1; arr[22][3].peta=1; arr[22][4].peta=1;
arr[22][5].peta=1; arr[22][6].peta=1; arr[22][7].peta=1; arr[22][8].peta=1; arr[22][9].peta=1;
arr[22][10].peta=1; arr[22][11].peta=1; arr[22][12].peta=1; arr[22][13].peta=1; arr[22][14].peta=1;
arr[22][15].peta=1; arr[22][16].peta=1; arr[22][17].peta=1; arr[22][18].peta=1; arr[22][19].peta=1;
arr[22][20].peta=1; arr[22][21].peta=1; arr[22][22].peta=1; arr[22][23].peta=1; arr[22][24].peta=1;
arr[22][25].peta=1; arr[22][26].peta=1; arr[22][27].peta=1; arr[22][28].peta=1; arr[22][29].peta=1;
arr[22][30].peta=1; arr[22][31].peta=1; arr[22][32].peta=1; arr[22][33].peta=1; arr[22][34].peta=1;

arr[3][2].peta=1; arr[3][3].peta=1; arr[4][2].peta=1; arr[4][3].peta=1; arr[6][6].peta=1;
arr[7][5].peta=1; arr[8][4].peta=1; arr[9][3].peta=1; arr[9][2].peta=1; arr[10][1].peta=1;
arr[11][1].peta=1; arr[12][1].peta=1; arr[13][1].peta=1; arr[14][1].peta=1; arr[15][1].peta=1;
arr[15][2].peta=1; arr[15][3].peta=1; arr[15][4].peta=1; arr[15][5].peta=1; arr[15][6].peta=1;
arr[15][7].peta=1; arr[15][8].peta=1; arr[15][9].peta=1; arr[15][10].peta=1; arr[15][11].peta=1;
arr[15][12].peta=1; arr[15][13].peta=1; arr[22][0].peta=1; arr[22][0].peta=1; arr[14][7].peta=1;
arr[14][8].peta=1; arr[14][9].peta=1; arr[13][8].peta=1; arr[21][3].peta=1; arr[21][4].peta=1;
arr[21][5].peta=1; arr[20][5].peta=1; arr[20][6].peta=1; arr[19][5].peta=1; arr[19][6].peta=1;
arr[18][5].peta=1; arr[18][6].peta=1; arr[21][10].peta=1; arr[21][11].peta=1; arr[21][12].peta=1;
arr[21][13].peta=1; arr[21][14].peta=1; arr[21][15].peta=1; arr[21][16].peta=1; arr[20][13].peta=1;
arr[20][14].peta=1; arr[19][13].peta=1; arr[19][14].peta=1; arr[1][13].peta=1; arr[1][14].peta=1;
arr[2][13].peta=1; arr[2][14].peta=1; arr[2][15].peta=1; arr[3][15].peta=1; arr[1][26].peta=1;
arr[1][27].peta=1; arr[2][26].peta=1; arr[2][27].peta=1; arr[3][25].peta=1; arr[2][26].peta=1;
arr[3][27].peta=1; arr[5][20].peta=1; arr[6][20].peta=1; arr[7][20].peta=1;arr[10][15].peta=1;
arr[10][16].peta=1; arr[11][15].peta=1; arr[11][16].peta=1; arr[12][18].peta=1; arr[13][19].peta=1;
arr[13][20].peta=1; arr[13][21].peta=1; arr[13][22].peta=1; arr[12][23].peta=1; arr[11][24].peta=1;
arr[10][25].peta=1; arr[9][26].peta=1; arr[14][29].peta=1; arr[14][30].peta=1; arr[21][24].peta=1;
arr[21][25].peta=1; arr[21][26].peta=1; arr[20][25].peta=1; arr[20][26].peta=1; arr[19][26].peta=1;
arr[19][27].peta=1; arr[19][28].peta=1; arr[20][28].peta=1; arr[21][28].peta=1; arr[22][28].peta=1;
//arr[20][29].peta=1; arr[20][30].peta=1; arr[20][31].peta=1; arr[20][32].peta=1; arr[20][33].peta=1;
//arr[21][29].peta=1; arr[21][30].peta=1; arr[21][31].peta=1; arr[21][32].peta=1; arr[21[33].peta=1;
arr[22][29].peta=1; arr[22][30].peta=1; arr[22][31].peta=1; arr[22][32].peta=1; arr[22][33].peta=1;

// tangga
arr[1][0].tangga=1; arr[2][0].tangga=1; arr[3][0].tangga=1; arr[4][0].tangga=1; arr[5][0].tangga=1;
arr[6][0].tangga=1; arr[7][0].tangga=1; arr[8][0].tangga=1; arr[9][0].tangga=1; arr[10][0].tangga=1;
arr[11][0].tangga=1; arr[12][0].tangga=1; arr[13][0].tangga=1; arr[14][0].tangga=1; arr[15][0].tangga=1;
arr[16][0].tangga=1; arr[17][0].tangga=1; arr[18][0].tangga=1; arr[19][0].tangga=1; arr[20][0].tangga=1;
arr[21][0].tangga=1; arr[21][2].tangga=1; arr[20][31].tangga=1; arr[14][6].tangga=1; arr[21][9].tangga=1;
arr[6][7].tangga=1; arr[7][7].tangga=1; arr[8][7].tangga=1; arr[9][7].tangga=1; arr[10][7].tangga=1;
arr[11][7].tangga=1; arr[12][7].tangga=1; arr[13][7].tangga=1; arr[6][9].tangga=1; arr[7][9].tangga=1;
arr[8][9].tangga=1; arr[9][9].tangga=1; arr[10][9].tangga=1; arr[11][9].tangga=1; arr[12][9].tangga=1;
arr[13][9].tangga=1; arr[20][12].tangga=1; arr[19][12].tangga=1; arr[15][14].tangga=1; arr[16][14].tangga=1;
arr[17][14].tangga=1; arr[18][14].tangga=1; arr[19][15].tangga=1; arr[20][15].tangga=1; arr[21][17].tangga=1;
arr[18][14].tangga=1; arr[10][17].tangga=1; arr[11][18].tangga=1; arr[12][19].tangga=1; arr[12][22].tangga=1;
arr[11][23].tangga=1; arr[10][24].tangga=1; arr[9][25].tangga=1; arr[21][23].tangga=1; arr[20][24].tangga=1;
arr[19][25].tangga=1; arr[14][28].tangga=1; arr[15][28].tangga=1; arr[16][28].tangga=1; arr[17][28].tangga=1;
arr[18][28].tangga=1; arr[6][30].tangga=1; arr[7][30].tangga=1; arr[8][30].tangga=1; arr[9][30].tangga=1;
arr[10][30].tangga=1; arr[11][30].tangga=1; arr[12][30].tangga=1; arr[13][30].tangga=1;

// diamond
arr[20][3].tangga=3; arr[21][7].tangga=3; arr[21][20].tangga=3; arr[19][31].tangga=3; arr[14][11].tangga=3;
arr[12][21].tangga=3; arr[8][2].tangga=3; arr[9][15].tangga=3;

//tali
arr[9][31].tangga=2; arr[9][32].tangga=2; arr[9][33].tangga=2; arr[6][21].tangga=2; arr[6][22].tangga=2;
arr[6][23].tangga=2; arr[6][24].tangga=2; arr[6][25].tangga=2; arr[6][26].tangga=2; arr[6][27].tangga=2;
arr[6][28].tangga=2; arr[6][29].tangga=2; arr[3][16].tangga=2; arr[3][17].tangga=2; arr[3][18].tangga=2;
arr[3][24].tangga=2;

}
void kiri(game arr[BRS][KLM], int BRS_, int KLM_,int a)
{
    for (int i = 0; i <=3; i++){
            if (arr[BRS_][KLM_-i].peta==1){
                readpeta(MATRIX* (KLM_-i),MATRIX* BRS_,MATRIX* (KLM_-i+1),MATRIX* (BRS_+1));
            }
            if (arr[BRS_][KLM_-i].tangga==1){
                readtangga(MATRIX* (KLM_-i),MATRIX* BRS_,MATRIX* (KLM_-i+1),MATRIX* (BRS_+1));
            }
            if (arr[BRS_][KLM_-i].tangga==2){
                readtali(MATRIX* (KLM_-i),MATRIX* BRS_,MATRIX* (KLM_-i+1),MATRIX* (BRS_+1));
            }
            if (arr[BRS_][KLM_-i].tangga==3){
                readdiamond(MATRIX* (KLM_-i),MATRIX* BRS_,MATRIX* (KLM_-i+1),MATRIX* (BRS_+1));
            }
            if (arr[BRS_][KLM_-i].pemain==1){
                readpemain(MATRIX* (KLM_-i),MATRIX* BRS_,MATRIX* (KLM_-i+1),MATRIX* (BRS_+1),a);
            }
            if (arr[BRS_][KLM_-i].pemain==4){
                readpintu(MATRIX* (KLM_-i),MATRIX* BRS_,MATRIX* (KLM_-i+1),MATRIX* (BRS_+1));
            }
    }
}
void tampilscore(int score)
{
    char dtscore[20];
    setviewport(getmaxx()-130,353,getmaxx()-70,400,1);
    clearviewport(); 
    setviewport(0,0,1360,720,1);
    sprintf(dtscore,"%d ", score);
    outtextxy(getmaxx()-120,360,dtscore);
}
void tampillvl(int lvl)
{
    char dtscore[10];
    sprintf(dtscore,"%d ", lvl+1);
    outtextxy(getmaxx()-120,273,dtscore);
}
//kondisi penggunaan animasi
// prosedur untuk mengatur pergerakan pemain
void animasi(int *a,int *b,int *c)
{
    *a=*a+1;
    if (*a>6){
        *a=5;
    }
    *b=*b+1;
    if (*b>2){
        *b=1;
    }
    *c=*c+1;
    if (*c>4){
        *c=3;
    }
}
void animasi2(game arr[BRS][KLM],int baris,int kolom,int *a,int *b,int *c){
    if (arr[baris][kolom].tangga==2)
    {
        *a=7;
        *b=7;
        *c=7;
    }
    if (arr[baris][kolom].tangga==1)
    {
        *a=5;
        *b=5;
    }
    if (arr[baris+1][kolom].peta==1)
    {
        *c=8;
    }

}
void leaderboard(int x, int y){
    readimagefile("gambar/Highscore.gif",0,0,getmaxx(),getmaxy());
    while(1){
        getmouseclick(WM_LBUTTONDOWN, x, y);
        if((x>26)&&(x<127)&&(y>600)&&(y<getmaxy()-28)){
            break;
        }
    }
}
#endif // 181511065_H
