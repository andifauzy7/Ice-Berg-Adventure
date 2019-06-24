//Kresna Bayu Sanyoto (181511051)
#ifndef Kresna181511051_H
#define Kresna1815110051_H
#define MATRIX 30
#define BRS 690/MATRIX
#define KLM 1050/MATRIX
//untung memeriksa apakah di bawah ada objek atau tidak
bool diam(game arr[BRS][KLM], int baris, int kolom)
{
    if (arr[baris+1][kolom].peta==1&&arr[baris+1][kolom].benda==0){
        return true;
    }
        return false;
}
bool atastangga(game arr[BRS][KLM], int baris, int kolom){
    if (arr[baris-1][kolom].peta==0&&arr[baris][kolom].benda==1){
        return true;
    }
        return false;
}
bool jalan(game arr[BRS][KLM], int baris, int kolom,int brsbef, int klmbef)
{
    if ((arr[baris][kolom].pemain == arr[brsbef][klmbef].pemain)){
        return false;
    }
        return true;
}
//memeriksa apakah di samping ada tembok atau tidak
bool kanankiri(game arr[BRS][KLM], int baris, int kolom, kordinat temp, int arah)
{
    if((arr[baris][kolom+arah].peta == 1)&&(temp.x==((kolom*30)+(arah*6)))){
        return true;
    } else{
        return false;
    }
}

//untuk memeriksa apakah di bawah ada objek atau tudak
bool jatuh(game arr[BRS][KLM], int baris, int kolom)
{
    if (arr[baris+1][kolom].peta==0&&(arr[baris+1][kolom].benda==0||arr[baris+1][kolom].benda==2||arr[baris+1][kolom].benda==3)&&arr[baris][kolom].benda==0){
        return true;
    }else{
        return false;
        }
}
bool jatuh2(game arr[BRS][KLM], int baris, int kolom,kordinat temp)
{
    if ((arr[baris+1][kolom].peta!=0)&&(arr[baris][kolom].peta!=0)&&(arr[baris-1][kolom].peta==1)&&(arr[baris][kolom].peta==1)&&(temp.y>=((baris-1)*30))){
        return true;
    }else{
        return false;
        }
}
//untuk memeriksa apakah sedang di benda atau tidak saat naik
bool naiktangga(game arr[BRS][KLM], int baris, int kolom, kordinat temp)
{
    if ((arr[baris][kolom].benda==1)&&(arr[baris-1][kolom].benda==1)){
        return true;
    }else {
        return false;
    }
}
//untuk memeriksa apakah sedang di benda atau tidak saat turun
bool turuntangga(game arr[BRS][KLM], int baris, int kolom)
{
    if (((arr[baris][kolom].benda==1)&&(arr[baris+1][kolom].benda==1))){
        return true;
    }else{
        return false;
    }
}
bool cekbalok(game arr[BRS][KLM], int baris, int kolom, int arah)
{
    if(arr[baris+1][kolom+arah].peta == 1){
        return true;
    } else{
        return false;
    }
}
bool cekpintu(game arr[BRS][KLM], int baris, int kolom)
{
    if(arr[baris][kolom].benda == 4){
        return true;
    }else {
        return false;
    }
}
bool cektali(game arr[BRS][KLM], int baris, int kolom,int arah)
{
    if (arah==0){//cek kiri
        if(arr[baris][kolom].benda == 2){
            return true;
        }else {
            return false;
        }
    }
    if (arah==1){//cek kanan
        if(arr[baris][kolom].benda == 2){
            return true;
        }else {
            return false;
        }
    }

}
bool naiklvl(game arr[BRS][KLM], int baris, int kolom, int score)
{
    if(score==5&&cekpintu(arr,baris,kolom)==true){
                return true;
    }
    if(score==14&&cekpintu(arr,baris,kolom)==true){
                return true;
    }
    if(score==20&&cekpintu(arr,baris,kolom)==true){
                return true;
    }
    if(score==27&&cekpintu(arr,baris,kolom)==true){
                return true;
    }
    if(score==33&&cekpintu(arr,baris,kolom)==true){
                return true;
    }else{
                return false;
    }

}
void tampilpintu(game arr[BRS][KLM],int level,int score)
{
    switch(level){
    case 0:
        if(score==5){
        arr[1][18].benda=4; arr[2][18].benda=1; arr[3][18].benda=1;
        bawah(arr,1,18,1);
        swapbuffers();
        bawah(arr,1,18,1);
        swapbuffers();
        }
            break;
    case 1:
        if(score==14){
        arr[1][18].benda=4; arr[2][18].benda=1; arr[3][18].benda=1;
        bawah(arr,1,18,1);
        swapbuffers();
        bawah(arr,1,18,1);
        swapbuffers();
        }
            break;
    case 2:if(score==20){
        arr[1][18].benda=4; arr[2][18].benda=1; arr[3][18].benda=1;
        bawah(arr,1,18,1);
        swapbuffers();
        bawah(arr,1,18,1);
        swapbuffers();
        }
            break;
    case 3:if(score==20){
        arr[1][18].benda=4; arr[2][18].benda=1; arr[3][18].benda=1;
        bawah(arr,1,18,1);
        swapbuffers();
        bawah(arr,1,18,1);
        swapbuffers();
        }
            break;
    case 4:if(score==20){
        arr[1][18].benda=4; arr[2][18].benda=1; arr[3][18].benda=1;
        bawah(arr,1,18,1);
        swapbuffers();
        bawah(arr,1,18,1);
        swapbuffers();
        }
            break;
    }
}
void inisiasi_queue(Queue* P){ //Assign nilai awal pada struktur data queue
    (*P).Count = 0;
    (*P).Max = 20;
    (*P).Head = 0;
    (*P).Tail = 0;
}

