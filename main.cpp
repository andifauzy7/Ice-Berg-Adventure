#include "Header/LodeRunnerKel11.h"
void convert_matriks(game matriks[BRS][KLM]);
bool above_blocks(game matriks[BRS][KLM], int i, int j);
bool object_use(game matriks[BRS][KLM], int i, int j);
bool above_rope(game matriks[BRS][KLM], int i, int j);

void permain(int lvl,int *score, int *nyawa, game arr[BRS][KLM],int BRS_,int KLM_)
{
    int baris_bef, kolom_bef,atasbawah=5,kirikiri=3, kanankanan=1;// variabel lokal untuk urutan animasi
    char gerak;                                                  //
    int page=0;
    bool keep;
    keep = true;

    clock_t tmulai,takhir;
    clock_t tsekarang;

    Queue queuelubang;
    inisiasi_queue(&queuelubang);
    tmulai = clock();

    BGM();                                      //back ground music saat permainan berlangsung

    setactivepage(0);                           //page 0 di panggil untuk di isi oleh sprites
    cleardevice();                              //menghapus seluruh sprites pada page
    readimagefile("gambar/Playgame.gif",0,0,getmaxx(),getmaxy());
    tampilall(arr);                             //menampilkan sprite sesuai array yang telah dibuat pada page 0
    tampilscore(*score);
    tampillvl(lvl);                        //menampilkan score di dalam permainan pada page 0
    setactivepage(1);                           //page 1 di panggil untuk di isi oleh sprites
    cleardevice();                              //menghapus seluruh sprites pada page
    readimagefile("gambar/Playgame.gif",0,0,getmaxx(),getmaxy());
    tampilall(arr);                             //menampilkan sprite sesuai array yang telah dibuat pada page 1
    tampilscore(*score);
    tampillvl(lvl);                        //menampilkan score di dalam permainan pada page 1

    while(keep){
        setactivepage(page);
        setvisualpage(1-page);
        readimagefile("gambar/Playgame.gif",0,0,1360,720);
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
    convert_matriks(temp->arr);
    while (temp!=NULL)
    {
       permain(lvl,&score,&nyawa,temp->arr,BRS_,KLM_);
       lvl++;
       temp=temp->next;
    }
    closegraph();
}

void convert_matriks(game matriks[BRS][KLM]){
    int i=0;
        while(i<BRS){
            int j=0;
            while(j<KLM){
                // PETA ADALAH JALUR KOSONG YG BISA DILEWATI.
                // PEMAIN ADALAH LETAK KARAKTER UTAMA.
                // TANGGA ADALAH OBJEK LAIN SPT TANGGA 1, TALI 2, RUBY 3.
                if( above_blocks(matriks, i, j) || object_use(matriks, i, j) || above_rope(matriks,i,j)){
                    printf("2");
                } else {
                    printf("%d",matriks[i][j].peta);
                }
                j++;
            }
            printf("\n");
            i++;
        }
}

bool above_blocks(game matriks[BRS][KLM], int i, int j){
    // Jika Dibawahnya bisa dipijak (Ex Block atau tangga) & Harus Jalur yang tersedia
    if(( matriks[i+1][j].peta == 1 || matriks[i+1][j].tangga == 1) && matriks[i][j].peta == 0){
        return true;
    } else {
        return false;
    }
}

bool object_use(game matriks[BRS][KLM], int i, int j){
    // Jika Object adalah Tangga atau TALI.
    if( (matriks[i][j].tangga == 2 || matriks[i][j].tangga == 1 ||
         matriks[i][j+1].tangga == 1 || matriks[i][j+1].tangga == 2 ||
         matriks[i][j-1].tangga == 1 || matriks[i][j-1].tangga == 2
         ) && matriks[i][j].peta == 0){
        return true;
    } else {
        return false;
    }
}

bool above_rope(game matriks[BRS][KLM], int i, int j){
    if(matriks[i][j].peta != 0){
        return false;
    }
    if(matriks[i][j].peta == 0 && matriks[i-1][j].tangga == 2 && i>=0){
        return true;
    } else {
        above_rope(matriks, i-1, j);
    }
}
