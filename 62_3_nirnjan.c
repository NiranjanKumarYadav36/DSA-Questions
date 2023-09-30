/*Roll no: 62
  Batch: C
  Name: Niranjan Kumar Yadav
  Date:26/08/2023
  Description: progarmm id 3
*/

/* DISPLAYING RECORDS OF  5 STUDENTS USING ARRAY OF STRUCTURE IN ASCENDING ORDER OF ROLL LIST */

#include <stdio.h>
struct stuedents
{
    char name[20];
    int roll_no;
    float percentage;
} s[5], temp;
void main()
{

    printf("enter name,roll_no,percentage respetcively\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].percentage);
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            if (s[j].roll_no > s[j + 1].roll_no)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("name\t\troll_no\t\tpercentage\n");
    printf("------------------------------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\t\t %d\t\t %f\n ", s[i].name, s[i].roll_no, s[i].percentage);
    }
}
