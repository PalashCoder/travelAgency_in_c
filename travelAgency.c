#include <stdio.h>
#include <string.h>
typedef struct agency
{
    char name[20];
    char license_No[15];
    char route[50];
    float distrance;
} list;
void enterDetails(list *drivers, int n)
{
    int a;
    for (int i = 0; i < n; i++)
    {
        getchar();
        printf("Please Enter Driver %d Name: ", i + 1);
        scanf("%s", drivers[i].name);
        getchar();
        printf("Please Enter Driver %d License No: ", i + 1);
        scanf("%s", drivers[i].license_No);
        printf("Please Enter Driver %d route: ", i + 1);
        scanf("%s", drivers[i].route);
        printf("Please Enter Driver %d distrance[in kms]: ", i + 1);
        scanf("%.2f", drivers[i].distrance);
        getchar();
        getchar();
    }
    getchar();
    printf("Do You Want to Print All entered drivers details on screen [y=1/n=0] : ");
    scanf("%d",&a);
    if (a==1)
    {
        for (int i = 0; i < n; i++)
        {
            printf("\nDriver %d Details are mentioned Below ----\n", i + 1);
            printf("\nDriver %d Name is : %s", i + 1, drivers[i].name);
            printf("\nDriver %d License No is : %s", i + 1, drivers[i].license_No);
            printf("\nDriver %d Route is : %s", i + 1, drivers[i].route);
            printf("\nDriver %d Driven Distrance is : %.2f", i + 1, drivers[i].distrance);
        }
    }
    else{
        printf("Exited...");
        printf("%d",a);
    }
}
int main()
{
    int n;
    list driver[n];
    printf("Enter total driver number to Input Details and 0 to exit : ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Exiting...");
    }
    else
        enterDetails(driver, n);
    return 0;
}
//collecting random values or garvage values