#include <stdio.h>
struct hotel
{
    char name[20];
    char add[20];
    int grade;
    int arc;
    int rooms;
};
void output();
void out();
struct hotel inn[] = {
    {"PLAZA", "G-99,DELHI", 3, 4500, 50},
    {"MYUR", "E-45,NOIDA", 4, 5000, 100},
    {"RAJDOOT", "H-44,DELHI", 2, 4000, 50},
    {"SAMRATH", "B-75,BOMBAY", 5, 6000, 200},
    {"SURYA", "A-77,NOIDA", 1, 3500, 150}};
int main()
{
    int go;
    printf("Enter 1 for grade search\n");
    printf("Enter 2 to search by charge:");
    scanf("%d", &go);
    switch (go)
    {
    case 1:
        output();
        break;
    case 2:
        out();
        break;
    default:
        printf("Wrong input");
        break;
    }
}
void output()
{
    int gr, i;
    printf("Enter Grade 1 to 5:");
    scanf("%d", &gr);
    if (gr >= 1 || gr <= 5)
    {
        for (i = 0; i <= 4; i++)
        {
            if (inn[i].grade == gr)
                printf("Hotel Name: %s\nAddress:%s\nGrade:%d\nAverage Room charge:%d\n\
Number of Rooms:%d",
                       inn[i].name, inn[i].add, inn[i].grade, inn[i].arc, inn[i].rooms);
        }
    }
    else
        printf("Wrong grade input!");
}
void out()
{
    int ch, i = 0;
    printf("Enter the Room charges not greater than 6000:");
    scanf("%d", &ch);
    while (i < 5)
    {
        if (inn[i].arc < ch)
            printf("Hotel Name: %s\nAddress:%s\nGrade:%d\nAverage Room charge:%d\n\
Number of Rooms:%d\n",
                   inn[i].name, inn[i].add, inn[i].grade, inn[i].arc, inn[i].rooms);
        i++;
    }
}
