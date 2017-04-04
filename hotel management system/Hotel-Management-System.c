#include <stdio.h>
#include <conio.h>

// global declaration

    char name1[35], contact1[15], r_type1[10], date_11[10], date_21[10], ex1;
    char name2[35], contact2[15], r_type2[10], date_12[10], date_22[10], ex2;
    char name3[35], contact3[15], r_type3[10], date_13[10], date_23[10], ex3;
    char name4[35], contact4[15], r_type4[10], date_14[10], date_24[10], ex4;
    char name5[35], contact5[15], r_type5[10], date_15[10], date_25[10], ex5;
    int stay1, rs1, r_no1, charge1;
    int stay2, rs2, r_no2, charge2;
    int stay3, rs3, r_no3, charge3;
    int stay4, rs4, r_no4, charge4;
    int stay5, rs5, r_no5, charge5;

void main()
{
// backgroung and text color
    system("Color 79");
// calling about function
    about();
// calling main_menu function with choice in it
    main_menu();


}

// about function

void about(void)
{
    // description of hotel
    system("cls");
        printf("\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t ***************************\n");
        printf("\t\t\t\t\t\t\t * Hotel Management System *\n");
        printf("\t\t\t\t\t\t\t ***************************");
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
        printf("\n\t\t\t\t\t\t\t*************");
        printf("\n\t\t\t\t\t\t\t* AMENITIES *");
        printf("\n\t\t\t\t\t\t\t*************");
        printf("\n\n\n\n");
        printf("\t\t\t=> 100% Power Backup.");
        printf("\n\t\t\t=> Automatic Lifts.");
        printf("\n\t\t\t=> Ample Parking Space.");
        printf("\n\t\t\t=> Round the Clock Security.");
        printf("\n\t\t\t=> Running Hot and Cold Water.");
        printf("\n\t\t\t=> Free Internet Service.");
        printf("\n\t\t\t=> 24 Hours Room Service.");
        printf("\n\t\t\t=> Laundry Service.");
        printf("\n\n\t\t\t\t\t\t Press any key to continue...!!");
    getch();
}

// choice function

void choice_main()
{
    // this function is to select items from the menu
    char choice;
        printf("\n\n\t\t\tEnter Your Choice: ");
        choice = getch();
        system("cls");
    switch(choice){
            case '1':
                    booking();
                    break;
            case '2':
//                    info();
                    break;
            case '3':
//                    record();
                    break;
            case '4':
//                    edit();
                    break;
            default:
                    printf("\n\n\t\t\tError: Please make sure your Choice is Valid, Thanks!");
                    printf("\n\n\t\t\t\t\t\t\t\t\t Press any key to continue...!!");
                    getch();
                    main_menu();
        }
}

// main menu function

void main_menu()
{
    // this function is the whole system :)
    system("cls");
        printf("\n\n\n\n");
        printf("\n\t\t\t\t\t\t*************");
        printf("\n\t\t\t\t\t\t* MAIN MENU *");
        printf("\n\t\t\t\t\t\t*************");
        printf("\n\n\n\n");
        printf("\n\n\n\t\t\t1. Booking");
        printf("\n\t\t\t2. Rooms Information");
        printf("\n\t\t\t3. Customer Record");
        printf("\n\t\t\t4. Edit Record");
    // call for choice function
    choice_main();
}

// choice for booking

void choice_booking()
{
    // this function is to select items from the menu
    char choice;
        printf("\n\n\t\t\tEnter Your Choice: ");
        choice = getch();
        system("cls");
    if(choice == '1')
        booking1();
        else if (choice == '2' && name1 != "")
            booking2();
            else if (choice == '3' && name2 != "")
                booking3();
                else if (choice == '4' && name3 != "")
                    booking4();
                    else if (choice == '5' && name4 != "")
                        booking5();
    else
        printf("\n\n\t\t\tError: Please make sure your Choice is Valid, Thanks!");
        printf("\n\n\t\t\t\t\t\t\t\t\t Press any key to continue...!!");
        getch();
        booking();
}

// customer reregistration

void booking()
{
    // this function is to call functions to book
    system("cls");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\t\t\t\t\t\t* B O O K I N G *");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\n\n\n");
    printf("\n\n\n\t\t\t1. Register First Customer");
    printf("\n\t\t\t2. Register Second Customer");
    printf("\n\t\t\t3. Register Third Customer");
    printf("\n\t\t\t4. Register Fourth Customer");
    printf("\n\t\t\t5. Register Fifth Customer");
    choice_booking();
}

// for first customer

