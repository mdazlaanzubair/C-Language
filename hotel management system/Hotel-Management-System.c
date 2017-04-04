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
    system("Color 0B");
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
                    info();
                    break;
            case '3':
                    record();
                    break;
            case '4':
                    edit();
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
    switch(choice){
            case '1':
                    booking1();
                    break;
            case '2':
                    booking2();

                    break;
            case '3':
                    booking3();
                    break;
            case '4':
                    booking4();
                    break;
            case '5':
                    booking5();
                    break;
            default:
                    printf("\n\n\t\t\tError: Please make sure your Choice is Valid, Thanks!");
                    printf("\n\n\t\t\t\t\t\t\t\t\t Press any key to continue...!!");
                    getch();
                    main_menu();
        }
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

    // calling chart function
    rate_chart();

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

    // calling chart function
    rate_chart();

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

    // calling chart function
    rate_chart();

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

    // calling chart function
    rate_chart();

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

    // calling chart function
    rate_chart();

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

// rooms information function

void info()
{
        printf("\n\n\n\n");
        printf("\n\t\t\t\t\t\t*********************");
        printf("\n\t\t\t\t\t\t* Rooms Information *");
        printf("\n\t\t\t\t\t\t*********************");
        printf("\n\n\n\n");
        printf("\t");
        printf("\t");
        printf("\t\t|  Room Number  |");
        printf("   Room Type   |");
        printf("  Charges per Day  |");
        printf("\n\t\t\t\t=====================================================\n");
        printf("\t");
        printf("\t");
        printf("\t\t|\t1\t|");
        printf("  Deluxe Room\t|");
        printf("\t2500\t    |\n");
        printf("\t");
        printf("\t");
        printf("\t\t|\t2\t|");
        printf("  Duplex Room\t|");
        printf("\t3020\t    |\n");
        printf("\t");
        printf("\t");
        printf("\t\t|\t3\t|");
        printf("  Suite\t|");
        printf("\t4000\t    |\n");
        printf("\t");
        printf("\t");
        printf("\t\t|\t4\t|");
        printf("  Cabana\t|");
        printf("\t3500\t    |\n");
        printf("\t");
        printf("\t");
        printf("\t\t|\t5\t|");
        printf("  Studio\t|");
        printf("\t5000\t    |\n");
        printf("\t");
        char choice;
        printf("\n\n\t\t\tEnter Your Choice: ");
        choice = getch();
        system("cls");
        char c;
    switch(choice){

            case '1':
                    printf("\n\n\n\n");
                    printf("\n\t\t\t\t\t\t*********************");
                    printf("\n\t\t\t\t\t\t* Rooms Information *");
                    printf("\n\t\t\t\t\t\t*********************");
                    printf("\n\n\n\n");
                    printf("\t\t\tDeluxe Room:\n");
                    printf("\t\t\t\tThey are available in Single Deluxe and Double Deluxe variants.\n");
                    printf("\t\t\tDeluxe room is well furnished. Some amenities are attached bathroom,\n");
                    printf("\t\t\ta dressing table, a bedside table, a small writing table, a TV,\n");
                    printf("\t\t\tand a small fridge. The floor is covered with carpet and most suitable\n");
                    printf("\t\t\tfor small families.");

// back to main menu

                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tHit Enter to go Back...!!!\n\n\n");
                    c = getc(stdin);
                    if(c=='\n')
                        system("cls");
                        info();
                    break;
            case '2':
                    printf("\n\n\n\n");
                    printf("\n\t\t\t\t\t\t*********************");
                    printf("\n\t\t\t\t\t\t* Rooms Information *");
                    printf("\n\t\t\t\t\t\t*********************");
                    printf("\n\n\n\n");
                    printf("\t\t\tDuplex Room:\n");
                    printf("\t\t\t\tThis type is composed of two rooms located on two different floors,\n\t\t\tconnected with internal stairs.\n");

// back to main menu

                    printf("\n\n\t\t\t\t\t\t\t\t\t\tHit Enter to go Back...!!!\n\n\n");
                    c = getc(stdin);
                    if(c=='\n')
                        system("cls");
                        info();
                    break;
            case '3':
                    printf("\n\n\n\n");
                    printf("\n\t\t\t\t\t\t*********************");
                    printf("\n\t\t\t\t\t\t* Rooms Information *");
                    printf("\n\t\t\t\t\t\t*********************");
                    printf("\n\n\n\n");
                    printf("\t\t\tSuite:\n");
                    printf("\t\t\t\tIt is composed of one or more bedrooms, a living room, and a dining area.\n\t\t\tIt is excellent for the guests who prefer more space, wish to entertain their guests\n\t\t\twithout interruption and giving up privacy.\n");

// back to main menu

                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tHit Enter to go Back...!!!\n\n\n");
                    c = getc(stdin);
                    if(c=='\n')
                        system("cls");
                        info();
                    break;
            case '4':
                    printf("\n\n\n\n");
                    printf("\n\t\t\t\t\t\t*********************");
                    printf("\n\t\t\t\t\t\t* Rooms Information *");
                    printf("\n\t\t\t\t\t\t*********************");
                    printf("\n\n\n\n");
                    printf("\t\t\tCabana:\n");
                    printf("\t\t\t\tThis type of room faces water body, beach, or a swimming pool. \n\t\t\tIt generally has a large balcony.\n");

// back to main menu

                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tHit Enter to go Back...!!!\n\n\n");
                    c = getc(stdin);
                    if(c=='\n')
                        system("cls");
                        info();
                    break;
            case '5':
                    printf("\n\n\n\n");
                    printf("\n\t\t\t\t\t\t*********************");
                    printf("\n\t\t\t\t\t\t* Rooms Information *");
                    printf("\n\t\t\t\t\t\t*********************");
                    printf("\n\n\n\n");
                    printf("\t\t\tStudio:\n");
                    printf("\t\t\t\tThey are twin adjacent rooms: A living room with sofa, \n\t\t\tcoffee table and chairs, and a bedroom. It is also equipped with \n\t\t\tfan/air conditioner, a small kitchen corner, and a dining area. \n\t\t\tThe furniture is often compact.\n");

// back to main menu

                    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tHit Enter to go Back...!!!\n\n\n");
                    c = getc(stdin);
                    if(c=='\n')
                        system("cls");
                        info();
                    break;
            default:
                    system("cls");
                    main_menu();
        }
}

