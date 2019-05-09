#include "Header/LodeRunnerKel11.h"

void Create_Node (address *p)
//Tujuan : memesan memory dengan alokasi dinamis
//Jika berhasil mengirimkan address, dan jika gagal mengirimkan NULL
//Parameter : P (parameter Output)
{
    *p = (address) malloc(sizeof(dtmap));
}

void Isi_Node (address *p)

//Tujuan : Mengisi node yang sudah dipesan dengan Nilai yang dikirimkan
//Periksa keberadaan P, Nilai diisi jika P tidak NULL
//	*p.next diisi NULL
// Parameter : P (parameter Input-Output); Nilai (parameter Input)
{
    if (p!=NULL){
      (*p)->next=NULL;
    }

}

void Ins_Akhir (address *p, address PNew)
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

void permain(int lvl,int *score, int *nyawa, game arr[BRS][KLM])
{
    int baris_bef, kolom_bef,atasbawah=5,kirikiri=3, kanankanan=1;// variabel lokal untuk urutan animasi
    char gerak;                                                  //
    int page=0;
    bool keep;
    keep = true;
    int BRS_, KLM_;

    clock_t tmulai,takhir;
    clock_t tsekarang;

    Queue queuelubang;
    inisiasi_queue(&queuelubang);
    tmulai = clock();

    BGM();                                      //back ground music saat permainan berlangsung

    buatpeta2(arr,&BRS_,&KLM_,lvl);             //membuat peta permainan dalam bentuk array
    setactivepage(0);                           //page 0 di panggil untuk di isi oleh sprites
    cleardevice();                              //menghapus seluruh sprites pada page
    tampilall(arr);                             //menampilkan sprite sesuai array yang telah dibuat pada page 0
    tampilscore(*score);
    tampillvl(lvl);                        //menampilkan score di dalam permainan pada page 0
    setactivepage(1);                           //page 1 di panggil untuk di isi oleh sprites
    cleardevice();                              //menghapus seluruh sprites pada page
    tampilall(arr);                             //menampilkan sprite sesuai array yang telah dibuat pada page 1
    tampilscore(*score);
    tampillvl(lvl);                        //menampilkan score di dalam permainan pada page 1


    while(keep){
        setactivepage(page);
        setvisualpage(1-page);
        baris_bef = BRS_;
        kolom_bef = KLM_;


        if(!jatuh(arr,BRS_,KLM_)){
            gerak = toupper(getch());
        }else{
            gerak = 'S';
            delay(200);
            FallSFX();
        }
        movement(gerak,arr,&BRS_,&KLM_,score,&queuelubang);
        animasi2(arr,BRS_,KLM_,&kanankanan,&kirikiri,&atasbawah);

        tampilscore(*score);
        tampillvl(lvl);
        //pengembalian lubang yg dibom
        if(queuelubang.Count > 0){ // apabila ada lubang di dalam map
                tsekarang = clock();
                isikembali(arr, &queuelubang, tsekarang);
            }

        movementpemain(gerak,arr,BRS_,KLM_,page,atasbawah,kanankanan,kirikiri);
        tampilpintu(arr,*score);
        if (naiklvl(arr,BRS_,KLM_,*score)==true){
            keep = false;

        }
        if (jalan(arr,BRS_,KLM_,baris_bef,kolom_bef)){
        page = 1 - page;
        }
        animasi(&atasbawah,&kanankanan,&kirikiri);
        if (*score==14){
            keep=false;
        }
    }
}
 int main()
 {
     int lvl=0,maxlvl=1,score=0,nyawa=3;
     address head,pnew,temp;

     initwindow(1360,720," ",0,0,false,true);
     setviewport(0,0,1360,720,1);
     //inisiasi lvl
     Create_Node(&head);
     Isi_Node(&head);

     Create_Node(&pnew);
     Isi_Node(&pnew);
     Ins_Akhir(&head,pnew);

     temp=head;
     menu();
     while (temp!=NULL)
     {
        permain(lvl,&score,&nyawa,head->arr);
        lvl++;
        temp=temp->next;
     }
     closegraph();
 }
