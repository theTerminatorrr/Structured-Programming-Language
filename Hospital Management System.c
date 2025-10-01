#include <stdio.h>
#include <string.h>
#define MAX_PATIENTS 100

struct Patient
{
    char name[50];
    int age;
    char gender;
    int id;
    char condition[100];
};
int main()
{
    struct Patient patients[MAX_PATIENTS];
    int numPatients = 0;
    int choice;
    while (1)
    {
        printf("\nHospital Patient Management System\n");
        printf("1. Add a New Patient\n");
        printf("2. Search for Patients by ID\n");
        printf("3. Update Patient Condition by ID\n");
        printf("4. Display the List of All Patients\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (numPatients < MAX_PATIENTS)
            {
                printf("\nEnter patient details:\n");
                printf("Name: ");
                scanf("%s", patients[numPatients].name);
                printf("Age: ");
                scanf("%d", &patients[numPatients].age);
                printf("Gender (M/F): ");
                scanf(" %c", &patients[numPatients].gender);
                printf("ID: ");
                scanf("%d", &patients[numPatients].id);
                printf("Condition: ");
                scanf(" %[^\n]", patients[numPatients].condition);
                numPatients++;
                printf("Patient added successfully!\n");
            }
            else
            {
                printf("Maximum number of patients reached.\n");
            }
            break;
        case 2:
            int searchId;
            printf("Enter patient ID to search: ");
            scanf("%d", &searchId);
            int found = 0;
            for (int i = 0; i < numPatients; i++)
            {
                if (patients[i].id == searchId)
                {
                    printf("\nPatient Found:\n");
                    printf("Name: %s\n", patients[i].name);
                    printf("Age: %d\n", patients[i].age);
                    printf("Gender: %c\n", patients[i].gender);
                    printf("Condition: %s\n", patients[i].condition);
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("Patient not found.\n");
            }
            break;
        case 3:
            int updateId;
            printf("Enter patient ID to update condition: ");
            scanf("%d", &updateId);
            found = 0;
            for (int i = 0; i < numPatients; i++)
            {
                if (patients[i].id == updateId)
                {
                    printf("Enter new condition: ");
                    scanf(" %[^\n]", patients[i].condition);
                    printf("Condition updated successfully!\n");
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("Patient not found.\n");
            }
            break;
        case 4:
            printf("\nList of All Patients:\n");
            for (int i = 0; i < numPatients; i++)
            {
                printf("Name: %s\n", patients[i].name);
                printf("Age: %d\n", patients[i].age);
                printf("Gender: %c\n", patients[i].gender);
                printf("ID: %d\n", patients[i].id);
                printf("Condition: %s\n", patients[i].condition);
                printf("\n");
            }
            break;
        case 5:
            printf("Exiting the program...\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}




