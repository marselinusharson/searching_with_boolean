#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

void inputArray(int larik[], int size);
void showArray(int larik[], int n);
void showResult(bool result);
void mainHeader();
void programHeader(int number);
bool greatherThan(int array[], int size);
bool isSort(int array[], int size);

int main()
{
    int arr[100], maxSize, selectProgram;
    bool result;
    char backToMenu[1];

    do
    {
        mainHeader();
        printf("MENU\n 1.program 1\n 2.Program 2\nKlik (1/2) : ");
        scanf("%d", &selectProgram);
        switch (selectProgram)
        {
        case 1:
            programHeader(1);
            printf("Masukkan size array (minimal 1) : ");
            scanf("%d", &maxSize);
            inputArray(arr, maxSize);

            showArray(arr, maxSize);

            result = greatherThan(arr, maxSize);
            printf("\nResult : ");
            showResult(result);

            break;
        case 2:
            programHeader(2);
            printf("Masukkan size array (minimal 2) : ");
            scanf("%d", &maxSize);
            while (maxSize < 2)
            {
                printf("\n\tWARNING!!");
                printf("\nSize array minimal 2");
                printf("\nMasukkan ulang size array: ");
                scanf("%d", &maxSize);
            }

            inputArray(arr, maxSize);
            showArray(arr, maxSize);
            result = isSort(arr, maxSize);
            printf("Urutan = ");
            showResult(result);
            break;
        default:
            system("cls");
            mainHeader();
            printf("\nW A R N I N G!!");
            printf("\nInput salah");
        }
        printf("\n\nkembali ke menu (y/n)? ");
        scanf("%s", &backToMenu);
        system("cls");
    } while (*backToMenu == 'y' || *backToMenu == 'Y');

    return 0;
}

void mainHeader()
{
    printf("\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
    printf("\t\xb3     PROGRAM SEARCHING WITH BOOLEAN     \xb3\n");
    printf("\t\xb3                 OLEH                   \xb3\n");
    printf("\t\xb3         Marselinus Harson Rewo         \xb3\n");
    printf("\t\xc3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb4\n");
    printf("\t\xb3      Pemrograman dan Struktur Data     \xb3\n");
    printf("\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");
}

void programHeader(int number)
{
    system("cls");
    printf("SELAMAT DATANG DI PROGRAM %d\n\n", number);
    printf("Program ini akan ");
    switch (number)
    {
    case 1:
        printf("Mengecek apakah semua nilai dalam array of integer yang dimasukkan user\nlebih besar dari sebuah bilangan pembanding yang diinput\n\n");
        break;
    case 2:
        printf("Mengecek apakah nilai dalam array of integer yang dimasukkan user\nterurut dari nilai terkecil hingga nilai terbesar\n\n");
        break;
    }
}

void inputArray(int larik[], int size)
{
    int i;
    printf("input nilai setiap element array: \n");
    for (i = 1; i <= size; i++)
    {
        printf("element ke-%d: ", i);
        scanf("%d", &larik[i]);
    }
}
// procedure menampilkan elemen aray
void showArray(int larik[], int n)
{
    printf("Array yang diperoleh = ");
    printf("[");
    int i;
    for (i = 1; i <= n; i++)
    {
        if (i == n)
        {
            printf(" %d", larik[i]);
        }
        else if (i == 1)
        {
            printf("%d,", larik[i]);
        }
        else
        {
            printf(" %d,", larik[i]);
        }
    }
    printf("]");
}

void showResult(bool result)
{
    result == true ? printf("true") : printf("false");
}

bool greatherThan(int array[], int size)
{
    bool found = true;
    int comparisonNumber;
    int i = 1;

    printf("Masukkan bilangan pembanding: ");
    scanf("%d", &comparisonNumber);
    while ((i <= size) && (found == true))
    {
        (array[i] <= comparisonNumber) ? found = false : i++;
    }

    return found;
}
bool isSort(int array[], int size)
{
    bool cekVal = true;
    int i = 1;
    do
    {
        (array[i]) > (array[i + 1]) ? cekVal = false : i++;
    } while ((i < size) && (cekVal == true));

    return cekVal;
}
