/* Coded by Vaibhav Sheth */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
char user[20];
int a,choice,comp[4],player[4],sys,pep; // a for storing random number

void genran()
{
    printf("/*************************************************/ \n");
    printf(" Player Name:- %s\n\n",user);
    
    
    srand(time(NULL));
    a=rand()%3 +1;
    if(a==1){
       rock(); 
    }
    else if(a==2){
        scissor();
    }
    else if(a==3){
        paper();
    }
    
    sys=comp[0]+comp[1]+comp[2];
    pep=player[0]+player[1]+player[2];
    if(sys>pep){
        printf("You lose\n");
    }
    else if(sys<pep){
        printf("You win \n");
    }
    else{
        printf("Tie \n");
    }
    
}

void rock(){           // comp opted for rock
    if(choice==1){
        printf(" Rock vs Rock\n");
        comp[0]=0;
        player[0]=0;
        
    }
    
    else if(choice==2){
        printf(" Scissor vs Rock\n");
        comp[0]=1;
        player[0]=0;
        
    }
    
    else if(choice==3){
        printf(" Paper vs Rock\n");
        comp[0]=0;
        player[0]=1;
        
    }
}

void scissor(){           // comp opted for scissor
    if(choice==1){
        printf(" Rock vs Scissor\n");
        comp[1]=0;
        player[1]=1;
        
    }
    
    else if(choice==2){
        printf(" Scissor vs Scissor\n");
        comp[1]=0;
        player[1]=0;
        
    }
    
    else if(choice==3){
        printf(" Paper vs Scissor\n");
        comp[1]=1;
        player[1]=0;
        
    }
}

void paper(){           // comp opted for paper
    if(choice==1){
        printf(" Rock vs Paper\n");
        comp[2]=1;
        player[2]=0;
        
    }
    
    else if(choice==2){
        printf(" Scissor vs Paper\n");
        comp[2]=0;
        player[2]=1;
        
    }
    
    else if(choice==3){
        printf(" Paper vs Paper\n");
        comp[2]=0;
        player[2]=0;
        
    }
}


int main()
{   
    
    int d;            //d for switch case
    printf("enter your name \n");
    gets(user);
    //scanf("%s",user);
    //getchar();
    
    printf("enter your choice \n");
    printf(" 1 Rock \n 2 Scissor \n 3 Paper \n");
    //getchar();
    scanf("%d",&choice);
    getchar();
    
    switch(choice)
    {
        case 1:
           genran();
           break;
        
        case 2:
           genran();
           break;
        
        case 3:
           genran();
           break;
        
        default:
           printf(" Wrong Choice entered \n");
           exit(0);
    }
   

    return 0;
}