// function for the rooms chart

void rate_chart()
{
        printf("\n\n\n\n");
        printf("\t");
        printf("\t");
        printf("\t\t|  Room Number  |");
        printf("   Room Type   |");
        printf("  Charges per Day  |");
        printf("\n\t\t\t\t=====================================================\n");
        printf("\t");
        printf("\t");
        printf("\t\t|\t1\t|");
        printf("  Deluxe Room\t|");
        printf("\t2500\t    |\n");
        printf("\t");
        printf("\t");
        printf("\t\t|\t2\t|");
        printf("  Duplex Room\t|");
        printf("\t3020\t    |\n");
        printf("\t");
        printf("\t");
        printf("\t\t|\t3\t|");
        printf("  Suite\t|");
        printf("\t4000\t    |\n");
        printf("\t");
        printf("\t");
        printf("\t\t|\t4\t|");
        printf("  Cabana\t|");
        printf("\t3500\t    |\n");
        printf("\t");
        printf("\t");
        printf("\t\t|\t5\t|");
        printf("  Studio\t|");
        printf("\t5000\t    |\n");
        printf("\t");
}

// choice for record

void choice_record()
{
    // this function is to select items from the menu
    char choice;
        printf("\n\n\t\t\tEnter Your Choice: ");
        choice = getch();
        system("cls");
    switch(choice){
            case '1':
                    record1();
                    break;
            case '2':
                    record2();
                    break;
            case '3':
                    record3();
                    break;
            case '4':
                    record4();
                    break;
            case '5':
                    record5();
                    break;
            case '6':
                    printf("\n\n\n\n\t\t\t\t\t\t**********************************************");
                    printf("\n\t\t\t\t\t\t* ARE YOU SURE YOU WANT TO REOVE ALL RECORD? *");
                    printf("\n\t\t\t\t\t\t**********************************************");
                    char rm;
                    printf("\n\n\t\t\tEnter Your Choice (y/n): ");
                    rm = getch();
                    switch(rm){
                        case 'y':
                            reset_record();
                            getch();
                            main_menu();
                            break;
                        case 'n':
                            main_menu();
                            break;
                        default:
                            printf("\n\n\n\n\t\t\t\t\tPlease Enter a Valid Answer....!!");
                            getch();
                            record();
                    }
                    break;
            default:
                    printf("\n\n\t\t\tError: Please make sure your Choice is Valid, Thanks!");
                    printf("\n\n\t\t\t\t\t\t\t\t\t Press any key to continue...!!");
                    getch();
                    main_menu();
        }
}

