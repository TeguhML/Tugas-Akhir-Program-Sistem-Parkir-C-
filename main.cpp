#include <iostream>

using namespace std;

int np,NP,jm,JM,mnt,MNT,tlt,TLT,wk,WK,ut,UT;
char plh,PLH,ct,CT,jenis,tb,TB,cd,CD;

    void jarak(){
    cout << "" << endl;
    }
    void eror(){
    cout << "===============================================" << endl;
    int a;
    a=0;
    while (a<3){
    cout << ">>>>>>>  Data yang anda  masukan  salah <<<<<<<"<< endl;
    a++;}
    cout << "===============================================" << endl;
    jarak();
    cout << ">> Mohon masukan kembali data secara benar << "  << endl;
    jarak();
    system("pause");
    system("cls");
    }

int main(){

int total1,total2,total3,total4;

int biaya[4];
biaya[0] = 2000;
biaya[1] = 5000;
biaya[2] = 1000;
biaya[3] = 2000;

string nama = "";
string kode = "";

    login:
	cout << " ------------- Masuk Sistem Parkir ----------- " << endl;
    cout << "=============================================== " << endl;
	jarak();
	cout << " >>>>>>> Username =  " ;
	cin >> nama;
	cout << " >>>>>>> Password =  " ;
    cin >> kode;
    cout << "_______________________________________________" << endl;

        if(nama == "ummi"||"UMMI" && kode == "12345"){
        jarak();
		cout << "______________Anda berhasil login______________"<< endl;
        cout << "===============================================" << endl;
        jarak();
		system("pause");
		system("cls");
		goto menu;
}
	    else{
        eror();
	 	goto login;
}
    system("cls");
    menu:
    cout << "--------------------Parkiran UMMI-----------------------" << endl;
    cout << " =======================================================" << endl;
    cout << " |                 Parkir Kendaraan                    |" << endl;
    cout << " ======================================================|" << endl;
    cout << " | Tarif biaya parkir motor = Rp.2.000,00 untuk 1 jam  |" << endl;
    cout << " | Tarif biaya parkir mobil = Rp.5.000,00 untuk 1 jam  |" << endl;
    cout << " | Tambahan biaya parkir motor = Rp.1.000,00/jam       |" << endl;
    cout << " | Tambahan biaya parkir mobil = Rp.2.000,00/jam       |" << endl;
    cout << " |=====================================================|" << endl;
    cout << " |=====================================================|" << endl;
    cout << " |-------------- 1. Masuk kendaraan      --------------|" << endl;
    cout << " |-------------- 2. Keluar kendaraan     --------------|" << endl;
    cout << " |-------------- 3. Logout               --------------|" << endl;
    cout << " |=====================================================|" << endl;
    cout <<  " Masukan pilihan [1,2,3] = " ;
    cin  >> plh;

        if (plh =='1'){
        system ("cls");
        masuk:
        cout << "____________________Masuk Kendaraan_____________________" << endl;
        cout << " =======================================================" << endl;
        cout << " | 1.Parkir motor                                       |" << endl;
        cout << " | 2.Parkir mobil                                       |" << endl;
        cout << " | 3.Kembali                                            |" << endl;
        cout << " |======================================================|" << endl;
        jarak();
        cout << " Masukan jenis kendaraan = ";
        cin >> PLH;

            if (PLH == '1'){
            data:
            jarak();
            cout << " ------------------Parkir untuk Motor-------------------" << endl;
            cout << " =======================================================" << endl;
            jarak();
            cout << " Masukan  no parkir = ";
            cin >> np;
            cout << " Masukan waktu dimulainya parkir ..... " << endl;
            cout << " Jam = ";
            cin >> jm ;
            cout << " Menit = ";
            cin >> mnt;
            cout << "________________________________________________________" << endl;
            cout << " Cetak data [Y/T} = " ;
            cin >> ct;
            system ("cls");

                if (ct=='Y'||ct=='y'){
                    if (jm<=24 && mnt<60){
                    int c =1;
                    tlt = jm+c;
                    }

                    else{
                    eror();
                    goto data;
                    }

                cout << " -------------Tiket Parkir----------------" << endl;
                cout << " =========================================" << endl;
                cout << "  No parkir         =    " << np << endl;
                cout << "  Parkir pada jam   =    " << jm << ":"  << mnt << endl;
                cout << "  batas parkir      =    " << tlt << ":"  << mnt << endl;
                cout << " =========================================" << endl;
                jarak();
                cout << " >>> Anda telah mecetak tiket parkir <<< " << endl;
                jarak();
                system ("pause");
                system ("cls");
                goto menu;

}               else{
                eror();
				goto masuk;
                }
}
            else if (PLH == '2'){
            DATA:
            cout << " ------------------Parkir untuk Mobil-------------------" << endl;
            cout << " =======================================================" << endl;
            jarak();
            cout << " Masukan no parkir = ";
            cin >> NP;
            cout << " Masukan waktu dimulainya parkir ..... " << endl;
            cout << " Jam = ";
            cin >> JM;
            cout << " Menit = ";
            cin >> MNT;
            cout << "________________________________________________________" << endl;
            cout << " Cetak data [Y/T} " ;
            cin >> CT;
            system ("cls");

                if (CT=='Y'||CT=='y'){
                    if (JM<=24 && MNT<60){
                    int C =1;
                    TLT = JM+C;
                    }
                    else{
                    eror();
                    goto DATA;
                    }

                cout << " -------------Tiket Parkir----------------" << endl;
                cout << " =========================================" << endl;
                cout << "  No parkir         =    " << NP << endl;
                cout << "  Parkir pada jam   =    " << JM << ":"  << MNT << endl;
                cout << "  Batas parkir      =    " << TLT << ":"  << MNT << endl;
                cout << " ==========================================" << endl;
                jarak();
                cout << " >>> Anda telah mecetak tiket parkir <<< " << endl;
                jarak();
                system ("pause");
                system ("cls");
                goto menu;
}
                else{
                eror();
				goto masuk;
                }
}
            else {
            system ("cls");
            goto menu;
            }
}
        else if (plh =='2'){
        system ("cls");
        keluar:
        cout << " ___________keluar Kendaraan______________"  << endl;
        cout << " |=======================================|" << endl;
        cout << " | 1.Cek biaya parkir motor              |" << endl;
        cout << " | 2.Cek biaya parkir mobil              |" << endl;
        cout << " | 3.Kembali                             |" << endl;
        cout << " |=======================================|" << endl;
        cout << " cek kendaraan  yang akan keluar{1/2/3] = ";
        cin >> jenis;

            if (jenis == '1'){
            jarak();
            cout << "   ------Biaya parkir motor------  " << endl;
            cout << " =========================================" << endl;
            cout << " Cek data motor yang akan keluar [Y/T] = ";
            cin >> cd;

                if (cd=='y'||cd=='Y'){
                jarak();
                cout << " =========================================" << endl;
                cout << " Cek no parkir   = " << np << endl;
                cout << " Cek batas waktu = " << tlt << ":" << mnt << endl;
                cout << " =========================================" << endl;
                jarak();
                cout << " Tambahan waktu parkir(jam) = ";
                cin >>  wk;
                cout << " Cek total biaya [Y/T]      = ";
                cin >> tb;

                total1 = biaya[0]+wk*biaya[2];
                    if (tb=='Y'||tb=='y'){
                    jarak();
                    cout << " =========================================" << endl;
                    cout << " Total biaya parkir = Rp." << total1<< endl;
                    cout << " =========================================" << endl;
                    cout << " Masukan uang  yang di terima = Rp. ";
                    cin >> ut;

                    total3 = ut-total1;
                        if(ut>=0){
                        jarak();
                        cout << " ----------------Transaksi----------------" << endl;
                        cout << " =========================================" << endl;
                        cout << " Uang yang diterima = Rp. " << ut <<  endl;
                        cout << " Biaya parkir       = Rp. " << total1 << endl;
                        cout << "___________________________________- " <<  endl;
                        cout << " Hasil              = Rp. " <<  total3 <<  endl;
                        cout << " =========================================" << endl;
                        jarak();
                        system("pause");
                        system("cls");
				        goto menu;
				        }

                        else {
                        jarak();
                        eror();
				        goto keluar;
				        }
  }
 }
}
            else if(jenis =='2') {
            cout << " ------Biaya parkir mobil------ = " << endl;
            cout << " =========================================" << endl;
            cout << " Cek data mobil yang akan keluar [Y/T] = ";
            cin >> CD;

                if (CD=='y'||CD=='Y'){
                jarak();
                cout << " =========================================" << endl;
                cout << " Cek no parkir = " << NP << endl;
                cout << " Cek batas waktu = " << TLT << ":" << MNT << endl;
                cout << " =========================================" << endl;
                jarak();
                cout << " Tambahan waktu parkir(jam) = ";
                cin >>  WK;
                cout << " Cek total biaya [Y/T] = ";
                cin >> TB;

                total2 = biaya[1]+WK*biaya[3];
                    if (TB=='Y'||TB=='y'){
                    jarak();
                    cout << " =========================================" << endl;
                    cout << " Total biaya parkir = Rp." << total2<< endl;
                    cout << " =========================================" << endl;
                    cout << " Masukan uang  yang di terima = Rp. ";
                    cin >> UT;

                    total4 = UT-total2;
                        if(ut>=0){
                        jarak();
                        cout << " =========================================" << endl;
                        cout << " uang yang diterima = Rp. " << UT <<  endl;
                        cout << " biaya parkir       = Rp. " << total2 << endl;
                        cout << "___________________________________- " <<  endl;
                        cout << " Hasil              = Rp. " <<  total4 <<  endl;
                        cout << " =========================================" << endl;
                        jarak();
                        system("pause");
                        system("cls");
				        goto menu;
                        }

                        else {
                        jarak();
                        eror();
				        goto keluar;
                        }

   }
  }
 }          else if (jenis=='3'){
            system("cls");
            goto menu;
            }

            else {
            jarak();
            eror();
            goto keluar;
            }

}
    else if (plh == '3'){
    system("cls");
    goto login;
    }

    else {
    system("cls");
    eror();
    goto menu;
    }
}


