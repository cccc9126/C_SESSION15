#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char a[]="";
    printf("Hay nhap chuoi bat ki : ");
    fgets(a, 100, stdin);
    int len=strlen(a)-1;
    int kyTu=0;
    int soDem=0;
    int kiTuDacBiet=0;
    for(int i =0;i<len;i++){
        if(a[i]-'a'>=-32 && a[i]-'a'<=-7 || a[i]-'a'>=0 && a[i]-'a'<=25){
            kyTu++;
        }else if(-39>a[i]-'a'&&a[i]-'a'>-50){
            soDem++;
        }
    }
    kiTuDacBiet = len - kyTu-soDem;
    printf("so ky tu trong chuoi la : %d\nso so dem trong chuoi la : %d\nso ky tu dac biet trong chuoi la : %d", kyTu,soDem, kiTuDacBiet);
    
    return 0;
}
