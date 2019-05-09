//Kresna Bayu Sanyoto (181511051)
#ifndef Kresna181511051_H
#define Kresna1815110051_H
#define MATRIX 30
#define BRS 690/MATRIX
#define KLM 1050/MATRIX
//untung memeriksa apakah di bawah ada objek atau tidak
bool diam(game arr[BRS][KLM], int BRS_, int KLM_)
{
    if (arr[BRS_+1][KLM_].peta==1&&arr[BRS_+1][KLM_].tangga==0){
        return true;
    }
        return false;
}
bool atastangga(game arr[BRS][KLM], int BRS_, int KLM_){
    if (arr[BRS_-1][KLM_].peta==0&&arr[BRS_][KLM_].tangga==1){
        return true;
    }
        return false;
}
bool jalan(game arr[BRS][KLM], int BRS_, int KLM_,int brsbef, int klmbef)
{
    if ((arr[BRS_][KLM_].pemain == arr[brsbef][klmbef].pemain)){
        return false;
    }
        return true;
}
//memeriksa apakah di samping ada tembok atau tidak
bool kanankiri(game arr[BRS][KLM], int BRS_, int KLM_, int arah)
{
    if(arr[BRS_][KLM_+arah].peta == 1){
        return true;
    } else{
        return false;
    }
}

