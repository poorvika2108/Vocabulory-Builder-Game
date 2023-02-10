#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h> 
struct vocab
{
int word_id;
char word[50];
char meaning[100];
char synonym[30];
char antonym[30];
int level;
};
int main()
{
struct vocab vc;
int choice,ch,c;
do
{
printf("\n\t\t\tVOCABULARY BUILDER");
printf("\n\t\t\t-------------------\n");
printf("\n\n 1.WORD \n 2.GAMES \n 3.LOG OUT\n");
printf("\n***********************");
printf("\nENTER YOU CHOICE:-");
scanf("%d",&choice);
switch(choice)
{
case 1:
system("cls");
printf("\n 1.ADD NEW \n 2.DELETE \n 3.VIEW ALL \n 4.BACK");
printf("\n ********************************");
printf("\n ENTER YOUR CHOICE:-");
scanf("%d",&ch);
switch(ch)
{
do
{
case 1: system("cls");
FILE *fp;
fp=fopen("word.txt","w");
if(fp==NULL)
{
printf("ERROE!");
exit(1);
}
printf("\n ENTER DETAILS \n");
printf("\nWORD ID:-");
scanf("%d",&vc.word_id);
printf("\nWORD:-");
scanf("%s",&vc.word);
printf("\nMEANING:-");
scanf("%s",&vc.meaning);
printf("\nSYNONYM:-");
scanf("%s",&vc.synonym);
printf("\nANTONYM:-");
scanf("%s",&vc.antonym);
printf("\nDIFFICULTY LEVEL:-");
scanf("%d",&vc.level);
fprintf(fp,"%d",vc.word_id);
fprintf(fp,"%c",vc.word);
fprintf(fp,"%s",vc.meaning);
fprintf(fp,"%s",vc.synonym);
fprintf(fp,"%s",vc.antonym);
fprintf(fp,"%s",vc.level);
break;
case 2: system("cls");
int status;
char file_name[25];
printf("\n\nENTER NAME OF A FILE YOU WISH TO DELETE\n\n");
scanf("%s",file_name);
//scanf=remove(file_name);
if(status==0)
printf("%s FILE DELETED SUCCESSFULLY!!!\n",file_name);
else
printf("UNABLE TO DELETE A fiLE\n");
break;
case 3: system("cls");
char filename[100];
printf("\n\nENTER THE FILENAME TO OPEN \n");
scanf("%s",filename);
fp=fopen(filename,"r");
if(fp==NULL)
{
printf("\nCANNOT OPEN FILE \n");
exit(0);
}
c=fgetc(fp);
while(c!=EOF)
{
printf("%c",c);
c=fgetc(fp);
}
fclose(fp);
break;
case 4: printf("YOU ARE EXITING FROM THE PROGRAM!!!!");
printf("THANK YOU!!!!");
exit(0);
}while(ch!=4);
}
break;
case 2: system("cls");
int response[10],option,correct_ans[10],i,marks;
correct_ans[0]=2;
correct_ans[1]=3;
correct_ans[2]=2;
correct_ans[3]=1;
correct_ans[4]=1;
correct_ans[5]=2;
correct_ans[6]=3;
correct_ans[7]=4;
correct_ans[8]=4;
correct_ans[9]=3;
do
{
printf("\n\n\t\t\t WELCOME TO QUIZ GAME");
printf("\n\t\t\t ********************");
printf("\n\n 1.DISPLAY QUESTIONS");
printf("\n 2.DISPLAY CORRECT ANSWERS");
printf("\n 3.DISPLAY RESULT");
printf("\n 4.EXIT");
printf("\n -------------------------");
printf("\n ENTER YOUR OPTION:-");
scanf("%d",&option);
switch(option)
{
case 1: system("cls");
printf("\n QUES 1:- APPROPRIATE WORD FOR \n Causing great stress or anxiety");
printf("\n1.Fussy");
printf("\n2.Fraught");
printf("\n3.Formidable");
printf("\n4.Flincky");
printf("\n\n ENTER YOUR ANSWER NO:");
scanf("%d",&response[0]);
printf("\n QUES 2:- CHOOSE THE SYNONYM OF UNFORTUNATE");
printf("\n1.Recover");
printf("\n2.Lifeless");
printf("\n3.Unlucky");
printf("\n4.Cranky");
printf("\n\n ENTER YOUR ANSWER NO:");
scanf("%d",&response[1]);
printf("\n QUES 3:- APPROPRIATE WORD FOR\n Difficult to consider or depressing");
printf("\n1.Grueling");
printf("\n2.Grim");
printf("\n3.Harsh");
printf("\n4.Herculean");
printf("\n\n ENTER YOUR ANSWER NO:");
scanf("%d",&response[2]);
printf("\n QUES 4:- CHOOSE THE SYNONYM OF EAGER");
printf("\n1.Enthusiastic");
printf("\n2.Urge");
printf("\n3.Encourage");
printf("\n4.Confess");
printf("\n\n ENTER YOUR ANSWER NO:");
scanf("%d",&response[3]);
printf("\n QUES 5:- APPROPRIATE WORD FOR \nHard to fine or capture");
printf("\n1.Elusive");
printf("\n2.Exacting");
printf("\n3.Exhausting");
printf("\n4.Exclusive");
printf("\n\n ENTER YOUR ANSWER NO:");
scanf("%d",&response[4]);
printf("\n QUES 6:- CHOOSE THE ANTONYM OF UNITY");
printf("\n1.Serious");
printf("\n2.Division");
printf("\n3.Failure");
printf("\n4.Unlucky");
printf("\n\n ENTER YOUR ANSWER NO:");
scanf("%d",&response[5]);
printf("\n QUES 7:- APPROPRIATE WORD FOR \n Difficult to manage or control");
printf("\n1.Opaque");
printf("\n2.Onerous");
printf("\n3.Obstinate");
printf("\n4.Obtuse");
printf("\n\n ENTER YOUR ANSWER NO:");
scanf("%d",&response[6]);
printf("\n QUES 8:- CHOOSE THE ANTONYM OF OUTSKIRTS");
printf("\n1.Depart");
printf("\n2.Area");
printf("\n3.Middle");
printf("\n4.Centre");
printf("\n\n ENTER YOUR ANSWER NO:");
scanf("%d",&response[7]);
printf("\n QUES 9:- APPROPRIATE WORD FOR \n Posing a problem");
printf("\n1.Perplexing");
printf("\n2.Prickly");
printf("\n3.Prohibitive");
printf("\n4.Problematic");
printf("\n\n ENTER YOUR ANSWER NO:");
scanf("%d",&response[8]);
printf("\n QUES 10:- CHOOSE THE ANTONYM OF FORTUNE");
printf("\n1.Unhappy");
printf("\n2.Lucky");
printf("\n3.Bad Luck");
printf("\n4.Happy");
printf("\n\n ENTER YOUR ANSWER NO:");
scanf("%d",&response[9]);
printf("\n\n\t\t THANK YOU FOR PLAYING THE GAME!!!!");
break;
case 2: system("cls");
printf("\n\t\t\tCHECH THE CORRECT ANSWERS");
printf("\n\t\t\t***************************");
printf("\n QUES 1:- Causing great stress or anxiety CORRECT ANS:-Fraught");
printf("\n QUES 2:- CHOOSE THE SYNONYM OF UNFORTUNATE CORRECT ANS:-Unlucky");
printf("\n QUES 3:- Difficult to consider or depressing CORRECT ANS:-Grim");
printf("\n QUES 4:- CHOOSE THE SYNONYM OF EAGER\t CORRECT ANS:-Enthusiastic");
printf("\n QUES 5:- Hard to fine or capture CORRECT ANS:-Elusive");
printf("\n QUES 6:- CHOOSE THE ANTONYM OF UNITY\t CORRECT ANS:-Division");
printf("\n QUES 7:- Difficult to manage or control CORRECT ANS:-Obstinate");
printf("\n QUES 8:- CHOOSE THE ANTONYM OF OUTSKIRTS CORRECT ANS:-Centre");
printf("\n QUES 9:- Posing a problem CORRECT ANS:-Problematic");
printf("\n QUES 10:-CHOOSE THE ANTONYM OF FORTUNE CORRECT ANS:-Bad Luck");
printf("\n\n\t\t THANK YOU FOR CHECKING ANSWERS!!!!");
break;
case 3: system("cls");
marks=0;
for(i=0;i<=9;i++)
{
if(correct_ans[i]==response[i])
{
marks++;
}
}
printf("\n OUT OF 10 YOU SCORE %d",marks);
printf("\n\n\t\t THANK YOU FOR PLAYING THE GAME!!!!");
break;
}
}while(option!=4);
system("cls");
printf("\n\n\n\t\t YOU ARE EXITING FROM THE GAME!!!! \n\t\t THANK YOU!!!\n\n");
break;
case 3:
exit(0);
break;
}
}while(choice!=3);
getch();
return 0;
}