float hitungdurasi(clock_t awal,clockid_t sekarang){
   float durasi;
   durasi = (sekarang - awal)/1000;
   return durasi;
}

void dealok(lubang* P){
    //kosongkan nilai semua subvariabel record bertipe lubang
    (*P).pos.baris = NULL;
    (*P).pos.kolom = NULL;
    (*P).start = NULL;
}

lubang dequeue(Queue* P){ //mengeluarkan record lubang dari antrian paling depan dan return nilainya
    lubang temp;
    if((*P).Count != 0 ){
        temp = (*P).dt_lubang[(*P).Head];
        dealok(&((*P).dt_lubang[(*P).Head]));
        (*P).Head = ((*P).Head)+1;
        if((*P).Head >= (*P).Max){
            (*P).Head = 0;
        }
        ((*P).Count)--;
    }
    return temp;
}

void enqueue(Queue* Lbng, lubang X){ //memasukkan record lubang baru di antrian terakhir
    if((*Lbng).Count < (*Lbng).Max ){
        (*Lbng).dt_lubang[(*Lbng).Tail] = X;
        (*Lbng).Tail = ((*Lbng).Tail)+1;
        if((*Lbng).Tail >= (*Lbng).Max){
            (*Lbng).Tail = 0;
        }
        ((*Lbng).Count)++;
    }
}

void tampunglubang(lubang* X,int baris, int kolom, clock_t waktu){
    // assign posisi lubang dalam matriks dan waktu dibuatnya lubang ke record lubang
    (*X).pos.baris = baris;
    (*X).pos.kolom = kolom;
    (*X).start = waktu;
}

void isikembali(game arr[BRS][KLM], Queue* Lbng, clock_t tsekarang){
    lubang temp;
    double durasi = hitungdurasi(((*Lbng).dt_lubang[(*Lbng).Head].start), tsekarang); // durasi = waktu sekarang - waktu lubang dibuat
    while( (durasi > 6) && ((*Lbng).Count > 0)){
        temp = dequeue(Lbng);                                                         //keluarkan data dari antrian dan tampung di variabel temp
        arr[temp.pos.baris][temp.pos.kolom].peta = 1;                                 //Mengembalikan nilai blok ke posisi semula
        atas(arr,temp.pos.baris,temp.pos.kolom,1);
        swapbuffers();
        atas(arr,temp.pos.baris,temp.pos.kolom,1);
        swapbuffers();
        durasi = hitungdurasi(((*Lbng).dt_lubang[(*Lbng).Head].start), tsekarang);   //hitung durasi lubang di antrian berikutnya
    }
}
//menggerakan pemain
void movement(char gerak, game arr[BRS][KLM], int* baris, int* kolom,int *score, Queue* P,int *x,int *y)
{
    lubang Z;
    kordinat temp;
    temp.x=*x;
    temp.y=*y;
    int batas = (*y-6)/MATRIX;
    switch(gerak)
    {
        case 'W'    : if ((naiktangga(arr,*baris,*kolom,temp) == true) || ((diam(arr,*baris+1,*kolom) == false)&&(atastangga(arr,*baris+1,*kolom)==true))){
                        delpemain(arr,*baris,*kolom);
                        *x = (*kolom)*MATRIX;
                            *y = *y-6;
                        if (arr[*baris-1][*kolom].peta==1&&(*y<((*baris)*MATRIX))){
                            *y = *y+6;
                            }
                        }
                        break;
        case 'S'    : if((diam(arr,*baris,*kolom) == false) || (turuntangga(arr,*baris,*kolom) == true)){
                        delpemain(arr,*baris,*kolom);
                        diamond(arr,*baris,*kolom,score);
                        *x = (*kolom)*MATRIX;
                        *y = *y + 6;
                        }
                        break;
        case 'A'    : if ((kanankiri(arr,*baris,*kolom,temp,-1)==false)){
                        delpemain(arr,*baris,*kolom);
                        diamond(arr,*baris,*kolom,score);
                        if (*y>(*baris)*MATRIX){
                            *baris=*baris+1;
                        }
                        //*y = (*baris)*MATRIX;
                        *x = *x - 6;}
                        break;
        case 'D'    : if ((kanankiri(arr,*baris,*kolom,temp,+1)==false)){
                        delpemain(arr,*baris,*kolom);
                        diamond(arr,*baris,*kolom,score);
                        if (*y>(*baris)*MATRIX){
                            *baris=*baris+1;
                        }
                        //*y = (*baris)*MATRIX;
                        *x = *x + 6;}
                        break;
        case 'M'    : if (cekbalok(arr,*baris,*kolom,+1)==true){
                        delbalok(arr,*baris,*kolom,+1);
                        tampunglubang(&Z,*baris+1, *kolom+1, clock());
                        enqueue(P, Z);
                        }
                        break;
        case 'N'    : if (cekbalok(arr,*baris,*kolom,-1)==true){
                        delbalok(arr,*baris,*kolom,-1);
                        tampunglubang(&Z,*baris+1, *kolom-1, clock());
                        enqueue(P, Z);
                        }
                        break;
        }
        inspemain(arr,*baris,*kolom);
}

