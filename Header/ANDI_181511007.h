//Andi Fauzy Dewantara  (181511007)
#ifndef Andi181511007_H
#define Andi181511007_H
#define MATRIX 30
#define BRS 690/MATRIX
#define KLM 1050/MATRIX
void delpemain(game arr[BRS][KLM],int brs,int klm)
{
    arr[brs][klm].pemain=0;
}
void delbalok (game arr[BRS][KLM],int baris,int kolom,int i)
{
    arr[baris+1][kolom+i].peta=0;
}
void delbalokallpage(game arr[BRS][KLM],int baris,int kolom,int i){
      if (i==1){
            setviewport((kolom+1)*MATRIX, (baris+1)*MATRIX,((kolom+2)*MATRIX)+1, ((baris+2)*MATRIX)+1,1);
            clearviewport();
            setviewport(0,0,1050,690,1);
      }
      if (i==2){
            setviewport((kolom)*MATRIX, ((baris+1)*MATRIX),((kolom-1)*MATRIX)+1, ((baris+2)*MATRIX)+1,1);
            clearviewport();
            setviewport(0,0,1050,690,1);
      }
}
void readdesain4(game arr[BRS][KLM]) //Modul untuk desain level
{
    // TALI
arr[3][13].tangga = 2;arr[3][14].tangga = 2;arr[3][15].tangga = 2;arr[3][16].tangga = 2;arr[3][17].tangga = 2;arr[8][18].tangga = 2;arr[8][19].tangga = 2;
arr[8][20].tangga = 2;arr[8][21].tangga = 2;arr[8][22].tangga = 2;arr[8][23].tangga = 2;arr[8][24].tangga = 2;arr[10][18].tangga = 2;arr[10][19].tangga = 2;
arr[3][28].tangga = 2;arr[8][28].tangga = 2;arr[8][29].tangga = 2;arr[8][30].tangga = 2;arr[13][28].tangga = 2;arr[13][29].tangga = 2;arr[13][30].tangga = 2;
arr[14][6].tangga = 2;arr[14][7].tangga = 2;arr[14][8].tangga = 2;arr[14][9].tangga = 2;

// TANGGA
arr[4][5].tangga = 1;arr[5][5].tangga = 1;arr[6][5].tangga = 1;arr[7][5].tangga = 1;arr[8][5].tangga = 1;arr[9][5].tangga = 1;arr[10][5].tangga = 1;
arr[14][5].tangga = 1;arr[15][5].tangga = 1;arr[16][5].tangga = 1;arr[17][5].tangga = 1;arr[7][11].tangga = 1;arr[8][11].tangga = 1;arr[9][11].tangga = 1;
arr[10][11].tangga = 1;arr[16][11].tangga = 1;arr[17][11].tangga = 1;arr[18][11].tangga = 1;arr[19][11].tangga = 1;arr[16][14].tangga = 1;arr[17][14].tangga = 1;
arr[18][14].tangga = 1;arr[19][14].tangga = 1;arr[20][14].tangga = 1;arr[10][17].tangga = 1;arr[11][17].tangga = 1;arr[12][17].tangga = 1;arr[13][17].tangga = 1;
arr[14][17].tangga = 1;arr[15][17].tangga = 1;arr[17][18].tangga = 1;arr[18][18].tangga = 1;arr[19][18].tangga = 1;arr[20][18].tangga = 1;arr[16][19].tangga = 1;
arr[17][19].tangga = 1;arr[18][19].tangga = 1;arr[3][24].tangga = 1;arr[4][24].tangga = 1;arr[18][25].tangga = 1;arr[19][25].tangga = 1;arr[20][25].tangga = 1;
arr[12][27].tangga = 1;arr[13][27].tangga = 1;arr[14][27].tangga = 1;arr[15][27].tangga = 1;arr[16][27].tangga = 1;arr[17][27].tangga = 1;arr[18][27].tangga = 1;
arr[6][31].tangga = 1;arr[7][31].tangga = 1;arr[8][31].tangga = 1;arr[9][31].tangga = 1;arr[14][31].tangga = 1;arr[15][31].tangga = 1;arr[16][31].tangga = 1;
arr[17][31].tangga = 1;arr[18][31].tangga = 1;arr[19][31].tangga = 1;arr[20][31].tangga = 1;arr[9][33].tangga = 1;arr[10][33].tangga = 1;arr[11][33].tangga = 1;
arr[12][33].tangga = 1;arr[13][33].tangga = 1;arr[14][33].tangga = 1;

// JALAN
arr[21][1].peta = 1;arr[21][2].peta = 1;arr[21][3].peta = 1;arr[21][4].peta = 1;arr[21][5].peta = 1;arr[21][6].peta = 1;arr[21][7].peta = 1;arr[21][8].peta = 1;
arr[21][9].peta = 1;arr[21][10].peta = 1;arr[21][11].peta = 1;arr[21][12].peta = 1;arr[21][13].peta = 1;arr[21][14].peta = 1;arr[21][15].peta = 1;
arr[21][16].peta = 1;arr[21][17].peta = 1;arr[21][18].peta = 1;arr[21][19].peta = 1;arr[21][20].peta = 1;arr[21][21].peta = 1;arr[21][22].peta = 1;arr[21][23].peta = 1;
arr[21][24].peta = 1;arr[21][25].peta = 1;arr[21][26].peta = 1;arr[21][27].peta = 1;arr[21][28].peta = 1;arr[21][29].peta = 1;arr[21][30].peta = 1;
arr[21][31].peta = 1;arr[21][32].peta = 1;arr[21][33].peta = 1;arr[21][34].peta = 1;

arr[22][1].peta = 1;arr[22][2].peta = 1;arr[22][3].peta = 1;arr[22][4].peta = 1;arr[22][5].peta = 1;arr[22][6].peta = 1;arr[22][7].peta = 1;arr[22][8].peta = 1;
arr[22][9].peta = 1;arr[22][10].peta = 1;arr[22][11].peta = 1;arr[22][12].peta = 1;arr[22][13].peta = 1;arr[22][14].peta = 1;arr[22][15].peta = 1;
arr[22][16].peta = 1;arr[22][17].peta = 1;arr[22][18].peta = 1;arr[22][19].peta = 1;arr[22][20].peta = 1;arr[22][21].peta = 1;arr[22][22].peta = 1;
arr[22][23].peta = 1;arr[22][24].peta = 1;arr[22][25].peta = 1;arr[22][26].peta = 1;arr[22][27].peta = 1;arr[22][28].peta = 1;arr[22][29].peta = 1;
arr[22][30].peta = 1;arr[22][31].peta = 1;arr[22][32].peta = 1;arr[22][33].peta = 1;arr[22][34].peta = 1;

arr[21][1].peta = 1;arr[21][2].peta = 1;arr[21][6].peta = 1;arr[21][7].peta = 1;arr[21][8].peta = 1;arr[21][9].peta = 1;arr[21][10].peta = 1;arr[21][11].peta = 1;
arr[21][12].peta = 1;arr[21][15].peta = 1;arr[21][19].peta = 1;arr[21][20].peta = 1;arr[21][21].peta = 1;arr[21][22].peta = 1;arr[21][23].peta = 1;
arr[21][24].peta = 1;arr[21][26].peta = 1;arr[21][27].peta = 1;arr[21][28].peta = 1;arr[21][29].peta = 1;arr[21][30].peta = 1;arr[21][32].peta = 1;
arr[21][33].peta = 1;arr[21][34].peta = 1;

arr[20][1].peta = 1;arr[20][2].peta = 1;arr[20][6].peta = 1;arr[20][7].peta = 1;arr[20][8].peta = 1;arr[20][9].peta = 1;arr[20][10].peta = 1;
arr[20][11].peta = 1;arr[20][12].peta = 1;arr[20][15].peta = 1;arr[20][19].peta = 1;arr[20][20].peta = 1;arr[20][21].peta = 1;arr[20][22].peta = 1;arr[20][23].peta = 1;
arr[20][24].peta = 1;arr[20][26].peta = 1;arr[20][27].peta = 1;arr[20][28].peta = 1;arr[20][29].peta = 1;arr[20][30].peta = 1;arr[20][32].peta = 1;
arr[20][33].peta = 1;arr[20][34].peta = 1;

arr[19][1].peta = 1;arr[19][2].peta = 1;arr[19][6].peta = 1;arr[19][10].peta = 1;arr[19][15].peta = 1;arr[19][19].peta = 1;arr[19][20].peta = 1;arr[19][21].peta = 1;
arr[19][22].peta = 1;arr[19][23].peta = 1;arr[19][24].peta = 1;arr[19][26].peta = 1;arr[19][27].peta = 1;arr[19][28].peta = 1;arr[19][29].peta = 1;
arr[19][30].peta = 1;arr[19][32].peta = 1;arr[19][33].peta = 1;arr[19][34].peta = 1;

arr[18][1].peta = 1;arr[18][2].peta = 1;arr[18][3].peta = 1;arr[18][4].peta = 1;arr[18][5].peta = 1;arr[18][6].peta = 1;arr[18][10].peta = 1;arr[18][15].peta = 1;
arr[18][24].peta = 1;arr[18][30].peta = 1;arr[18][34].peta = 1;arr[17][10].peta = 1;arr[17][15].peta = 1;arr[17][24].peta = 1;arr[17][30].peta = 1;arr[17][34].peta = 1;

arr[16][10].peta = 1;arr[16][15].peta = 1;arr[16][16].peta = 1;arr[16][17].peta = 1;arr[16][18].peta = 1;arr[16][24].peta = 1;arr[16][30].peta = 1;arr[16][34].peta = 1;

arr[15][1].peta = 1;arr[15][24].peta = 1;arr[15][30].peta = 1;arr[15][32].peta = 1;arr[15][33].peta = 1;arr[15][34].peta = 1;

arr[14][1].peta = 1;arr[14][24].peta = 1;arr[14][30].peta = 1;arr[14][34].peta = 1;

arr[13][1].peta = 1;arr[13][24].peta = 1;arr[13][25].peta = 1;arr[13][26].peta = 1;arr[13][34].peta = 1;arr[12][1].peta = 1;arr[12][24].peta = 1;arr[12][34].peta = 1;

arr[11][1].peta = 1;arr[11][2].peta = 1;arr[11][3].peta = 1;arr[11][4].peta = 1;arr[11][5].peta = 1;arr[11][6].peta = 1;
arr[11][11].peta = 1;arr[11][12].peta = 1;arr[11][13].peta = 1;arr[11][14].peta = 1;arr[11][15].peta = 1;arr[11][16].peta = 1;
arr[11][20].peta = 1;arr[11][21].peta = 1;arr[11][22].peta = 1;arr[11][23].peta = 1;arr[11][24].peta = 1;arr[11][34].peta = 1;

arr[10][1].peta = 1;arr[10][6].peta = 1;arr[10][31].peta = 1;arr[10][32].peta = 1;arr[10][34].peta = 1;arr[9][1].peta = 1;
arr[9][6].peta = 1;arr[9][25].peta = 1;arr[9][26].peta = 1;arr[9][27].peta = 1;arr[9][34].peta = 1;arr[8][1].peta = 1;
arr[8][6].peta = 1;arr[8][34].peta = 1;

arr[7][1].peta = 1;arr[7][6].peta = 1;arr[7][7].peta = 1;arr[7][8].peta = 1;arr[7][9].peta = 1;arr[7][10].peta = 1;
arr[7][12].peta = 1;arr[7][13].peta = 1;arr[7][14].peta = 1;arr[7][15].peta = 1;arr[7][16].peta = 1;arr[7][24].peta = 1;
arr[7][32].peta = 1;arr[7][33].peta = 1;arr[7][34].peta = 1;

arr[6][1].peta = 1;arr[6][24].peta = 1;arr[6][34].peta = 1;

arr[5][1].peta = 1;arr[5][18].peta = 1;arr[5][19].peta = 1;arr[5][20].peta = 1;
arr[5][21].peta = 1;arr[5][22].peta = 1;arr[5][23].peta = 1;arr[5][24].peta = 1;arr[5][34].peta = 1;

arr[4][1].peta = 1;arr[4][2].peta = 1;arr[4][3].peta = 1;arr[4][4].peta = 1;arr[4][6].peta = 1;arr[4][7].peta = 1;
arr[4][8].peta = 1;arr[4][9].peta = 1;arr[4][10].peta = 1;arr[4][11].peta = 1;arr[4][12].peta = 1;arr[4][25].peta = 1;
arr[4][26].peta = 1;arr[4][27].peta = 1;arr[4][29].peta = 1;arr[4][30].peta = 1;arr[4][31].peta = 1;arr[4][34].peta = 1;

arr[3][1].peta = 1;arr[3][34].peta = 1;

arr[2][1].peta = 1;arr[2][34].peta = 1;

arr[1][1].peta = 1;arr[1][2].peta = 1;arr[1][3].peta = 1;arr[1][4].peta = 1;arr[1][5].peta = 1;arr[1][6].peta = 1;
arr[1][7].peta = 1;arr[1][8].peta = 1;arr[1][9].peta = 1;arr[1][10].peta = 1;arr[1][11].peta = 1;arr[1][12].peta = 1;
arr[1][13].peta = 1;arr[1][14].peta = 1;arr[1][15].peta = 1;arr[1][16].peta = 1;arr[1][17].peta = 1;arr[1][18].peta = 1;
arr[1][19].peta = 1;arr[1][20].peta = 1;arr[1][21].peta = 1;arr[1][22].peta = 1;arr[1][23].peta = 1;arr[1][24].peta = 1;
arr[1][25].peta = 1;arr[1][26].peta = 1;arr[1][27].peta = 1;arr[1][28].peta = 1;arr[1][29].peta = 1;arr[1][30].peta = 1;
arr[1][31].peta = 1;arr[1][32].peta = 1;arr[1][33].peta = 1;arr[1][34].peta = 1;
}
void inspemain(game arr[BRS][KLM],int baris,int kolom)
{
    arr[baris][kolom].pemain=1;
}
void atas(game arr[BRS][KLM], int BRS_, int KLM_,int a)
{
    for (int i = 0; i <=3; i++){
            if (arr[BRS_-i][KLM_].peta==1){
                readpeta(MATRIX* KLM_,MATRIX* (BRS_-i),MATRIX* (KLM_+1),MATRIX* (BRS_-i+1));
            }
            if (arr[BRS_-i][KLM_].tangga==1){
                readtangga(MATRIX* KLM_,MATRIX* (BRS_-i),MATRIX* (KLM_+1),MATRIX* (BRS_-i+1));
            }
            if (arr[BRS_-i][KLM_].tangga==2){
                readtali(MATRIX* KLM_,MATRIX* (BRS_-i),MATRIX* (KLM_+1),MATRIX* (BRS_-i+1));
            }
            if (arr[BRS_-i][KLM_].tangga==3){
                readdiamond(MATRIX* KLM_,MATRIX* (BRS_-i),MATRIX* (KLM_+1),MATRIX* (BRS_-i+1));
            }
            if (arr[BRS_-i][KLM_].pemain==1){
                readpemain(MATRIX* KLM_,MATRIX* (BRS_-i),MATRIX* (KLM_+1),MATRIX* (BRS_-i+1),a);
            }
            if (arr[BRS_-i][KLM_].tangga==4){
                readpintu(MATRIX* KLM_,MATRIX* (BRS_-i),MATRIX* (KLM_+1),MATRIX* (BRS_-i+1));
            }
    }
}
#endif // 181511007_H
