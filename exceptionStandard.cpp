#include <iostream>
#include <exception>
//untuk obyek exceprion yang akan kita gunakan
#include <array>
//untuk objek array yang akan kita gunakan 
using namespace std ;
int main() {
    cout << "awal program" << endl; //penanda 1.....
    try {
        array<int, 3> data = {3, 5, 7};
        //pesan array integer 3 elemen 
        cout << data.at(2)<<endl;
        //memanggil array elemen ke 5
    }
    catch (exception& e) {
        //penangkapan menggunakan objek exception
        cout << e.what() << endl;
        /*akan dieksekusi karna data pada array hanyamemiliki 3 elemen*/
    }
    
    
}