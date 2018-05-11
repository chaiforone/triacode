//
//  tori.c
//  triacode
//
//  Created by Daway.Cai on 2018/5/11.
//  Copyright © 2018年 Daway.Cai. All rights reserved.
//

/*
 
 triacode ternary logic
 
   ->x1
       \
        A(x1,y1)
       /       \
   ->y1         \
                 ===>C( A(x1,y1), B(x2,y2) )
   ->x2         /
       \       /
        B(x2,y2)
       /
   ->y2
 
 
 */
#include "tori.h"
#include <stdio.h>
#define T ({0,1})
#define I ({1,0})
#define O ({0,0})


void troi_test(void){
//    void troi_test(tori *toi_tttt()){
    tori arr[] = {{0,1},{0,0}, {1,0},{1,1}};
    bool arr16[16];
    char test[4] = {'T','O','I','R'};
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            
            printf("%d, x=xi%d-xj%d y=yi%d-yj%d\n",(i*10+j), arr[i].x, arr[j].x, arr[i].y, arr[j].y
                   );
        }
        printf("\n");
    }
}
