#include "Header/LodeRunnerKel11.h"

void permain(int lvl,int *score, int *nyawa, game arr[BRS][KLM],int BRS_,KLM_)
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

                 //membuat peta permainan dalam bentuk array
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
    int lvl=0,maxlvl=2,score=0,nyawa=3;
    int BRS_, KLM_;
    address head=NULL,pnew,temp;
    initwindow(1360,720," ",0,0,false,true);
    setviewport(0,0,1360,720,1);
    //inisiasi lvl
    while(lvl<maxlvl){
       if (head==NULL){
           Create_Node(&head);
           Isi_Node(&head);
           temp=head;
       }else{
           Create_Node(&pnew);
           Isi_Node(&pnew);
           Ins_Akhir(&head,pnew);
           temp=temp->next;
       }
       buatpeta2(temp->arr,&BRS_,&KLM_,lvl);
       lvl++;

    }
    lvl=0;
    temp=head;
    menu();
    while (temp!=NULL)
    {
       permain(lvl,&score,&nyawa,temp->arr,BRS_,KLM_);
       lvl++;
       temp=temp->next;
    }
    closegraph();
}
