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
            printf("[ТВОЙ ХОД,НА СТОЛЕ  %d СПИЧЕК]\n", Count);
            printf("[СКОЛЬКО СПИЧЕК ВОЗЬМЁШЬ ?]\n");
            scanf("%d", &Num);
            if((Num>=1) && (Num<=10) && (Num<=Count)){
                    Correct=true;}
            else
            {
                //rewind(stdin);
                //printf("%d \n", Num);
                printf("[НЕТ, МОЖНО ВЗЯТЬ ОТ 1 ДО 10 !]\n");
     
                Correct=false;
            }
          } while (!Correct);}
        else
        {
        do{
          Num=rand()%10+1;
          if (Num>Count){
            Num=Count;}
          printf("[МОЙ ХОД, Я БЕРУ %d СПИЧЕК]\n", Num);
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
        printf("!!! ТЫ ВЫЙГРАЛ !!!\n");}
    else {printf("ТЫ ПРОИГРАЛ, ЛОХ НАФИК, НЕ ПЕРЕЖИВАЙ, СЛЕДУЮЩИЙ РАЗ ПОВЕЗЁТ )))\n");}
     
return 0;
}