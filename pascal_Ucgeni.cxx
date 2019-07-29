/*
Pascal üçgeninin istenen bir satırını ekrana yazdıran program.

Not: İlk satır 0.satır olarak geçmeli.

İpucu: Pascal üçgeninin n. satırını veren bağıntı Kombinasyon formülü ile bulunabilir.

Örneğin: 5 sayısını girdiğimizde ekrana yazılacak "1 5 10 10 5 1"
*/

#include <iostream>

using namespace std;

int main () {

// Formül: n! / ( k! * ( n - k )! )

    int n; 
    
    // n satır sayısını temsil ediyor. Kullanıcı girecek..

    long double n_Fak = 1;    
   
     // n sayısının faktöriyelini temsil ediyor.

    int k = 0;   
   
     // k sütun sayısını temsil ediyor.

    long double k_Fak= 1;  
    
    // k sayısının faktöriyelini temsil ediyor.

    long double nk_Fak = 1; 
    
    // ( n - k ) nın faktöriyelini temsil ediyor.

cout << "Pascal ucgeninde hangi satiri hesaplayalim? : ";

cin >> n ;   

// Satır sayısı 'n' dışarıdan isteniyor.

cout << endl << endl;

    for ( int j = n; j >=1; j-- ) {             
     
     // n faktöriyel hesaplama döngüsü

        n_Fak *= j ;

}

    for ( ; k <= n; k++ ) {         
    
    // Sütun döngüsüdür. 0.Sütundan başlar n.Sütuna kadar gider ve değerleri yazdırır.

        if ( (k==0) || (k==n) ) {    
        
        // 0.Sütun ile Sonuncu Sütun her zaman 1 dir.

            cout << "1" << "  " ;

            continue ;     
           
             // ilk ve son sütun 1 olduğu için ekrana 1 yazdıktan sonra aşağıdaki kodlara bakmadan döngü k++ işlemini uygulayarak başa döner.

        }

                for ( int j = k; j>=1; j-- ) {    
   
                 // k faktöriyel hesaplanır

                        k_Fak *= j ;

                }

                for ( int j = n-k; j >=1; j-- ) {   
   
                 // ( n - k ) faktöriyel hesaplanır

                        nk_Fak *= j;

                }

    cout << n_Fak / ( k_Fak * nk_Fak ) << "  ";
  
     // Tüm değerler hesaplandığına göre formül uygulanıp ekrana yazılır.

    k_Fak =1; 
 
    // k değeri 1 artıp sonraki sütun hesaplanacaktır bu yüzden bu değişkeni varsayılan olarak 1 yapıyoruz.

    nk_Fak =1; 

    // Üstteki işlem bu değişken içinde geçerlidir.

    }

cout << endl;

system ("pause");

return 0;

}