// customer record list

void record()
{
    // this function is to display customer detail and record
    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t\t\t***************");
    printf("\n\t\t\t\t\t\t* R E C O R D *");
    printf("\n\t\t\t\t\t\t***************");
    printf("\n\n\n\n");
    printf("\n\n\n\t\t\t1. Register First Customer");
    printf("\n\t\t\t2. Register Second Customer");
    printf("\n\t\t\t3. Register Third Customer");
    printf("\n\t\t\t4. Register Fourth Customer");
    printf("\n\t\t\t5. Register Fifth Customer");
    printf("\n\t\t\t6. Reset All Record");
    choice_record();
}

// first record

void record1()
{
    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t\t\t***************");
    printf("\n\t\t\t\t\t\t* R E C O R D *");
    printf("\n\t\t\t\t\t\t***************");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\t\t\tName: %s\n", &name1);
    printf("\t\t\tContact: %s\n", &contact1);
    printf("\t\t\tRoom Number: %d\n", &r_no1);
    printf("\t\t\tRoom Type: %s\n", &r_type1);
    printf("\t\t\tStay for (in days): %d\n", &stay1);
    printf("\t\t\tAmount: %d\n", &rs1);
    printf("\t\t\tFrom: %s\n", &date_11);
    printf("\t\t\tTill: %s\n", &date_21);
    getch();
    record();
}

// second record

void record2()
{
    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t\t\t***************");
    printf("\n\t\t\t\t\t\t* R E C O R D *");
    printf("\n\t\t\t\t\t\t***************");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\t\t\tName: %s\n", &name2);
    printf("\t\t\tContact: %s\n", &contact2);
    printf("\t\t\tRoom Number: %d\n", &r_no2);
    printf("\t\t\tRoom Type: %s\n", &r_type2);
    printf("\t\t\tStay for (in days): %d\n", &stay2);
    printf("\t\t\tAmount: %d\n", &rs2);
    printf("\t\t\tFrom: %s\n", &date_12);
    printf("\t\t\tTill: %s\n", &date_22);
    getch();
    record();
}

// third record

void record3()
{
    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t\t\t***************");
    printf("\n\t\t\t\t\t\t* R E C O R D *");
    printf("\n\t\t\t\t\t\t***************");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\t\t\tName: %s\n", &name3);
    printf("\t\t\tContact: %s\n", &contact3);
    printf("\t\t\tRoom Number: %d\n", &r_no3);
    printf("\t\t\tRoom Type: %s\n", &r_type3);
    printf("\t\t\tStay for (in days): %d\n", &stay3);
    printf("\t\t\tAmount: %d\n", &rs3);
    printf("\t\t\tFrom: %s\n", &date_13);
    printf("\t\t\tTill: %s\n", &date_23);
    getch();
    record();
}

// fourth record

void record4()
{
    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t\t\t***************");
    printf("\n\t\t\t\t\t\t* R E C O R D *");
    printf("\n\t\t\t\t\t\t***************");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\t\t\tName: %s\n", &name4);
    printf("\t\t\tContact: %s\n", &contact4);
    printf("\t\t\tRoom Number: %d\n", &r_no4);
    printf("\t\t\tRoom Type: %s\n", &r_type4);
    printf("\t\t\tStay for (in days): %d\n", &stay4);
    printf("\t\t\tAmount: %d\n", &rs4);
    printf("\t\t\tFrom: %s\n", &date_14);
    printf("\t\t\tTill: %s\n", &date_24);
    getch();
    record();
}

