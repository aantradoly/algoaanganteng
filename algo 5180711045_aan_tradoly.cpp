#include<iostream>

using namespace::std;

    float input(string teks){
    double angka;
        cout<<"nilai  "<<teks<<" :"; cin>>angka;
    return angka;

}
    void grade (float bc){

    if(bc>80)
        {cout<<"nilai yg anda dapat 'A'";}
    else if(bc>60)
        {cout<<"nilai yg anda dapat 'B'";}
    else if(bc>40)
        {cout<<"nilai yg anda dapat'C'";}
    else if(bc>20)
        {cout<<"nilai yg anda dapat 'D'";}
    else if(bc>0)
        {cout<<"Anda mendapat Nilai 'E'";}

    }

        struct asalamuallaikum{
        int tugas,absen,uts,uas;
        float ta, akhir, utsak, ujak;};

    main(){
    float aa;
        asalamuallaikum qq;
    qq.uts=input   (" UTS mahasiswa ");
    qq.uas=input   (" UAS mahasiswa ");
    qq.tugas=input ("TUGAS mahasiswa");
    qq.absen=input ("ABSENSI");
        cout<<endl;

    qq.uts=qq.uts*20/100;
    qq.uas=qq.uas*30/100;
    qq.tugas=qq.tugas*35/100;
    qq.akhir=qq.absen*15/100;

        cout<<" nilai UTS Akhir    : "<<qq.uts<<endl;
        cout<<" nilai UAS Akhir    : "<<qq.uas<<endl;
        cout<<" nilai TUGAS Akhir  : "<<qq.tugas<<endl;
        cout<<" nilai ABSEN Aahir  : "<<qq.akhir<<endl<<endl;
    aa=qq.uts+qq.ujak+qq.ta+qq.akhir;
        cout<<" Nilai Akhir Semua:"<<aa<<endl;
    grade(aa);
        cout<<endl;



}

