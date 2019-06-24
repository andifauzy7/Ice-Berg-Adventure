#include "LodeRunnerKel11.h"

void createnode (address *p)
//Tujuan : memesan memory dengan alokasi dinamis
//Jika berhasil mengirimkan address, dan jika gagal mengirimkan NULL
//Parameter : P (parameter Output)
{
    *p = (address) malloc(sizeof(dtmap));
}

void isinode (address *p)

//Tujuan : Mengisi node yang sudah dipesan dengan Nilai yang dikirimkan
//Periksa keberadaan P, Nilai diisi jika P tidak NULL
//	*p.next diisi NULL
// Parameter : P (parameter Input-Output); Nilai (parameter Input)
{
    if (p!=NULL){
      (*p)->next=NULL;
    }

}

void insakhir (address *p, address PNew)
/* Tujuan : menambahkan elemen list (PNew) di akhir LinkedList */
/* IS : p mungkin Kosong */
/* FS : menyambungkan elemen baru (PNew) di akhir Linked List */
{
    dtmap * current = *p;

    while (current->next != NULL){
        current = current->next;
    }
    current->next=PNew;
}

void permain(int level,int *score, int *nyawa, game arr[BRS][KLM],int baris,int kolom,kordinat player)
{
    int baris_bef, kolom_bef, atasbawah=5,kirikiri=3, kanankanan=1;// variabel lokal untuk urutan animasi
    char gerak; //variabel pergerakan pemain
    int page=0;
    bool keep; //looping permainan
    keep = true;

    clock_t tmulai,takhir; // variabel waktu yang digunakan untuk mengembalikan lubang
    clock_t tsekarang;

    Queue queuelubang;
    inisiasi_queue(&queuelubang);
    tmulai = clock();

    BGM();                                      //back ground music saat permainan berlangsung

    baris = player.y/MATRIX;                                         // Pemberian nilai pada baris untuk index pada matriks
    kolom = (player.x+(MATRIX/2))/MATRIX;                            // Pemberian nilai pada kolom untuk index pada matriks

    setactivepage(0);                           //page 0 di panggil untuk di isi oleh sprites
    cleardevice();
    readimagefile("gambar/Playgame.gif",0,0,getmaxx(),getmaxy());                              //menghapus seluruh sprites pada page
    tampilall(arr);                             //menampilkan sprite sesuai array yang telah dibuat pada page 0
    tampilscore(*score);
    tampillvl(level);                        //menampilkan score di dalam permainan pada page 0
    setactivepage(1);                           //page 1 di panggil untuk di isi oleh sprites
    cleardevice();
    readimagefile("gambar/Playgame.gif",0,0,getmaxx(),getmaxy());                              //menghapus seluruh sprites pada page
    tampilall(arr);                             //menampilkan sprite sesuai array yang telah dibuat pada page 1
    tampilscore(*score);
    tampillvl(level);                        //menampilkan score di dalam permainan pada page 1
    //readimagefile("gambar/Playgame.gif",0,0,1360,720);

    while(keep){
        setactivepage(page);
        setvisualpage(1-page);

        baris_bef = baris;
        kolom_bef = kolom;


        if(!jatuh(arr,baris,kolom)){
            if (arr[baris][kolom].benda==2&&(player.y>((baris)*MATRIX))){
                    gerak = 'S';
                }else{
            gerak = toupper(getch());}
        }else{
            gerak = 'S';
            delay(20);
            FallSFX();
        }
        movement(gerak,arr,&baris,&kolom,score,&queuelubang,&player.x,&player.y);
        animasi2(arr,baris,kolom,&kanankanan,&kirikiri,&atasbawah);

        baris = player.y/MATRIX;                                         // Pemberian nilai pada baris untuk index pada matriks
        kolom = (player.x+(MATRIX/2))/MATRIX;                            // Pemberian nilai pada kolom untuk index pada matriks

        tampilscore(*score);
        tampillvl(level);
        //pengembalian lubang yg dibom
        if(queuelubang.Count > 0){ // apabila ada lubang di dalam map
                tsekarang = clock();
                isikembali(arr, &queuelubang, tsekarang);
            }
        animasi(&atasbawah,&kanankanan,&kirikiri);
        movementpemain(gerak,arr,baris,kolom,page,atasbawah,kanankanan,kirikiri,player.x,player.y);
        tampilpintu(arr,level,*score);
        if (naiklvl(arr,baris,kolom,*score)==true){
            keep = false;
            *score=*score+1;

        }
        //if (jalan(arr,baris,kolom,baris_bef,kolom_bef)){
        page = 1 - page;
        //}
    }
}
 int main()
 {
     int level=0,maxlvl=4,score=0,nyawa=3;
     int baris, kolom;
     kordinat player;
     address head=NULL,pnew,temp;
     initwindow(1360,720," ",0,0,false,true);
     setviewport(0,0,1360,720,1);
     //inisiasi level
     while(level<maxlvl){
        if (head==NULL){
            createnode(&head);
            isinode(&head);
            temp=head;
        }else{
            createnode(&pnew);
            isinode(&pnew);
            insakhir(&head,pnew);
            temp=temp->next;
        }
        buatpeta2(temp->arr,&baris,&kolom,level,&player );
        level++;

     }
     level=0;
     temp=head;
     menu();
     while (temp!=NULL)
     {
        permain(level,&score,&nyawa,temp->arr,baris,kolom,player);
        level++;
        temp=temp->next;
     }
     closegraph();
 }
