#include<stdio.h>


struct meridien{
    char Am_Pm[2];
};

struct timing {
    int hour;
    int min;
    int sec;
    struct meridien md;
};


struct date_of_joining {
    int date;
    int month;
    int year;
    struct timing tm;
};


struct employee {
    int id;
    char emp_name[50];
    float income;
    int age;
    struct date_of_joining doj;
}s[2];


int main(){
    printf("enter the information of five student :\n");
    for(int i= 0;i<2;i++){
        printf("Enter id ,name, income ,age ,doj(including date,month,year,time hour,minute,second,meridien respectively) of %d employee : ",i+1);
        scanf("%d%s%f%d%d%d%d%d%d%d%s",&s[i].id,&s[i].emp_name,&s[i].income,&s[i].age,&s[i].doj.date,&s[i].doj.month,&s[i].doj.year,&s[i].doj.tm.hour,&s[i].doj.tm.min,&s[i].doj.tm.sec,&s[i].doj.tm.md.Am_Pm);
        
    }
    printf(" \n \n \n");
    for(int i = 0;i<2;i++){
        printf("\n\n\nEMPLOYEE %d : \n",i+1);
        printf("id = %d\nname = %s\nincome = %.2f\nage = %d\ndate of joining : %d/%d/%d\ntiming : %d:%d:%d %s\n\n",s[i].id,s[i].emp_name,s[i].income,s[i].age,s[i].doj.date,s[i].doj.month,s[i].doj.year,s[i].doj.tm.hour,s[i].doj.tm.min,s[i].doj.tm.sec,s[i].doj.tm.md.Am_Pm);
    }

    return 0;
}