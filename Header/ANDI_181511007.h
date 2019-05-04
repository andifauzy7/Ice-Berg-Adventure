// File      : ANDI_181511007.h
// Author    : Andi Fauzy Dewantara (181511007)
// Deskripsi : Header Mengenai Linked List.
// D3 JTK'18

#include "KEL11_Header.h"

// Membuat Node baru dengan data yang telah terisi.
node* buatnode(int jalur, int objek, int letak){
	node* temp = new node;
    temp->letak = letak;
	temp->objek = objek;
	temp->data = jalur;						// Isi Nilai.
	temp->kanan = temp->bawah = NULL;		// Kedua pointer diisi dengan NULL.
	temp->atas = temp->kiri = NULL;
	return temp;
}

// Menampilkan Linked List dengan parameter Head atau Pointer teratas.
void tampilarray(node *head){
    int baris;
	node *rp, *dp = head;
	// Loop dilakukan hingga pointer bawah NULL.
	while (dp) {
		rp = dp;
		baris = rp->letak;
		// Loop dilakukan hingga pointer kanan NULL.
		while (rp) {
			if(rp->objek==0){
            //rectangle(awal+30*rp->letak,awal+30*baris,50+30*rp->letak,50+30*baris);
			} else if(rp->objek==1){
                //readimagefile("Sprites/balok.gif",awal+30*rp->letak,awal+30*baris,50+30*rp->letak,50+30*baris);
            } else if(rp->objek==2){
                readimagefile("Sprites/tangga.gif",awal+30*rp->letak,awal+30*baris,50+30*rp->letak,50+30*baris);
            } else if(rp->objek==3){
                readimagefile("Sprites/tali.gif",awal+30*rp->letak,awal+30*baris,50+30*rp->letak,50+30*baris);
            } else if(rp->objek==4){
                readimagefile("Sprites/llama.gif",awal+30*rp->letak,awal+30*baris,50+30*rp->letak,50+30*baris);
            }
			rp = rp->kanan;
		}
		dp = dp->bawah;
	}
}

// Fungsi membuat Array 2 Dimensi yang mengembalikan pointer Head.
node* membuatmatriks(int mat[][35], int m, int n){
	// Pointer Mainhead untuk titik awal Linked List.
	node* mainhead = NULL;

	// Membuat Pointer Head untuk setiap Row atau Baris dalam Array.
	node* head[m];
	node *tempkanan, *ptrbaru;

	// Pertama, membuat Linked List sebanyak m baris.
	for (int i = 0; i < m; i++) {

		// Setiap pointer Head diinisialisasi dengan NULL.
		head[i] = NULL;

		// Membuat Linked List sebanyak n kolom.
		for (int j = 0; j < n; j++) {
			if(mat[i][j]==0 || mat[i][j]==2 || mat[i][j]==3 || mat[i][j]==4){
                if(j==0){
                    ptrbaru = buatnode(1, mat[i][j], i);
                } else {
                    ptrbaru = buatnode(1, mat[i][j], j);
                }
                // Membuat Node terlebih dahulu dari setiap elemennya.
                // Mainhead akan menunjuk mat[0][0] jika Mainhead sebelumnya blm terbentuk.
                if (!mainhead){
                    mainhead = ptrbaru;
                }

                if (!head[i]){
                    head[i] = ptrbaru;
                } else {
                    tempkanan->kanan = ptrbaru;
                    ptrbaru->kiri = tempkanan;
                }
                tempkanan = ptrbaru;
			} else {
                readimagefile("Sprites/balok.gif",awal+30*j,awal+30*i,50+30*j,50+30*i);
			}
		}
	}

	// Head i akan disambungkan ke bawah dengan Head i+1.
	for (int i = 0; i < m - 1; i++) {
		node *temp1 = head[i], *temp2 = head[i + 1];
		temp1->bawah = temp2;
		temp2->atas = temp1;
		temp1 = temp1->kanan;
        temp2 = temp2->kanan;
		while (temp1 && temp2) {
			if(temp1->letak==temp2->letak){
                temp1->bawah = temp2;
                temp2->atas = temp1;
                temp1 = temp1->kanan;
                temp2 = temp2->kanan;
			} else if (temp1->letak < temp2->letak){
                temp1 = temp1->kanan;
			} else if (temp1->letak > temp2->letak){
                temp2 = temp2->kanan;
			}
		}
	}
	// Mengembalikan pointer mainhead sebagai titik awal dari Linked List.
	return mainhead;
}

// Prosedur untuk mengubah isi index dalam Linked List 2 Dimensi.
void ubahisiindex(node* head, int baris, int kolom, int data){
    node* bantu;
    int i;
    bantu=head;
    i=1;                        // Pointer bergerak kesamping.
    while(i<baris){
        bantu=bantu->kanan;
    i++;
    }
        i=1;
        while(i<kolom){
            bantu=bantu->bawah; // Pointer bergerak kebawah.
        i++;
        }
    bantu->data=data;
}

// Fungsi untuk mengetahui keberadaan karakter utama.
node* cekkarakterutama(node *head){
	node *rp, *dp = head;
	// Loop dilakukan hingga pointer bawah NULL.
	while (dp) {
		rp = dp;
		// Loop dilakukan hingga pointer kanan NULL.
		while (rp) {
			if(rp->objek==4){
                return rp;
			}
			rp = rp->kanan;
		}
		dp = dp->bawah;
	}
}

int cekbaris(node *head){
    node *temp;
    temp=head;
    while(temp->kiri!=NULL){
        temp = temp->kiri;
    }
    return temp->letak;
}
