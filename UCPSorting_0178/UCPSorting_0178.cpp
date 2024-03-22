//nomor 1
//algoritma bubblesort membandingkan nilai dengan cara melihat besar nilai yang ada di kiri dengan nilai yang di kanannya jika nilainya di kiri lebih besar dia akan menukarnya dengan yang di kanan tetapi jika nilai di kiri lebih lebih  kecil dia akan melanjutkanke nilai yang selanjutnya 
//nomor 2
//algoritma shell sort membandingkan dengan cara mencari dulu nilai terkecil baru dia akan mengurutkannya
//nomor 3
//lebih baik menggunakan shell sort karena dia hanya mengurutkan jadi jika ada nilai yang sudah sama dia hanya akan mengurutkan yang belum berurutan 





#include <iostream>
using namespace std;

int salsa[78];  
int n;      

void input() {      
    while (true) {  
        cout << "Masukan Banyaknya elemen pada array : "; 
        cin >> n;       
        if (n <= 78)    
            break;      
        else {          
            cout << "\nArray dapat mempunyai maksimal 78 elemen.\n";  
        }
    }
    cout << endl;                           
    cout << "====================" << endl; 
    cout << "Masukan Elemen Array" << endl; 
    cout << "====================" << endl; 

    for (int i = 0; i < n; i++) {               
        cout << "Data ke- " << (i + 1) << ": ";  
        cin >> salsa[i];                            
    }
}

void display() {
    cout << endl;
    cout << "================================" << endl; 
    cout << "Elemen Array yang telah tersusun" << endl; 
    cout << "================================" << endl; 
    for (int j = 0; j < n; j++) {                        
        cout << "Data ke- " << (j + 1) << ": ";                          
        cout << salsa[j] << endl;                          

    }
    cout << endl;                                       
}

void deklarasiarray() {                    
    for (int i = 1; i < n; i++) {           
        for (int j = 0; j < n - 2; j++) {   
            if (salsa[j] > salsa[j + 1]) {          
                int temp = salsa[j];           
                salsa[j] = salsa[j + 1];            
                salsa[j + 1] = temp;            
            }
        }
    }
}
int main() {
    input();           
    deklarasiarray();  
    display();         
    return 0;
}