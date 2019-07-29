#include <iostream>
#include <string.h>

using namespace std;

struct Sinif{
    string isim;
    string bolum;
    int no;
};

struct Okul{
    int numara;
    string ad;
    
    Sinif sinif;
    
    Okul(Okul* okul){
        
        okul->numara=8;
        okul->ad="anadolu";
        okul->sinif.isim="semih";
        okul->sinif.bolum="fen";
        okul->sinif.no=3;
        
        cout<<okul->numara<<endl;
        cout<<okul->ad<<endl;
        cout<<okul->sinif.isim<<endl;
        cout<<okul->sinif.bolum<<endl;
        cout<<okul->sinif.no<<endl;
        
};
/*
    ~Okul(){
        
     };
*/
};

//<< ic ice yapilari tanimladik.

//>>yapici metoda Okul tipinde ptr yolladik yada dis metod da yazilabilir

/*
void goster(Okul* okul){
    cout<<okul->numara<<endl;
    cout<<okul->ad<<endl;
    cout<<okul->sinif.no<<endl;
    cout<<okul->sinif.bolum<<endl;
    cout<<okul->sinif.isim<<endl;
}
*/
// call by ref ile deger kopyaladik
/*
void degistirCallbyRef(Okul okul){
    okul.numara=7;
    cout<<endl<<okul.numara<<endl;
}
*/
// pass by ref ile deger gecirdik
/*
void degistirPassbyRef(Okul* okul){
   okul->numara=9;
   cout<<endl<<okul->numara<<endl<<endl;
}
*/

int main()
{
/*  
    Okul okul = 
    {
        5,"anadolu", //okul
        
        {
            "semih","fen",32 //sinif
        }
    };
*/
    
// yapilarimizin icine bilgileri yazdik
 
// nesne olusturup arguman olarak olusturdugumuz nesnenin adresini verdik
 
    Okul okul(&okul); 
    
// eger yapici metod ile yazdirmasak dis metodlarla da yazdirabiliriz
    
    // goster(&okul);
    
// metodumuza arguman olarak okul yapimizin adres bilgisini veriyoruz.

    // degistirCallbyRef(okul);
    
    // degistirPassbyRef(&okul);
    
    // goster(&okul);
    
      
    return 0;
}