void booking1()
{
    // this function is to record customer's record
    system("cls");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\t\t\t\t\t\t* B O O K I N G *");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\n\n\n");
    printf("\t\t\tName: ");                 scanf("%s", &name1);
    printf("\t\t\tContact: ");              scanf("%s", &contact1);
    printf("\t\t\tRoom Number: ");          scanf("%d", &r_no1);
    printf("\t\t\tRoom Type: ");            scanf("%s", &r_type1);
    printf("\t\t\tStay for (in days): ");   scanf("%d", &stay1);
    printf("\t\t\tCharges: ");              scanf("%d", &charge1);
    printf("\t\t\tFrom: ");                 scanf("%s", &date_11);
    printf("\t\t\tTill: ");                 scanf("%s", &date_21);
    rs1 = charge1 * stay1;
    system("cls");
    printf("\n\n\n\n\n\t\t\tRoom number %d is successfully issued to Mr/Mrs/Miss %s,\n\t\tfor %d days in Rs %d", r_no1, name1, stay1, rs1);
    getch();
    booking();
}

// for second customer

void booking2()
{
    // this function is to record customer's record
    system("cls");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\t\t\t\t\t\t* B O O K I N G *");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\n\n\n");
    printf("\t\t\tName: ");                 scanf("%s", &name2);
    printf("\t\t\tContact: ");              scanf("%s", &contact2);
    printf("\t\t\tRoom Number: ");          scanf("%d", &r_no2);
    printf("\t\t\tRoom Type: ");            scanf("%s", &r_type2);
    printf("\t\t\tStay for (in days): ");   scanf("%d", &stay2);
    printf("\t\t\tCharges: ");              scanf("%d", &charge2);
    printf("\t\t\tFrom: ");                 scanf("%s", &date_12);
    printf("\t\t\tTill: ");                 scanf("%s", &date_22);
    rs2 = charge2 * stay2;
    system("cls");
    printf("\n\n\n\n\n\t\t\tRoom number %d is successfully issued to Mr/Mrs/Miss %s,\n\t\tfor %d days in Rs %d", r_no2, name2, stay2, rs2);
    getch();
    booking();
}

// for third customer

void booking3()
{
    // this function is to record customer's record
    system("cls");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\t\t\t\t\t\t* B O O K I N G *");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\n\n\n");
    printf("\t\t\tName: ");                 scanf("%s", &name3);
    printf("\t\t\tContact: ");              scanf("%s", &contact3);
    printf("\t\t\tRoom Number: ");          scanf("%d", &r_no3);
    printf("\t\t\tRoom Type: ");            scanf("%s", &r_type3);
    printf("\t\t\tStay for (in days): ");   scanf("%d", &stay3);
    printf("\t\t\tCharges: ");              scanf("%d", &charge3);
    printf("\t\t\tFrom: ");                 scanf("%s", &date_13);
    printf("\t\t\tTill: ");                 scanf("%s", &date_23);
    rs3 = charge3 * stay3;
    system("cls");
    printf("\n\n\n\n\n\t\t\tRoom number %d is successfully issued to Mr/Mrs/Miss %s,\n\t\tfor %d days in Rs %d", r_no3, name3, stay3, rs3);
    getch();
    booking();
}

// for fourth customer

void booking4()
{
    // this function is to record customer's record
    system("cls");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\t\t\t\t\t\t* B O O K I N G *");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\n\n\n");
    printf("\t\t\tName: ");                 scanf("%s", &name4);
    printf("\t\t\tContact: ");              scanf("%s", &contact4);
    printf("\t\t\tRoom Number: ");          scanf("%d", &r_no4);
    printf("\t\t\tRoom Type: ");            scanf("%s", &r_type4);
    printf("\t\t\tStay for (in days): ");   scanf("%d", &stay4);
    printf("\t\t\tCharges: ");              scanf("%d", &charge4);
    printf("\t\t\tFrom: ");                 scanf("%s", &date_14);
    printf("\t\t\tTill: ");                 scanf("%s", &date_24);
    rs4 = charge4 * stay4;
    system("cls");
    printf("\n\n\n\n\n\t\t\tRoom number %d is successfully issued to Mr/Mrs/Miss %s,\n\t\tfor %d days in Rs %d", r_no4, name4, stay4, rs4);
    getch();
    booking();
}

// for fifth customer

void booking5()
{
    // this function is to record customer's record
    system("cls");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\t\t\t\t\t\t* B O O K I N G *");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\n\n\n");
    printf("\t\t\tName: ");                 scanf("%s", &name5);
    printf("\t\t\tContact: ");              scanf("%s", &contact5);
    printf("\t\t\tRoom Number: ");          scanf("%d", &r_no5);
    printf("\t\t\tRoom Type: ");            scanf("%s", &r_type5);
    printf("\t\t\tStay for (in days): ");   scanf("%d", &stay5);
    printf("\t\t\tCharges: ");              scanf("%d", &charge5);
    printf("\t\t\tFrom: ");                 scanf("%s", &date_15);
    printf("\t\t\tTill: ");                 scanf("%s", &date_25);
    rs5 = charge5 * stay5;
    system("cls");
    printf("\n\n\n\n\n\t\t\tRoom number %d is successfully issued to Mr/Mrs/Miss %s,\n\t\tfor %d days in Rs %d", r_no5, name5, stay5, rs5);
    getch();
    booking();
}