// fifth record

void record5()
{
    system("cls");
    printf("\n\n\n\n");
    printf("\n\t\t\t\t\t\t***************");
    printf("\n\t\t\t\t\t\t* R E C O R D *");
    printf("\n\t\t\t\t\t\t***************");
    printf("\n\n\n\n");
    printf("\n\n\n\n");
    printf("\t\t\tName: %s\n", &name5);
    printf("\t\t\tContact: %s\n", &contact5);
    printf("\t\t\tRoom Number: %d\n", &r_no5);
    printf("\t\t\tRoom Type: %s\n", &r_type5);
    printf("\t\t\tStay for (in days): %d\n", &stay5);
    printf("\t\t\tAmount: %d\n", &rs5);
    printf("\t\t\tFrom: %s\n", &date_15);
    printf("\t\t\tTill: %s\n", &date_25);
    getch();
    record();
}

// reset record

void reset_record()
{
    // to remove all records
    printf("Record Removed Successfully");

}

// choice for booking

void choice_booking()
{
    // this function is to select items from the menu
    char choice;
        printf("\n\n\t\t\tEnter Your Choice: ");
        choice = getch();
        system("cls");
    switch(choice){
            case '1':
                    edit1();
                    break;
            case '2':
                    edit2();
                    break;
            case '3':
                    edit3();
                    break;
            case '4':
                    edit4();
                    break;
            case '5':
                    edit5();
                    break;
            default:
                    printf("\n\n\t\t\tError: Please make sure your Choice is Valid, Thanks!");
                    printf("\n\n\t\t\t\t\t\t\t\t\t Press any key to continue...!!");
                    getch();
                    main_menu();
        }
}

// customer reregistration

void edit()
{
    // this function is to call functions to book
    system("cls");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\t\t\t\t\t\t*  EDIT RECORD  *");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\n\n\n");
    printf("\n\n\n\t\t\t1. Edit First Customer");
    printf("\n\t\t\t2. Edit Second Customer");
    printf("\n\t\t\t3. Edit Third Customer");
    printf("\n\t\t\t4. Edit Fourth Customer");
    printf("\n\t\t\t5. Edit Fifth Customer");
    choice_edit();

}

// for first customer

void edit1()
{
    // this function is to record customer's record
    system("cls");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\t\t\t\t\t\t*  EDIT RECORD  *");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\n\n\n");

    // calling chart function
    rate_chart();

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
    printf("Your Record is Successfully Modified.");
    getch();
    edit();
}

// for second customer

void edit2()
{
    // this function is to record customer's record
    system("cls");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\t\t\t\t\t\t*  EDIT RECORD  *");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\n\n\n");

    // calling chart function
    rate_chart();

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
    printf("Your Record is Successfully Modified.");
    getch();
    edit();
}

// for third customer

void edit3()
{
    // this function is to record customer's record
    system("cls");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\t\t\t\t\t\t*  EDIT RECORD  *");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\n\n\n");

    // calling chart function
    rate_chart();

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
    printf("Your Record is Successfully Modified.");
    getch();
    edit();
}

// for fourth customer

void edit4()
{
    // this function is to record customer's record
    system("cls");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\t\t\t\t\t\t*  EDIT RECORD  *");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\n\n\n");

    // calling chart function
    rate_chart();

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
    printf("Your Record is Successfully Modified.);
    getch();
    edit();
}

// for fifth customer

void edit5()
{
    // this function is to record customer's record
    system("cls");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\t\t\t\t\t\t*  EDIT RECORD  *");
    printf("\n\t\t\t\t\t\t*****************");
    printf("\n\n\n\n");

    // calling chart function
    rate_chart();

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
    printf("Your Record is Successfully Modified.");
    getch();
    edit();
}
