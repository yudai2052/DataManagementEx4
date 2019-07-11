//
//  main.c
//  ex4
//
//  Created by 鈴木雄大 on 2019/07/11.
//  Copyright © 2019年 鈴木雄大. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    
    int s1, s2, s3, sum=0;
    char name[20];
    
    srand(time(NULL));
    
    s1=rand()%6 + 1;
    s2=rand()%6 + 1;
    s3=rand()%6 + 1;
    sum=s1+s2;
    
    printf("What is your name?\n");
    scanf("%s",name);
    printf("Hello,%s!\n",name);
    
    
    printf("Rolling the dice...\n");
    printf("Die 1 : %d\n",s1);
    printf("Die 2 : %d\n",s2);
    printf("Total value : %d\n",sum);
    
    if(sum > 7) printf("%s won!\n",name);
    else {
        printf("%s lost!\n",name);
        printf("One more chance!\n");
        printf("Rolling the dice...\n");
        printf("Die 3 : %d\n",s3);
        sum+=s3;
        printf("Total value : %d\n",sum);
        if(sum > 7) printf("%s won!\n",name);
        else printf("%s lost!\n",name);
        
    }
    return 0;
}
