
#include <iostream>
#include <conio.h>
//#include <malloc.h>
//#include <string>
using namespace std;

unsigned char menu(unsigned char secim)
{
clrscr();
cout<<"1 - Kayit"<<endl<<endl
<<"2 - Listeleme"<<endl<<endl
<<"3 - Cikis";
cout<<endl<<endl<<"Secim:";
cin>>secim;
return secim;
}

int main ()
{
// ---- TİP OLUŞTURMA İŞLEMİ -----
struct ogrenci
{
char ad[20];
char soyad[20];
char numara[11];
};
ogrenci *ogrenciler; // OLUŞTURULAN TİPİN BİR DEĞİŞKEN OLARAK KULLANILMASI

unsigned int sira=0;

unsigned char scm;

clrscr();

cout<<"Sistemi kac ogrenci icin calistiracaksiniz ? : ";

unsigned int ogr_say;

cin>>ogr_say;

// HAFIZADA KULLANICI TARAFINDAN GIRILEN ADET KADAR YER AYRILMASI

ogrenciler = new ogrenci[20];

//ayirma islemi sonu
unsigned char secim;
while (secim!='3')

switch (secim=menu(0))
   {
  case '1': {
      if (sira>=ogr_say) {
  cout<<"Yeterli alan yok!";
  getch();
}
      while (sira<ogr_say)
{
  // HERBIR OGRENCININ BILGILERININ GIRILMESI
  clrscr();
  cout<<sira+1<<". Ogrencinin Adi     :"; cin>>ogrenciler[sira].ad;
  cout<<sira+1<<". Ogrencinin Soyadi  :"; cin>>ogrenciler[sira].soyad;
  cout<<sira+1<<". Ogrencinin Numarasi:"; cin>>ogrenciler[sira].numara;
  sira++;
  cout<<"Kayit islemine devam edecek misiniz ? (e/h):";
  cin>>scm;
  if ((scm=='h')||(scm=='H')) break;
}

     break;
    }

case '2': {
    clrscr();
    cout<<"1 - Ada Gore      "<<endl<<endl;
    cout<<"2 - Soyada Gore   "<<endl<<endl;
    cout<<"3 - Numaraya Gore "<<endl<<endl;
    int ssec;
cin>>ssec;
if (ssec==1)
{
clrscr();
cout<<"Aranacak Adini Girin:";
char ara_ad[20];
cin>>ara_ad;
for (int i=0;i<=sira;i++)
{
if (strcmp(ara_ad,ogrenciler[i].ad)==0)
   {
clrscr();
cout<<"Bulunan Ogrencinin"<<endl;
cout<<"Adi     :"<<ogrenciler[i].ad<<endl;
cout<<"Soyadi  :"<<ogrenciler[i].soyad<<endl;
cout<<"Numarasi:"<<ogrenciler[i].numara<<endl;
cout<<"Aradiginiz Ogrenci Listelendi mi ? (e/h):";
cin>>scm;
if ((scm=='e')||(scm=='E')) break;
   }
}
   if ((scm=='h')||(scm=='H'))
  {
   cout<<endl<<"Aradiginiz Kayit Bulunamadi";
   getch();
  }
}
if (ssec==2)
{
clrscr();
cout<<"Aranacak soyadini Girin:";
char ara_soyad[20];
cin>>ara_soyad;
for (int i=0;i<=sira;i++)
{
if (strcmp(ara_soyad,ogrenciler[i].soyad)==0)
   {
clrscr();
cout<<"Bulunan Ogrencinin"<<endl;
cout<<"Adi     :"<<ogrenciler[i].ad<<endl;
cout<<"Soyadi  :"<<ogrenciler[i].soyad<<endl;
cout<<"Numarasi:"<<ogrenciler[i].numara<<endl;
cout<<"Aradiginiz Ogrenci Listelendi mi ? (e/h):";
cin>>scm;
if ((scm=='e')||(scm=='E')) break;
   }
}
   if ((scm=='h')||(scm=='H'))
  {
   cout<<endl<<"Aradiginiz Kayit Bulunamadi";
   getch();
  }
}
if (ssec==3)
{
clrscr();
cout<<"Aranacak numarayi Girin:";
char ara_numara[20];
cin>>ara_numara;
for (int i=0;i<=sira;i++)
{
if (strcmp(ara_numara,ogrenciler[i].numara)==0)
   {
clrscr();
cout<<"Bulunan Ogrencinin"<<endl;
cout<<"Adi     :"<<ogrenciler[i].ad<<endl;
cout<<"Soyadi  :"<<ogrenciler[i].soyad<<endl;
cout<<"Numarasi:"<<ogrenciler[i].numara<<endl;
cout<<"Aradiginiz Ogrenci Listelendi mi ? (e/h):";
cin>>scm;
if ((scm=='e')||(scm=='E')) break;
   }
}
   if ((scm=='h')||(scm=='H'))
  {
   cout<<endl<<"Aradiginiz Kayit Bulunamadi";
   getch();
  }
}
break;
   }
default:{};
      }

// HAFIZANIN SERBEST BIRAKILMASI
delete (ogrenciler);
return 0;
}
