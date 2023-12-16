#include<stdio.h>
#include<string.h>
#include<math.h>


typedef struct {
    char operator[4];
    double angka;
    double diskon;
    
    //kalau mau dibuat pakai a. defenisikan disini
}Kalkulator;

//operasi dasar
void dasar(Kalkulator A) {
    float Hasil = 0;
    int angkapertama = 0;
    do {
        if (angkapertama == 0) {
            printf("Masukkan Angka: ");
            scanf("%lf", &A.angka);
            Hasil = A.angka;
            angkapertama = 1;
        } else {
            printf("Masukkan operator: ");
            scanf(" %s", A.operator);
            
            if (strcmp(A.operator, "=") == 0) {
                printf("Hasil: %lf\n", Hasil);
                break;
            }
            
            printf("Masukkan Angka: ");
            scanf("%lf", &A.angka);
            
            
            if (strcmp(A.operator, "*") == 0) {
                Hasil *= A.angka;
            } else if (strcmp(A.operator, "/") == 0) {
                Hasil /= A.angka;
            } else if (strcmp(A.operator, "+") == 0) {
                Hasil += A.angka;
            } else if (strcmp(A.operator, "-") == 0) {
                Hasil -= A.angka;
            } else if (strcmp(A.operator, "^") == 0) {
                Hasil = pow(Hasil, A.angka);
            } else if (strcmp(A.operator, "|") == 0) {
                Hasil = fmod(Hasil, A.angka);
            }
        }
    } while (strcmp(A.operator, "=") != 0);
}
//akar
void akar (Kalkulator a) {
    double Hasil;
    char respond1;

    do{printf("Masukkan angka: ");
    scanf("%lf", &a.angka);

    Hasil = sqrt(a.angka);
    printf("Hasil akar kuadrat adalah = %.2lf\n", Hasil);

    printf("Ingin mencoba lagi? y/n: ");
    scanf(" %c", &respond1); 
   } while(respond1 == 'y');
}
//pangkat 
void PK (Kalkulator a) {
    int a1, a2,  n;
    char respond1;
    do{
    printf("Masukkan angka pertama: ");
    scanf("%d", &a1);

    printf("Masukkan angka kedua: ");
    scanf("%d", &a2);

    printf("Masukkan pangkat: ");
    scanf("%d", &n);

    int Hasil = a1 + a2;

    for (int i = 1; i < n; i++) {
        Hasil *= (a1 + a2);
    }
    printf("Hasil: %d\n", Hasil);

    printf("Ingin mencoba lagi? y/n: ");
    scanf(" %c", &respond1); 
   } while(respond1 == 'y');
}

//suhu
void suhu(Kalkulator a){
    int respond;
    char respond1;
    double hasil;

    do{         
            printf("terdapat beberapa konversi : \n");
            printf("1. konversi celcius\n");
            printf("2. konversi reaumur\n");
            printf("3. konversi faranheid\n");
            printf("pilih konversi : ");
            scanf("%d", &respond);

            if(respond == 1){
            printf("Masukkan suhu(dalam celcius): ");
            scanf("%lf", &a.angka);

            printf("masukkan operator : ");
            scanf(" %s", &a.operator);

            switch(a.operator[0]){
                case 'f':
                hasil = (a.angka * 9 / 5 )+ 32;
                break;

                case 'r':
                hasil = a.angka * 4 / 5; 
                break;
            }

            printf("hasil = %lf\n", hasil);

        }else if(respond == 2){
            printf("Masukkan suhu(dalam reaumur): ");
            scanf("%lf", &a.angka);

            printf("masukkan operator : ");
            scanf(" %s", &a.operator);

            switch(a.operator[0]){
                case 'f':
                hasil = (a.angka * 9 / 4 )+ 32;
                break;

                case 'c':
                hasil = a.angka * 5 / 4; 
                break;
            }

            printf("hasil = %lf\n", hasil);

        }else if(respond == 3){
            printf("Masukkan suhu(dalam faranheid): ");
            scanf("%lf", &a.angka);

            printf("masukkan operator : ");
            scanf(" %s", &a.operator);

            switch(a.operator[0]){
                case 'c':
                hasil = (a.angka - 32) * 5 / 9 ;
                break;

                case 'r':
                hasil = (a.angka - 32) * 4 / 9 ; 
                break;
            }

            printf("hasil = %lf\n", hasil);
        }

        printf(" ingin mencoba lagi? y/n : ");
        scanf(" %c", &respond1);
    }while(respond1 == 'y');

}

