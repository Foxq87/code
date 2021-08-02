#include <stdio.h>
#include <conio.h>
#include <math.h>
 
void giris(){
    printf("Hogeldiniz Sorulari Bahsedilen Rakamlar ile Cevaplayiniz\n\n");
            }
int cevap,amcm,kk,ak,ck,amcm2,amcm3,r,cu,ku1,ku2,ku3,tu,yu;
float ad,cd,au;

int main(){
        
    giris();
    
        printf("[1]-Kare \t [2]-Ucgen\t [3]-Daire\n");
        scanf("%d",&cevap);
    
    switch(cevap)
    {
        case 1:
            printf("karenin bir kenar uzunlugu kac cm olsun?\n");
            scanf("%d",&kk);        
            printf("[1]-Alani Hesapla\t[2]-Cevreyi Hesapla\n");
            scanf("%d",&amcm);
                             
            switch(amcm)
            {       
                case 1:     
                    ak = kk*kk;     
                    printf("Karenin Alani :%d\n\n",ak);
                break;
            
                case 2:                         
                    ck = kk*4;
                    printf("Karenin Cevre Uzunlugu :%d\n\n",ck);
                break;          
                    
                default:  
                    printf("Lutfen Gecerli Bir Sayi Giriniz\n\n");
                break;
            }    
        break;  
    
        case 2:
    
            
            printf(" [1]-Alani Hesapla\t[2]-Cevreyi Hesapla\n");
            scanf("%d",&amcm2); 
        
            switch(amcm2)
            {
            case 1:

                printf("Ucgenin Taban Uzunlugunu Yaziniz\n");
                scanf("%d",&tu);
                printf("Ucgenin Yuksekligini Yaziniz\n");
                scanf("%d",&yu);
            
                au = tu*yu/2;
            
                printf("Ucgenin Alani :%.2f\n\n",au);
            break;

            case 2:
        
                printf("Ucgenin Kenar Uzunluklarini Yaziniz\n");
                scanf("%d %d %d",&ku1,&ku2,&ku3);
                cu = ku1+ku2+ku3;
                printf("Ucgenin Cevresi :%d\n\n",cu);//burasi ucgen olma kurallarina aykiri ama olsun...
            break;
        
            default:
                printf("Lutfen Gecerli Bir Sayi Giriniz");
            break;
            }
    break;

    case 3:
    
        
        printf("Dairenin Yaricap Uzunlugunu yaziniz (pi=3)\n");
        scanf("%d",&r);
        
        ad = 3.14*r*r;
        cd = 2*3.14*r;
        
        printf("[1]-Dairenin Alani\t[2]-Dairenin Cevresi\n");
        scanf("%d",&amcm3);
        
        switch(amcm3)
        {
            case 1:
                printf("Dairenin Alani :%.2f\n",ad);
            break;

            case 2:
                printf("Dairenin Cevresi :%.2f\n",cd);
            break;

            default:
                printf("Lutfen Gecerli Bir Sayi Yaziniz\n");
           break;
        }           
    break;
}       return main();
}
