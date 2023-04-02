#include<stdio.h>
#include<strings.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>
const int InitialCount=100;
int Count,Num,Player;
bool Correct;
int main()
{
    srand(time(0));
    system("cls");
    Player=1;
    Count=InitialCount;
    do{
	if (Player==1){
        do{
            printf("Твой ход на столе %d спичек\n", Count);
            printf("Сколько спичек возьмешь? \n");
            scanf("%d", &Num);
            if((Num>=1) && (Num<=10) && (Num<=Count)){
                    Correct=true;}
            else
            {
                //rewind(stdin);
                //printf("%d \n", Num);
                printf("Можно взять только от 1 до 10! \n");
     
                Correct=false;
            }
          } while (!Correct);}
        else
        {
        do{
          Num=rand()%10+1;
          if (Num>Count){
            Num=Count;}
          printf("Компьютер берет %d спичек\n", Num);
        }while (!Correct);
        }
        
        Count-=Num;
        if (Player==1){
            Player=2;}
	else{
            Player=1;}
    }
    while (Count>0);
    if (Player==2){
        printf("Ты выйграл\n");}
    else {printf("Я взял последнюю спичку, ты проиграл\n");}
     
return 0;
}