//logaritma
void Logaritma(Kalkulator a) {
    char respond1;
    int respond;

    do {printf("terdapat beberapa konversi\n ");
            printf("1. logaritma Natural\n");
            printf(" 2. Logaritma basis 10\n");
            printf("pilih konversi : ");
            scanf("%d", &respond);
        
        if(respond == 1) {
        printf("Masukkan angka: ");
        scanf("%lf", &a.angka);

        float Hasil = log(a.angka);
        printf("Hasil Logaritma adalah: %.2f\n", Hasil);
       
        }

        else if(respond == 2){
        printf("Masukkan angka: ");
        scanf("%lf", &a.angka);

        float Hasil = log10(a.angka);
        printf("Hasil Logaritma adalah: %.2f\n", Hasil);
        }


    printf("Ingin mencoba lagi? y/n: ");
    scanf(" %c", &respond1);
    }while(respond1 == 'y');

}
//Logaritma
void persenDiskon(Kalkulator A) {
    char respond1;
    do {
    printf("Masukkan harga awal: Rp.");
    scanf("%lf", &A.angka);
    printf("Masukkan persen diskon: ");
    scanf("%lf", &A.diskon);

    printf("Harga Awal : Rp. %.lf\n",A.angka);
    printf("Harga Akhir: Rp.%.lf\n",A.angka - (A.angka * (A.diskon / 100)));
    printf("Anda Hemat : Rp.%.lf\n",A.angka * (A.diskon / 100));

    printf("Ingin mencoba lagi? y/n: ");
    scanf(" %c", &respond1);
    }while(respond1 == 'y');

}
//Trigonometri
void trigonometri(Kalkulator A) {
    char respond1;
    double sudut;
    do{
        printf("Masukkan sudut dalam derajat: ");
        scanf("%lf", &sudut);

        double radian = sudut * 3.14159265358979323846 / 180.0;
        /*double radian = sudut * (M_PI / 180.0);*/
        double h_sin = sin(radian);
        double h_cos = cos(radian);
        double h_tan = tan(radian);
        double h_sec = 1 / h_cos;
        double h_cosec = 1 / h_sin;
        double h_cotan = 1 / h_tan;
        double h_acos = acos(h_cos) * 180.0 / M_PI;
        double h_asin = asin(h_sin) * 180.0 / M_PI;
        double h_atan = atan(h_tan) * 180.0 / M_PI;

        printf("Sinus dari %.2lf derajat adalah %.4lf\n", sudut, h_sin);
        printf("cosinus dari %.2lf derajat adalah %.4lf\n", sudut, h_cos);
        printf("Tangen dari %.2lf derajat adalah %.4lf\n", sudut, h_tan);
        printf("Secan dari %.2lf derajat adalah %.4lf\n", sudut, h_sec);
        printf("Cosec dari %.2lf derajat adalah %.4lf\n", sudut, h_cosec);
        printf("Cotan dari %.2lf derajat adalah %.4lf\n", sudut, h_cotan);
        printf("Arc Sinus dari %.2lf adalah %.4lf derajat\n", h_sin, h_asin);
        printf("Arc Cosinus dari %.2lf adalah %.4lf derajat\n", h_cos, h_acos);
        printf("Arc Tangen dari %.2lf adalah %.4lf derajat\n", h_tan, h_atan);

        printf("Ingin mencoba lagi? y/n: ");
        scanf(" %c", &respond1);   
    } while(respond1 == 'y');
}
//faktorial
int faktorial(int n) {
    if (n == 0)
    return 1;
    else return n * faktorial (n - 1);
}
//peluang
void peluang(Kalkulator a) {
    int n, r;
    char respond1;
    do{
    printf("masukkan nilai n: ");
    scanf("%d", &n);
    printf("Masukkan nilai r: ");
    scanf("%d", &r);

    if(n < r) {
        printf("Nilai n harus lebih besar atau sama dengan nilai r");
    } else {
        int kombinasi = faktorial(n) / (faktorial(r) * faktorial(n - r));
        int permutasi = faktorial(n) / faktorial(n - r);

        printf("Hasil faktorialnya adalah = %d\n", faktorial(n));
        printf("Kombinasi C(%d, %d) = %d\n", n, r, kombinasi);
        printf("Permutasi P(%d, %d) = %d\n", n, r, permutasi);

        printf("Ingin mencoba lagi? y/n: ");
        scanf(" %c", &respond1); }  
    } while(respond1 == 'y');
}

    