//untuk memeriksa apakah di bawah ada objek atau tudak
bool jatuh(game arr[BRS][KLM], int BRS_, int KLM_)
{
    if (arr[BRS_+1][KLM_].peta==0&&(arr[BRS_+1][KLM_].tangga==0||arr[BRS_+1][KLM_].tangga==2||arr[BRS_+1][KLM_].tangga==3)&&arr[BRS_][KLM_].tangga==0){
        return true;
    }
        return false;
}
//untuk memeriksa apakah sedang di tangga atau tidak saat naik
bool naiktangga(game arr[BRS][KLM], int BRS_, int KLM_)
{
    if ((arr[BRS_][KLM_].tangga==1)&&(arr[BRS_-1][KLM_].tangga==1)){
        return true;
    }else {
        return false;
    }
}
//untuk memeriksa apakah sedang di tangga atau tidak saat turun
bool turuntangga(game arr[BRS][KLM], int BRS_, int KLM_)
{
    if (((arr[BRS_][KLM_].tangga==1)&&(arr[BRS_+1][KLM_].tangga==1))){
        return true;
    }else{
        return false;
    }
}
bool cekbalok(game arr[BRS][KLM], int BRS_, int KLM_, int arah)
{
    if(arr[BRS_+1][KLM_+arah].peta == 1){
        return true;
    } else{
        return false;
    }
}
bool cekpintu(game arr[BRS][KLM], int baris, int kolom)
{
    if(arr[baris][kolom].tangga == 4){
        return true;
    }else {
        return false;
    }
}
bool naiklvl(game arr[BRS][KLM], int baris, int kolom, int score)
{
    if(score==5&&cekpintu(arr,baris,kolom)==true){
        return true;
    }else {
        return false;
    }

}
void tampilpintu(game arr[BRS][KLM],int score)
{
    if(score==5){
        arr[1][18].tangga=4; arr[2][18].tangga=1; arr[3][18].tangga=1;

        bawah(arr,1,18,1);
        swapbuffers();
        bawah(arr,1,18,1);
        swapbuffers();
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
void movement(char gerak, game arr[BRS][KLM], int* BRS_, int* KLM_,int *score, Queue* P)
{
    lubang Z;
    switch(gerak)
    {
        case 'W'    : if ((naiktangga(arr,*BRS_,*KLM_) == true) || ((diam(arr,*BRS_,*KLM_) == false)&&(atastangga(arr,*BRS_,*KLM_)==true))){
                        delpemain(arr,*BRS_,*KLM_);
                        *BRS_=*BRS_-1;
                        }
                        break;
        case 'S'    : if((diam(arr,*BRS_,*KLM_) == false) || (turuntangga(arr,*BRS_,*KLM_) == true)){
                        delpemain(arr,*BRS_,*KLM_);
                        diamond(arr,*BRS_,*KLM_,score);
                        *BRS_=*BRS_+1;
                        }
                        break;
        case 'A'    : if ((kanankiri(arr,*BRS_,*KLM_,-1)==false)){
                        delpemain(arr,*BRS_,*KLM_);
                        diamond(arr,*BRS_,*KLM_,score);
                        (*KLM_)=(*KLM_)-1;
                        }
                        break;
        case 'D'    : if ((kanankiri(arr,*BRS_,*KLM_,+1)==false)){
                        delpemain(arr,*BRS_,*KLM_);
                        diamond(arr,*BRS_,*KLM_,score);
                        (*KLM_)=(*KLM_)+1;
                        }
                        break;
        case 'M'    : if (cekbalok(arr,*BRS_,*KLM_,+1)==true){
                        delbalok(arr,*BRS_,*KLM_,+1);
                        tampunglubang(&Z,*BRS_+1, *KLM_+1, clock());
                        enqueue(P, Z);
                        }
                        break;
        case 'N'    : if (cekbalok(arr,*BRS_,*KLM_,-1)==true){
                        delbalok(arr,*BRS_,*KLM_,-1);
                        tampunglubang(&Z,*BRS_+1, *KLM_-1, clock());
                        enqueue(P, Z);
                        }
                        break;
        }
        inspemain(arr,*BRS_,*KLM_);
}

//menampilkan gerakan pemain
void movementpemain(char gerak, game arr[BRS][KLM], int baris_, int kolom_,int page,int a,int b,int c)
{
    switch(gerak){
    case 'A' :
            setviewport(((kolom_)*MATRIX), ((baris_-1)*MATRIX),((kolom_+3)*MATRIX), ((baris_+2)*MATRIX),1);
            clearviewport();
            setviewport(0,0,1050,720,1);
            kanan(arr,baris_-1,kolom_,b);
            kanan(arr,baris_,kolom_,b);
            kanan(arr,baris_+1,kolom_,b);
            break;
    case 'D' :
            setviewport(((kolom_-2)*MATRIX), (baris_-1)*MATRIX,((kolom_+1)*MATRIX), ((baris_+2)*MATRIX),1);
            clearviewport();
            setviewport(0,0,1050,720,1);
            kiri(arr,baris_-1,kolom_,c);
            kiri(arr,baris_,kolom_,c);
            kiri(arr,baris_+1,kolom_,c);
            break;
    case 'W' :
            setviewport((kolom_-1)*MATRIX, ((baris_)*MATRIX),((kolom_+2)*MATRIX), ((baris_+3)*MATRIX),1);
            clearviewport();
            setviewport(0,0,1050,720,1);
            bawah(arr,baris_,kolom_-1,a);
            bawah(arr,baris_,kolom_,a);
            bawah(arr,baris_,kolom_+1,a);
            break;
    case 'S' :
            setviewport((kolom_-1)*MATRIX, ((baris_-2)*MATRIX),((kolom_+2)*MATRIX), ((baris_+1)*MATRIX),1);
            clearviewport();
            setviewport(0,0,1050,720,1);
            atas(arr,baris_,kolom_-1,a);
            atas(arr,baris_,kolom_,a);
            atas(arr,baris_,kolom_+1,a);
            break;
    case 'M' :
            delbalokallpage(arr,baris_,kolom_,1);
            page = 1 - page;
            setactivepage(page);
            delbalokallpage(arr,baris_,kolom_,1);
            break;
    case 'N' :
            delbalokallpage(arr,baris_,kolom_,2);
            page = 1 - page;
            setactivepage(page);
            delbalokallpage(arr,baris_,kolom_,2);
            break;
    }
}


#endif // 181511051_H
