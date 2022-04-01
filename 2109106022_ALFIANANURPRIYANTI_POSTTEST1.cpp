#include <iostream>
using namespace std;

//prosedur untuk user melakukan inputan 
void inputan(){
	 //mendeklarasikan tipe data dari n dan r adalah integer
    int n;  
    int r;

	cout << "\nMasukkan Nilai n: "; 	//meminta user menginput nilai n
	cin >> n;
	cout << "Masukkan Nilai r: "; 	//meminta user menginput nilai r
	cin >> r;  
    
	int pilih; 	//pilihan untuk user akan menghitung kombinasi atau permutasi
	cout << "\n -- Menu -- " << endl;
	cout << "1. Kombinasi" << endl;
	cout << "2. Permutasi" << endl;
	cout << "Masukkan Pilihan: ";
	cin >> pilih;
	
	int n_faktorial = 1; 		//deklarasi n!
	int nr_faktorial = 1;		//deklarasi (n-r)!
	int r_faktorial = 1;		//deklarasi r!
	
 	for(int i=n; i>0; i--){       //perulangan untuk hitungan n!
		n_faktorial = n_faktorial*i;
    }
    
    for(int i=n-r; i>0; i--){     //perulangan untuk hitungan (n-1)!
        nr_faktorial = nr_faktorial*i;
    }
         
    for(int i=r; i>0; i--){       //perulangan untuk hitungan r!
        r_faktorial = r_faktorial*i;
    }
    
    int kombinasi; //deklarasi tipe data kombinasi adalah integer
    int permutasi; //deklarasi tipe data permutasi adalah integer
    //rumus menghitung kombinasi
    kombinasi = n_faktorial/(nr_faktorial*r_faktorial);
	 
    //rumus menghitung permutasi
    permutasi = n_faktorial/nr_faktorial;
	
    if(pilih==1){  	
    	if (n < r){ 	// jika n < r maka user diminta menginput ulang
			cout << "\nNilai n harus lebih besar dari nilai r!" << endl;
			inputan ();
		}
		else{
			//menampilkan hasil perhitungan jika user memilih kombinasi
    		cout << "\nHasil Kombinasi dari " << n << " dan " << r << " adalah = " << kombinasi << endl;
		}
    }
 	else if(pilih == 2){
 		if (n < r){ 	// jika n < r maka user diminta menginput ulang
			cout << "\nNilai n harus lebih besar dari nilai r!" << endl;
			inputan ();
		}
		else{
		 	//menampilkan hasil perhitungan jika user memilih permutasi
	    	cout << "\nHasil Permutasi dari " << n << " dan " << r << " adalah = " << permutasi << endl;
    	}
	}
    else {
    	//menampilkan peringatan jika user menginput angka diluar pilihan menu
    	cout << "\nMenu tidak tersedia!" << endl;
	}
}
//fungsi main atau fungsi utama
int main() {
	char lagi = 'y';//mendeklarasikan tipe data dari variabel lagi adalah character
	int ulang = 0; //deklarasi dari variabel ulang adalah integer
	
	//menampilkan judul program
	cout << "------------------------------------------------" << endl;
	cout << "Program Menentukan Hasil Kombinasi dan Permutasi" << endl; 
	cout << "------------------------------------------------" << endl;

	//melakukan perulangan apakah user ingin menghitung lagi atau tidak
	while(lagi == 'y'){ 
		inputan();
		//y yang berarti yes atau n yang berarti no
		cout << "\n -- Apakah ingin menghitung lagi? [y/n] ";
		cin >> lagi; 
		
		//increment dari variabel ulang yang berarti perulangan bertambah apabila user menginput y 
		ulang++; 
	}
 	return 0;
}