//Sisa Bagi (Modulo)
void Modulo(Kalkulator a) {
    int angka1, angka2;
    char respond1;

   do{printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);
    printf("Masukkan angka kedua: ");
    scanf("%d", &angka2);

    int hasil = angka1 % angka2;
    printf("Hasil Modulo = %d\n", hasil);

    printf("Ingin mencoba lagi? y/n: ");
    scanf(" %c", &respond1); 
   } while(respond1 == 'y');
}

//Konversi Jarak
void jarak(Kalkulator a) {
    double hasil;
    int respond1;
    char operator1[4];

    do {printf("Terdapat beberapa konversi:\n");
    printf("1. Konversi Kilometer\n");
    printf("2. Konversi Hektometer\n");
    printf("3. Konversi Dekameter\n");
    printf("4. Konversi Meter\n");
    printf("5. Konversi Desimeter\n");
    printf("6. Konversi centimeter\n");
    printf("7. Konversi Milimeter\n");
    printf("Pilih konversi: ");
    scanf("%d", &respond1);


     if (respond1 == 1) {
        printf("Masukkan angka: ");
        scanf("%lf", &a.angka);

        printf("Masukkan satuan awal: ");
        scanf(" %s", a.operator);

        if (strcmp(a.operator, "km") == 0) {
            hasil = a.angka;
        } else if (strcmp(a.operator, "hm") == 0) {
            hasil = a.angka / 10;
        } else if (strcmp(a.operator, "dam") == 0) {
            hasil = a.angka / 100;
        } else if (strcmp(a.operator, "m") == 0) {
            hasil = a.angka / 1000;
        } else if (strcmp(a.operator, "dm") == 0) {
            hasil = a.angka / 10000;
        } else if (strcmp(a.operator, "cm") == 0) {
            hasil = a.angka / 100000;
        } else if (strcmp(a.operator, "mm") == 0) {
            hasil = a.angka / 1000000;
        } else {
            printf("Operator tidak valid.\n");
            return;  
        }
        printf("%.2lf %s sama dengan %.2lf Kilometer\n", a.angka, a.operator, hasil);
    } 
     else if (respond1 == 2) {
        printf("Masukkan angka: ");
        scanf("%lf", &a.angka);

        printf("Masukkan satuan awal: ");
        scanf(" %s", a.operator);

        if (strcmp(a.operator, "km") == 0) {
            hasil = a.angka * 10;
        } else if (strcmp(a.operator, "hm") == 0) {
            hasil = a.angka;
        } else if (strcmp(a.operator, "dam") == 0) {
            hasil = a.angka / 10;
        } else if (strcmp(a.operator, "m") == 0) {
            hasil = a.angka / 100;
        } else if (strcmp(a.operator, "dm") == 0) {
            hasil = a.angka / 1000;
        } else if (strcmp(a.operator, "cm") == 0) {
            hasil = a.angka / 10000;
        } else if (strcmp(a.operator, "mm") == 0) {
            hasil = a.angka / 100000;
        } else {
            printf("Operator tidak valid.\n");
            return;  
        }
        printf("%.2lf %s sama dengan %.2lf Hektometer\n", a.angka, a.operator, hasil);
    }  else if (respond1 == 3) {
        printf("Masukkan angka: ");
        scanf("%lf", &a.angka);

        printf("Masukkan satuan awal: ");
        scanf(" %s", a.operator);

        if (strcmp(a.operator, "km") == 0) {
            hasil = a.angka * 100;
        } else if (strcmp(a.operator, "hm") == 0) {
            hasil = a.angka * 10;
        } else if (strcmp(a.operator, "dam") == 0) {
            hasil = a.angka;
        } else if (strcmp(a.operator, "m") == 0) {
            hasil = a.angka / 10;
        } else if (strcmp(a.operator, "dm") == 0) {
            hasil = a.angka / 100;
        } else if (strcmp(a.operator, "cm") == 0) {
            hasil = a.angka / 1000;
        } else if (strcmp(a.operator, "mm") == 0) {
            hasil = a.angka / 10000;
        } else {
            printf("Operator tidak valid.\n");
            return;  
        }
        printf("%.2lf %s sama dengan %.2lf Dekameter\n", a.angka, a.operator, hasil);
    } 

    else if (respond1 == 4) {
        printf("Masukkan angka: ");
        scanf("%lf", &a.angka);

        printf("Masukkan Satuan awal: ");
        scanf(" %s", a.operator);

        if (strcmp(a.operator, "km") == 0) {
            hasil = a.angka * 1000;
        } else if (strcmp(a.operator, "hm") == 0) {
            hasil = a.angka * 100;
        } else if (strcmp(a.operator, "dam") == 0) {
            hasil = a.angka * 10;
        } else if (strcmp(a.operator, "m") == 0) {
            hasil = a.angka;
        } else if (strcmp(a.operator, "dm") == 0) {
            hasil = a.angka / 10;
        } else if (strcmp(a.operator, "cm") == 0) {
            hasil = a.angka / 100;
        } else if (strcmp(a.operator, "mm") == 0) {
            hasil = a.angka / 1000;
        } else {
            printf("Operator tidak valid.\n");
            return;  
        }

        printf("%.2lf %s sama dengan %.2lf meter\n", a.angka, a.operator, hasil);
    }
    else if (respond1 == 5) {
        printf("Masukkan angka: ");
        scanf("%lf", &a.angka);

        printf("Masukkan Satuan awal: ");
        scanf(" %s", a.operator);

        if (strcmp(a.operator, "km") == 0) {
            hasil = a.angka * 10000;
        } else if (strcmp(a.operator, "hm") == 0) {
            hasil = a.angka * 1000;
        } else if (strcmp(a.operator, "dam") == 0) {
            hasil = a.angka * 100;
        } else if (strcmp(a.operator, "m") == 0) {
            hasil = a.angka * 10;
        } else if (strcmp(a.operator, "dm") == 0) {
            hasil = a.angka;
        } else if (strcmp(a.operator, "cm") == 0) {
            hasil = a.angka / 10;
        } else if (strcmp(a.operator, "mm") == 0) {
            hasil = a.angka / 100;
        } else {
            printf("Operator tidak valid.\n");
            return;  
        }

        printf("%.2lf %s sama dengan %.2lf Desimeter\n", a.angka, a.operator, hasil);
    }
    else if (respond1 == 6) {
        printf("Masukkan angka: ");
        scanf("%lf", &a.angka);

        printf("Masukkan Satuan awal: ");
        scanf(" %s", a.operator);

        if (strcmp(a.operator, "km") == 0) {
            hasil = a.angka * 100000;
        } else if (strcmp(a.operator, "hm") == 0) {
            hasil = a.angka * 10000;
        } else if (strcmp(a.operator, "dam") == 0) {
            hasil = a.angka * 1000;
        } else if (strcmp(a.operator, "m") == 0) {
            hasil = a.angka * 100;
        } else if (strcmp(a.operator, "dm") == 0) {
            hasil = a.angka * 10;
        } else if (strcmp(a.operator, "cm") == 0) {
            hasil = a.angka;
        } else if (strcmp(a.operator, "mm") == 0) {
            hasil = a.angka / 10;
        } else {
            printf("Operator tidak valid.\n");
            return;  
        }
        printf("%.2lf %s sama dengan %.2lf centimeter\n", a.angka, a.operator, hasil);
    }
    else if (respond1 == 7) {
        printf("Masukkan angka: ");
        scanf("%lf", &a.angka);

        printf("Masukkan Satuan awal: ");
        scanf(" %s", a.operator);

        if (strcmp(a.operator, "km") == 0) {
            hasil = a.angka * 1000000;
        } else if (strcmp(a.operator, "hm") == 0) {
            hasil = a.angka * 100000;
        } else if (strcmp(a.operator, "dam") == 0) {
            hasil = a.angka * 10000;
        } else if (strcmp(a.operator, "m") == 0) {
            hasil = a.angka * 1000;
        } else if (strcmp(a.operator, "dm") == 0) {
            hasil = a.angka * 100;
        } else if (strcmp(a.operator, "cm") == 0) {
            hasil = a.angka * 10;
        } else if (strcmp(a.operator, "mm") == 0) {
            hasil = a.angka;
        } else {
            printf("Operator tidak valid.\n");
            return;  
        }
        printf("%.2lf %s sama dengan %.2lf Milimeter\n", a.angka, a.operator, hasil);
    }
    
    else {
        printf("Pilihan tidak valid.\n");
    }
    printf("Ingin mencoba lagi? y/n: ");
    scanf(" %c", &respond1); 
   } while(respond1 == 'y');
}
int main(){
    Kalkulator a;
    char respond;
    int respond1;
    char respond2;

    do{     
        printf("Tersedia beberapa kalkulator :\n ");
        printf("1. Kalkulator Dasar\n ");
        printf("2. Kalkulator Suhu\n");
        printf(" 3. Kalkulator Logaritma\n");
        printf(" 4. Kalkulator Diskon\n");
        printf(" 5. Kalkulator Trigonometri\n ");
        printf("6. Kalkulator Peluang\n");
        printf(" 7. Kalkulator Modulo\n");
        printf(" 8. Kalkulator Jarak\n");
        printf("Pilih kalkulator: ");
        scanf("%d", &respond1);

        if(respond1 == 1){
           
                printf("\n >> Kalkulator Dasar <<\n");
                printf("Ada beberapa pilihan yang tersedia:\n ");
                printf("a. Kalkulator Aritmatika\n");
                printf(" b. Kalkulator Akar Kuadrat\n");
                 printf(" c. Kalkulator pangkat Lanjutan\n");
                printf("Pilih yang anda butuhkan: ");
                scanf(" %c", &respond2);
                switch(respond2) {
                    case 'a': {
                    dasar(a);
                    break;}
                    case 'b': {
                    akar(a);}
                    case 'c': {
                    PK(a);
                    }
                    break;
                    }
        }else if(respond1 == 2){
            printf("\n >> Kalkulator Suhu <<\n");
            suhu(a);
        }else if(respond1 == 3) {
            printf("\n >> Kalkulator Logaritma <<\n");
            Logaritma(a);
        }else if(respond1 == 4) {
            printf("\n >> Kalkulator Diskon <<\n");
            persenDiskon(a);
        }else if(respond1 == 5) {
            printf("\n >> Kalkulator Trigonometri <<\n");
            trigonometri(a);
        }else if(respond1 == 6) {
            printf("\n >> Kalkulator Peluang <<\n");
            peluang(a);
        }else if(respond1 == 7) {
            printf("\n >> Kalkulator Modulo <<\n");
            Modulo(a);
        }else if(respond1 == 8) {
            printf("\n >> Kalkulator Konversi jarak <<\n");
            jarak(a);
        }
        printf("ingin mencoba kalkulator lain? y/n : ");
        scanf(" %c", &respond);
    } while(respond == 'y');
    return 0;
}
