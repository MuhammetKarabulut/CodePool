#include <iostream>

using namespace std;

int cikis(){
        char cik ;
        cout<<"Programdan çıkmak istiyor musunuz? (e/h): "<<endl;
        cin>>cik;
        if (cik == 'h')
            return 0;
}
    
int main(){
    head:
    setlocale(LC_ALL,"Turkish");
    
    
    
    float f,k,c,derece;
    int sec;
    cout<<endl<<"***** SICAKLIK BİRİM DÖNÜŞTÜRÜCÜ *****"<<endl<<endl;
    cout<<"1.(°Celcius to °Fahrenheit);"<<endl;
    cout<<"2.(°Celcius to °Kelvin);"<<endl;
    cout<<"3.(°Kelvin to °Fahrenheit);"<<endl;
    cout<<"4.(°Kelvin to °Celcius);"<<endl;
    cout<<"5.(°Fahrenheit to °Kelvin);"<<endl;
    cout<<"6.(°Fahrenheit to °Celcius);"<<endl;
    cout<<endl<<endl;
    
    cout<<endl<<"Lütfen dönüştürmek için seçim yapınız (1-6):";
    cin>>sec;
    
    switch (sec){
        case 1:
        cout<<endl<<"°C derece cinsinden giriniz : ";
        cin>>derece;
        c=derece;
        f = (c * 1.8000) + 32.0;
        cout<<endl<<derece<<"°C Celcius derece = "<<f<<"°F Fahrenheit"<<endl;
        break;
        case 2:
        cout<<endl<<"°C derece cinsinden giriniz : ";
        cin>>derece;
        c=derece;
        k = c + 273.15;
        cout<<endl<<derece<<"°Celcius derece = "<<k<<"°Kelvin"<<endl;
        break;
        case 3:
        cout<<endl<<"°K derece cinsinden giriniz : ";
        cin>>derece;
        k=derece;
        f = (k - 273.15) * 1.8000 + 32.00;
        cout<<endl<<derece<<"°Kelvin derece = "<<f<<"°Fahrenheit"<<endl;
        break;    
        case 4:
        cout<<endl<<"°K derece cinsinden giriniz : ";
        cin>>derece;
        k=derece;
        c = k - 273.15;
        cout<<endl<<derece<<"°K Kelvin derece = "<<c<<"°C Celcius"<<endl;
        break;  
        case 5:
        cout<<endl<<"°F derece cinsinden giriniz : ";
        cin>>derece;
        f=derece;
        k = ((f - 32.0) / 1.8000) + 273.15;
        cout<<endl<<derece<<"°F Fahrenheit derece = "<<k<<"°K Kelvin"<<endl;
        break;  
        case 6:
        cout<<endl<<"°F derece cinsinden giriniz : ";
        cin>>derece;
        f=derece;
        c = (f - 32.0) / 1.8000;
        cout<<endl<<derece<<"°F Fahrenheit derece = "<<c<<"°C Celcius"<<endl;
        break;
        default:
        cout<<endl<<"Geçersiz bir giriş yaptınız!"<<endl;cikis();
        cout<<endl<<"Lütfen tekrar deneyiniz!"<<endl;
        cout<<"--------------------------------"<<endl;
        goto head;
    }
}