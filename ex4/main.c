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
    
    int s1, s2, sum=0;
    
    srand(time(NULL));
    
    s1=rand()%6 + 1;
    s2=rand()%6 + 1;
    
    sum=s1+s2;
    
    printf("Rolling the dice...\n");
    printf("Die 1 : %d\n",s1);
    printf("Die 2 : %d\n",s2);
    printf("Total value : %d\n",sum);

    return 0;
}
