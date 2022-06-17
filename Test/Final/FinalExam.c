#include <stdio.h>
#include <stdlib.h>
# define SIZE 81


struct FinalExam{
    /* data */
    char *name;
    int MidGrade;
    int FinalGrade

};

void display(struct FinalExam f1){
    printf("Name: %s, MidTerm Grade: %d, Final Grade: %d", f1.name, f1.MidGrade, f1.FinalGrade);
}

int main()
{
    /* code */
    // create an arrat of struct
    // You can also dynamically allocate size of the array:
    //  https://www.learn-c.org/en/Arrays_and_Pointers
    
    // Student details for the array
    char name1[SIZE];
    int MidGrade;
    int FinalGrade;

    // Create object
    struct FinalExam f1;
    f1.name = "Daniel";
    f1.MidGrade = 90;
    f1.FinalGrade = 85;



    // Display values
    display(f1);

    // Ask how many students there are
    int amountOfStudents;
    printf("\n\nHow many students are there? ");
    scanf("%d", &amountOfStudents);
    struct FinalExam array[amountOfStudents];

    


    printf("%d.....%s", amountOfStudents, name1);


    // for(int i=1; i<=amountOfStudents; ++i){
                printf("Name of student: ");
        while ((getchar()) != '\n');
        fgets(name1, SIZE, stdin);
    
        
    //     printf("\nMidTerm Grade of student_%d: ", i);
    //     scanf("%d", &MidGrade);
    //     printf("\nFinal Grade of student_%d: ", i);
    //     scanf("%d", &FinalGrade);

    //     array[i].name = name1;
    //     array[i].MidGrade = MidGrade;
    //     array[i].FinalGrade = FinalGrade;

    // }


    
    

    return 0;
}
