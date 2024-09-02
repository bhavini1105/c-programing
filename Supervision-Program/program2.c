#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float chem_marks;
    float maths_marks;
    float phy_marks;
};

int main() {

    int n;

    printf("Enter Numbers Of Students :");
    scanf("%d",&n);

    struct Student students[n];
    int i;
    
    for (i = 0; i < n; i++) {
        printf("Enter details for Student :%d\n", i + 1);
        
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        
        printf("Name: ");
        scanf("%s", students[i].name);
        
        printf("Chemistry Marks (out of 100): ");
        scanf("%f", &students[i].chem_marks);
        
        printf("Mathematics Marks (out of 100): ");
        scanf("%f", &students[i].maths_marks);
        
        printf("Physics Marks (out of 100): ");
        scanf("%f", &students[i].phy_marks);
        
        printf("\n");
    }
    
   
    for (i = 0; i < n; i++) {
        float total = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        float percentage = total / 3;
        
        printf("%s (%d)\n", students[i].name, students[i].roll_no);
        printf("Chemistry => %.0f\n", students[i].chem_marks);
        printf("Mathematics => %.0f\n", students[i].maths_marks);
        printf("Physics => %.0f\n", students[i].phy_marks);
        printf("Total => %.0f/300\n", total);
        printf("Percent => %.2f%%\n\n", percentage);
    }

    return 0;
}