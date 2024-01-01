# include <stdio.h>

int main(){

int internal,assignments,exam;
printf("Enter internal marks: ");
scanf("%d",&internal);

printf("Enter assignment marks: ");
scanf("%d",&assignments);

printf("Enter exam marks: ");
scanf("%d",&exam);


int a =internal + assignments + exam;


if (internal>=0  && assignments>=0 && exam>=0 && internal<=30 && assignments<=20 && exam<=50)
    if(a>90){
        printf("Total marks  = %d\n",a);
        printf("The grade is A");

    }
    else if(a>80){
        printf("Total marks  = %d\n",a);
        printf("The grade is B");

    }
    else if(a>70){
        printf("The grade is C");
        printf("Total marks  = %d\n",a);

    }
    else if(a>60){
        printf("Total marks  = %d\n",a);
        printf("The grade is D");

    }
    else{
        printf("Total marks  = %d\n",a);
        printf("You have Failed!");

    }

else{
    printf("Invalid input");
}

}