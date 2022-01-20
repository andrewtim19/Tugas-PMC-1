#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*KAMUS*/
    int A = 0;
    int B = 0;
    int i;

    /*ALGORITMA*/
    printf("Pilih perintah: \n");
    printf("1. Tuang A ke B \n");
    printf("2. Tuang B ke A \n");
    printf("3. Kosongkan A \n");
    printf("4. Kosongkan B \n");
    printf("5. isi A \n");
    printf("6. isi B \n");

    printf("Masukkan pilihan =");
    scanf("%d", &i);

    while (B == 4)
    {
        if (i==1)
        {
            if  (A + B > 5)
            {
                B = 5;
                A = (A + B) - 5;
                printf("%d", A); printf("%d", B);
            }
            else
                A = 0;
                B = A + B;
                printf("%d", A); printf("%d", B);
        }
    }


    return 0;
}
