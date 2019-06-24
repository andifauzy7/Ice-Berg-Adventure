//Mohd. Sofihin  (181511056)
#ifndef Sofihin181511056_H
#define Sofihin181511056_H
void readpeta(int x1,int y1,int x2,int y2)
{
    readimagefile("gambar/blocknewgen.gif",x1,y1,x2,y2);
}
void readpemain(int x1,int y1,int x2,int y2,int gerakpemain)
{
    switch(gerakpemain){
    case 1:readimagefile("gambar/kasino1.gif",x1,y1,x2,y2);
            break;
    case 2:readimagefile("gambar/kasino2.gif",x1,y1,x2,y2);
            break;
    case 3:readimagefile("gambar/kasino3.gif",x1,y1,x2,y2);
            break;
    case 4:readimagefile("gambar/kasino4.gif",x1,y1,x2,y2);
            break;
    case 5:readimagefile("gambar/naik1.gif",x1,y1,x2,y2);
            break;
    case 6:readimagefile("gambar/naik2.gif",x1,y1,x2,y2);
            break;
    case 7:readimagefile("gambar/gelantungan.gif",x1,y1,x2,y2);
            break;
    case 8:readimagefile("gambar/jatuh.gif",x1,y1,x2,y2);
            break;
    }
}
void readlarikanan(int x1,int y1,int x2,int y2,int gerakpemain)
{
    switch(gerakpemain){
    case 3:readimagefile("gambar/kasino3.gif",x1,y1,x2-1,y2-1);
            break;
    case 4:readimagefile("gambar/kasino4.gif",x1,y1,x2-1,y2-1);
            break;
    }
}
void readlarikiri(int x1,int y1,int x2,int y2,int gerakpemain)
{
    switch(gerakpemain){
    case 1:readimagefile("gambar/kasino1.gif",x1,y1,x2-1,y2-1);
            break;
    case 2:readimagefile("gambar/kasino2.gif",x1,y1,x2-1,y2-1);
            break;
    }
}
void readgelantungan(int x1,int y1,int x2,int y2,int gerakpemain)
{
    switch(gerakpemain){
    case 1:readimagefile("gambar/gelantungan.gif",x1,y1,x2-1,y2-1);
            break;
    }
}
void readnaiktangga(int x1,int y1,int x2,int y2,int gerakpemain)
{
    switch(gerakpemain){
    case 5:readimagefile("gambar/naik1.gif",x1,y1,x2-1,y2-1);
            break;
    case 6:readimagefile("gambar/naik2.gif",x1,y1,x2-1,y2-1);
    }
}
void readturuntangga(int x1,int y1,int x2,int y2,int gerakpemain)
{
    switch(gerakpemain){
    case 5:readimagefile("gambar/naik1.gif",x1,y1,x2-1,y2-1);
            break;
    case 6:readimagefile("gambar/naik2.gif",x1,y1,x2-1,y2-1);
    }
}
void readjatuh(int x1,int y1,int x2,int y2,int gerakpemain)
{
    switch(gerakpemain){
    case 8:readimagefile("gambar/jatuh.gif",x1,y1,x2-1,y2-1);
            break;
    }
}
void readtangga(int x1,int y1,int x2,int y2)
{
    readimagefile("gambar/tanggadono.gif",x1,y1,x2,y2);
}
void readtali(int x1,int y1,int x2,int y2)
{
    readimagefile("gambar/tali2.0.gif",x1,y1,x2,y2);
}
void readdiamond(int x1,int y1,int x2,int y2)
{
    readimagefile("gambar/emerald.gif",x1,y1,x2,y2);
}
void readbot(int x1,int y1,int x2,int y2)
{
    readimagefile("gambar/musuh1.gif",x1,y1,x2,y2);
}
void readpintu(int x1,int y1,int x2,int y2)
{
    readimagefile("gambar/pintu1.gif",x1,y1,x2,y2);
}
#endif // 181511056_H
