//WAP to check whether the entered date is valid or not. (Format of Date : dd-mm-yyyy)

struct Age{
  
int P_day,P_year,P_month;
int B_day,B_year,B_month;
int F_day,F_year,F_month;
int age_days,age_years;

}D;

typedef struct Age age;

void Age_Person(age D);


int main()
{

    printf("Enter Present Date ( DD/ MM / YYYY ): ");
    scanf("%d %d %d",&D.P_day,&D.P_month,&D.P_year);
    
    printf("Enter Birth Date ( DD/ MM / YYYY ): ");
    scanf("%d %d %d",&D.B_day,&D.B_month,&D.B_year);

    Age_Person(D);
    
return 0;
}

void Age_Person(struct Age D)
{
  
  int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};

  if(D.B_day>D.P_day)
  {
        D.P_day=D.P_day+month[D.P_month-1];
        D.P_month-=1;
  }

  if(D.B_month>D.P_month)
  {
        D.P_year-=1;
        D.P_month+=12;
  }

  D.F_day=D.P_day=D.B_day;
  D.F_month=D.P_month-D.B_month;
  D.F_year=D.P_year-D.B_year;

  printf("Age : %d Days , %d Months , %d Years",D.F_day,D.F_month,D.F_year);

}