//menampilkan gerakan pemain
void movementpemain(char gerak, game arr[BRS][KLM], int baris, int kolom,int page,int a,int b,int c,int x,int y)
{
    kordinat temp;
    temp.x=x;
    temp.y=y;
    switch(gerak){
    case 'A' :
        if (kolom <33 ){
            setviewport(((kolom)*MATRIX), ((baris-1)*MATRIX),((kolom+3)*MATRIX), ((baris+2)*MATRIX),1);
            clearviewport();
        }
        if (kolom >=33 ){
            setviewport(((kolom)*MATRIX), ((baris-1)*MATRIX),((kolom+2)*MATRIX), ((baris+2)*MATRIX),1);
            clearviewport();
        }
            setviewport(0,0,1050,720,1);
            kanan(arr,baris-1,kolom,b);
            kanan(arr,baris,kolom,b);
            kanan(arr,baris+1,kolom,b);
            if (cektali(arr,baris,kolom,0)==true){
                readgelantungan(x,y,x+MATRIX,y+MATRIX,1);
            }else if((naiktangga(arr,baris,kolom,temp) == true) || ((diam(arr,baris+1,kolom) == false)&&(atastangga(arr,baris+1,kolom)==true))){
                readnaiktangga(x,y,x+MATRIX,y+MATRIX,a);
                }else {
                    readlarikiri(x,y,x+MATRIX,y+MATRIX,b);
                }

            break;
    case 'D' :
            setviewport(((kolom-2)*MATRIX), (baris-1)*MATRIX,((kolom+1)*MATRIX), ((baris+2)*MATRIX),1);
            clearviewport();
            setviewport(0,0,1050,720,1);
            kiri(arr,baris-1,kolom,c);
            kiri(arr,baris,kolom,c);
            kiri(arr,baris+1,kolom,c);
            if (cektali(arr,baris,kolom,1)==true){
                readgelantungan(x,y,x+MATRIX,y+MATRIX,1);
            }else if((naiktangga(arr,baris,kolom,temp) == true) || ((diam(arr,baris+1,kolom) == false)&&(atastangga(arr,baris+1,kolom)==true))){
                readnaiktangga(x,y,x+MATRIX,y+MATRIX,a);
                }else {
                    readlarikanan(x,y,x+MATRIX,y+MATRIX,c);
                }

            break;
    case 'W' :
            if (baris<21){
            setviewport((kolom-1)*MATRIX, ((baris)*MATRIX),((kolom+2)*MATRIX), ((baris+3)*MATRIX),1);
            clearviewport();
            }
            if (baris>=21){
            setviewport((kolom-1)*MATRIX, ((baris)*MATRIX),((kolom+2)*MATRIX), ((baris+2)*MATRIX),1);
            clearviewport();
            }
            setviewport(0,0,1050,720,1);
            bawah(arr,baris,kolom-1,a);
            bawah(arr,baris,kolom,a);
            bawah(arr,baris,kolom+1,a);

            if (cektali(arr,baris,kolom,0)==true){
                readgelantungan(x,y,x+MATRIX,y+MATRIX,1);
            }else{
                readnaiktangga(x,y,x+MATRIX,y+MATRIX,a);
                if (arr[baris][kolom].peta==0&&arr[baris+1][kolom].benda!=1&&(arr[baris-1][kolom].peta==1||arr[baris+1][kolom].peta==0)){
                    readlarikiri(x,y,x+MATRIX,y+MATRIX,b);
                }
            }
            break;
    case 'S' :
            setviewport((kolom-1)*MATRIX, ((baris-2)*MATRIX),((kolom+2)*MATRIX), ((baris+1)*MATRIX),1);
            clearviewport();
            setviewport(0,0,1050,720,1);
            atas(arr,baris,kolom-1,a);
            atas(arr,baris,kolom,a);
            atas(arr,baris,kolom+1,a);
            if (cektali(arr,baris,kolom,0)==true){
                readgelantungan(x,y,x+MATRIX,y+MATRIX,1);
            }else{
                readturuntangga(x,y,x+MATRIX,y+MATRIX,a);
            }
            break;
    case 'M' :
            delbalokallpage(arr,baris,kolom,1);
            page = 1 - page;
            setactivepage(page);
            delbalokallpage(arr,baris,kolom,1);
            break;
    case 'N' :
            delbalokallpage(arr,baris,kolom,2);
            page = 1 - page;
            setactivepage(page);
            delbalokallpage(arr,baris,kolom,2);
            break;
    }
}



#endif // 181511051_H
