#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char arr[]="hello xin chao";
    char Arr[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    long long length1 = strlen(arr);
    long long length2 = strlen(Arr);
    for(int i=0;i<length1;i++){
        if(i==0){
            for(int j=0;j<length2;j++){
                if(Arr[j]-'A'==arr[i]-'a'){
                    int temp=Arr[j];
                    Arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
        }else if(arr[i-1]==' '){
            for(int j=0;j<length2;j++){
                if(Arr[j]-'A'==arr[i]-'a'){
                    int temp=Arr[j];
                    Arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
        }
    }
    
    printf("%s\n",arr);
    return 0;
}
