#include <stdio.h>
#include <string.h>
int main() {
    // Dizi tanımını al
    printf("Dizi tanimi girin: ");
    char input[100];
    fgets(input, 100, stdin);
    // Dizi bilgilerini ayrıştır
    char type[20], name[20];
    int size = 0;
    sscanf(input, "%s %s", type, name);
    int i;
    for (i = 0; input[i]; i++) {
        if (input[i] == '[') {
            sscanf(input+i+1, "%d", &size);
            break;
        }
    }
    int offset;
    if (strcmp(type, "double") == 0) {
        printf("Dizi\n%s\nint\n0\n%d\n", type, size - 1);
        int index;
        printf("Erisilecek elemanin indeksini girin: ");
        scanf("%d", &index);
        offset= index * sizeof(double);
    }
    else if(strcmp(type,"long")==0){
        printf("Dizi\n%s\nint\n0\n%d\n", type, size - 1);
        int index;
        printf("Erisilecek elemanin indeksini girin: ");
        scanf("%d", &index);
        offset= index * sizeof(long);
    }
    else if(strcmp(type,"float")==0)
    {
        printf("Dizi\n%s\nint\n0\n%d\n", type, size - 1);
        int index;
        printf("Erisilecek elemanin indeksini girin: ");
        scanf("%d", &index);
        offset= index * sizeof(float);
    }
    else if(strcmp(type,"int")==0)
    {
        printf("Dizi\n%s\nint\n0\n%d\n", type, size - 1);
        int index;
        printf("Erisilecek elemanin indeksini girin: ");
        scanf("%d", &index);
        offset= index * sizeof(int);
    }
    else if(strcmp(type,"char")==0)
    {
        printf("Dizi\n%s\nint\n0\n%d\n", type, size - 1);
        int index;
        printf("Erisilecek elemanin indeksini girin: ");
        scanf("%d", &index);
        offset= index * sizeof(char);
    }
    else if(strcmp(type,"short")==0)
    {
        printf("Dizi\n%s\nint\n0\n%d\n", type, size - 1);
        int index;
        printf("Erisilecek elemanin indeksini girin: ");
        scanf("%d", &index);
        offset= index * sizeof(short);
    }
    else
    {
        printf("hatali");
        return 0;
    }
    printf("Elemanin ofseti: %d", offset);
    // Elemanın ofset değerini hesapla ve ekrana yazdır
    return 0;
}