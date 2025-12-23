#include<stdio.h>
int  main(){
    int a;
    int b;
    int c;
    int d;
printf("WELCOME TO BOOK MY TICKTES");

printf("\n 1.SALEM,2.CHENNAI,3.MADURAI,4.DHARMAPURI,5.EXIT");
printf("\n ENTER YOUR CURRENT LOCATION:");

scanf("%d",&a);
printf(" 1.COIMBATORE,2.BANGALORE,3.KERALA 4.PONDICHERRY");
printf("\n ENTER THE DESTINATION:");
scanf("%d",&b);
if(b==1){
    printf("\n THE COST PER HEAD TO REACH COIMBATORE:250");
}
else if(b==2){
    printf("\n THE COST PER HEAD TO REACH BANGALORE:380");

}
else if(b==3){
    printf("\n THE COST PER HEAD TO REACH KERALA : 450");
}
else if(b==4){
    printf("\n THE COST PER HEAD TO REACH PONDICHERRY: 200");

}
int x=250;
int y=380;
int z=450;
int q=200;
printf("\n 1. EXPRESS,2.SUPER FAST ,3 LOCAL TRAIN");
printf("\n ENTER THE TRAIN YOU WANT TO TRAVEL");
scanf("%d",&c);
printf("\n 1.FIRST CLASS,2.SECOND CLASS,3.ECONOMY");
scanf("%d",&d);
if(d==1&&b==1){
        printf("%d",x+100);
    }

else if(d==2&&b==1){
    printf("%d",x+100);

}
else if(d==3&&b==1){
    printf("%d",x+50);
}
else if(d==1&b==2){
        printf("THE COST PER HEAD FOR TRAVELLING IN FIRST CLASS TO BANGALORE :");

        printf("%d",y+150);
    }

else if(d==2&b==2){
    printf("THE COST PER HEAD FOR TRAVELLING IN SECOND CLASS TO BANGALORE :");

    printf("%d",y+100);

}
else if(d==3&b==2){
    printf("THE COST PER HEAD FOR TRAVELLING IN ECONOMY TO BANGALORE :");

    printf("%d",y+50);
}
else if(d==1&b==3){
    printf("THE COST PER HEAD FOR TRAVELLING IN FIRST CLASS TO KERALA :");

    printf("%d",z+150);
    }

else if(d==2&b==3){
    printf("THE COST PER HEAD FOR TRAVELLING IN SECOND CLASS TO KERALA :");

    printf("%d",z+100);

}
else if(d==3&b==3){
    printf("THE COST PER HEAD FOR TRAVELLING IN ECONOMY TO KERALA:");

    printf("%d",z+50);
}
else if(d==1&b==4){
    printf("THE COST PER HEAD FOR TRAVELLING IN FIRST CLASS TO PONDICHERRY :");

    printf("%d",q+150);
    }

else if(d==2&b==4){
    printf("THE COST PER HEAD FOR TRAVELLING IN SECOND CLASS TO PONDICHERRY :");

    printf("%d",q+100);

}
else if(d==3&b==4){
    printf("THE COST PER HEAD FOR TRAVELLING IN ECONOMY TO PONDICHERRY :");

    printf("%d",q+50);
}
int f;
printf("\n ENTER THE NUMBER OF TICKETS TO BE BOOKED:");
scanf("%d",&f);
printf(" TICKET BOOKING SUCCESSFULL FOR %d",f);
printf(" PERSONS");
printf("\n THANKYOU FOR CHOOSING BOOK MY TICKETS");





printf("WELCOME TO BOOK MY TICKTES");

printf("\n 1.SALEM,2.CHENNAI,3.MADURAI,4.DHARMAPURI,5.EXIT");
printf("\n ENTER YOUR CURRENT LOCATION:");
int ex;
scanf("%d",&ex);
if (ex==5){
    printf("HAVE A HAPPY JOURNEY");
}
}
