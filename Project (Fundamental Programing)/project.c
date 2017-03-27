#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
int main(){

// backgroung and text color

    system("Color 79");

// description of hotel

    system("cls");
        printf("\n\n\n\n");
        printf("\t\t\t\t\t\t ***************************\n");
        printf("\t\t\t\t\t\t * Hotel Management System *\n");
        printf("\t\t\t\t\t\t ***************************");
        printf("\n\n\n\n");
        printf("\t\t\t\tHotel YAQ is one of the most newest Hotel in Karachi. The Hotel\n");
        printf("\t\t\tis equipped with all the general amenities and facilities that go\n");
        printf("\t\t\talong with memorable stay. Set amidst beautifully landscaped gardens,\n");
        printf("\t\t\tit proves to be a ideal dream destination for preceptive traveler.\n");
        printf("\t\t\tthe Hotel have well furnished rooms along with rooms providing pleasant\n");
        printf("\t\t\tviews of the city. The hotel satisfies the needs of business as well\n");
        printf("\t\t\tas the leisure traveler. All the rooms at the Hotel are furnished\n");
        printf("\t\t\tbeautifully. All the rooms are fitted with amenities.\n");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Press any key to continue...!!");
    getch();
    system("cls");
        printf("\n\n\n\n");
        printf("\n\t\t\t\t\t\t*************");
        printf("\n\t\t\t\t\t\t* AMENITIES *");
        printf("\n\t\t\t\t\t\t*************");
        printf("\n\n\n\n");
        printf("\t\t\t=> 100% Power Backup.");
        printf("\n\t\t\t=> Automatic Lifts.");
        printf("\n\t\t\t=> Ample Parking Space.");
        printf("\n\t\t\t=> Round the Clock Security.");
        printf("\n\t\t\t=> Running Hot and Cold Water.");
        printf("\n\t\t\t=> Free Internet Service.");
        printf("\n\t\t\t=> 24 Hours Room Service.");
        printf("\n\t\t\t=> Laundry Service.");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Press any key to continue...!!");
    getch();

// main menu

    system("cls");
        printf("\n\n\n\n");
        printf("\n\t\t\t\t\t\t*************");
        printf("\n\t\t\t\t\t\t* MAIN MENU *");
        printf("\n\t\t\t\t\t\t*************");
        printf("\n\n\n\n");
        printf("\n\n\n\t\t\t1. Booking");
        printf("\n\t\t\t2. Rooms Information");
        printf("\n\t\t\t3. Rooms Allotted");
        printf("\n\t\t\t4. Edit Record");
        printf("\n\t\t\t0. Exit");

// main menu functioning and declarations

    char choice;
        printf("\n\n\t\t\tEnter Your Choice: ");
        choice = getch();
        system("cls");
    switch(choice){
            case '1':
                    break;
            case '2':

                    system("cls");
                    printf("\n\t\t\t\t\t\t*************");
                    printf("\n\t\t\t\t\t\t* MAIN MENU *");
                    printf("\n\t\t\t\t\t\t*************");
                    printf("\n\n\n\n");
                    printf("\t\t|Room Number\t|");
                    printf("\tRoom Type\t|");
                    printf("\t\tCharges per Day\t|");

                    break;
            case '3':
//                    rooms();
                    break;
            case '4':
//                    edit();
                    break;
            case '0': break;
            default:
                    printf("\n\n\t\t\tError: Please make sure Choice is Valid, Thanks!");
                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Press any key to continue...!!");
                    getch();
        }


getch();
}
