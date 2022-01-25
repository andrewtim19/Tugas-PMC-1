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

    while (B != 4)
    {
        printf("Masukkan pilihan =");
        scanf("%d", &i);
        if (i==1)
        {
            if  (A + B >= 5)
            {
                A = (A + B) - 5;
                B = 5;
                printf("%d", A); printf("%d", B);
            }
            else
            {
                B = A + B;
                A = 0;
                printf("%d", A); printf("%d", B);
            }
        }
        else if (i==2)
        {
            if (B+A >= 3)
            {
                B = B-(3-A);
                A = 3;
                printf("%d", A); printf("%d", B);
            }
            else
            {
                A = A + B;
                B = 0;
                printf("%d", A); printf("%d", B);

            }

        }
        else if (i==3)
        {
            A = 0;
            printf("%d", A); printf("%d", B);
        }
        else if (i==4)
        {
            B = 0;
            printf("%d", A); printf("%d", B);
        }
        else if (i==5)
        {
            A = 3;
            printf("%d", A); printf("%d", B);
        }
        else if (i==6)
        {
            B = 5;
            printf("%d", A); printf("%d", B);
        }
        else
        {
            printf("nomor yang dimasukkan tidak ada \n");
        }
    }


    return 0;
}
