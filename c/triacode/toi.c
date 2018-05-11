//
//  toi.c
//  triacode
//
//  Created by Daway.Cai on 2018/5/9.
//  Copyright © 2018年 Daway.Cai. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include "toi.h"
//#define name_to_str(name)

//
char triacode(bool x, bool y){
    char result;
    if ((x == 1) && (y == 1)){
        result = 'R';
    }else if((x == 1) && (y == 0)){
        result = 'I';
    }else if((x == 0) && (y == 1)){
        result = 'T';
    }else{
        result = 'O';
    }
    return result;
}
//
int tri(char x){
    register int result = 0;
    if ('T' == x){
        result = -1;
    }else if ('O' == x){
        result = 0;
    }else{
        result = 1;
    }
    return result;
}
//
void toi_test(tori (*fn)(bool,bool)){
    tori oi_demo[4] = {{true, true}, {true, false}, {false, true}, {false, false}};
    tori items[4] = {};
    char toris[8];
    for (int i = 0; i< 4; i++){
        items[i] = fn(oi_demo[i].x, oi_demo[i].y);
    }
    printf("Z   I     O   ::  Z  I  O \n");
    printf("I (%d/%d) (%d/%d) ::  I  %c  %c\n", items[0].x, items[0].y, items[1].x, items[1].y,
           triacode(items[0].x, items[0].y), triacode(items[1].x, items[1].y));
    printf("I (%d/%d) (%d/%d) ::  I  %c  %c\n", items[2].x, items[2].y, items[3].x, items[3].y,
           triacode(items[2].x, items[2].y), triacode(items[3].x, items[3].y));
    printf("------------\n");
    sprintf(toris, "%c%c%c%c", triacode(items[0].x, items[0].y),triacode(items[1].x, items[1].y),
            triacode(items[2].x, items[2].y), triacode(items[3].x, items[3].y));
    //puts(toris);
    printf("%c%c%c%c",toris[0],toris[1],toris[2],toris[3]);
    float result=0;
    for(int i=0; i<4; i++){
        result += tri(toris[3-i])*pow(3,i);
    }
    printf(" = %d \n",(int)result);
    printf("------------\n\n");
    
//    printf("%c%c%c%c\n", triacode(items[0].x, items[0].y),triacode(items[1].x, items[1].y),
//           triacode(items[2].x, items[2].y), triacode(items[3].x, items[3].y));
    
}

/*
 ----------
 Z   I     O   ::  Z  I  O
 I (0/1) (0/1) ::  I  T  T
 I (0/1) (0/1) ::  I  T  T
 ------------
 TTTT = -40
 ------------
 */

tori toi_tttt(bool x, bool y){
    register tori result = oib(oimoo, oivoo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (0/1) ::  I  T  T
 I (0/1) (0/0) ::  I  T  O
 ------------
 TTTO = -39
 ------------
 */
tori toi_ttto(bool x, bool y){
    register tori result = oib(oimoo, oivu, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (0/1) ::  I  T  T
 I (0/1) (1/0) ::  I  T  I
 ------------
 TTTI = -38
 ------------
 */
tori toi_ttti(bool x, bool y){
    register tori result = oib(oimu, oivu, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (0/1) ::  I  T  T
 I (0/0) (0/1) ::  I  O  T
 ------------
 TTOT = -37
 ------------
 */
tori toi_ttot(bool x, bool y){
    register tori result = oib(oimoo, oive, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (0/1) ::  I  T  T
 I (0/0) (0/0) ::  I  O  O
 ------------
 TTOO = -36
 ------------
 */
tori toi_ttoo(bool x, bool y){
    register tori result = oib(oimoo, oivoa, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (0/1) ::  I  T  T
 I (0/0) (1/0) ::  I  O  I
 ------------
 TTOI = -35
 ------------
 */
tori toi_ttoi(bool x, bool y){
    register tori result = oib(oimu, oivoa, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (0/1) ::  I  T  T
 I (1/0) (0/1) ::  I  I  T
 ------------
 TTIT = -34
 ------------
 */
tori toi_ttit(bool x, bool y){
    register tori result = oib(oime, oive, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (0/1) ::  I  T  T
 I (1/0) (0/0) ::  I  I  O
 ------------
 TTIO = -33
 ------------
 */
tori toi_ttio(bool x, bool y){
    register tori result = oib(oime, oivoa, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (0/1) ::  I  T  T
 I (1/0) (1/0) ::  I  I  I
 ------------
 TTII = -32
 ------------
 */
tori toi_ttii(bool x, bool y){
    register tori result = oib(oiveu, oivoa, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (0/0) ::  I  T  O
 I (0/1) (0/1) ::  I  T  T
 ------------
 TOTT = -31
 ------------
 */
tori toi_tott(bool x, bool y){
    register tori result = oib(oimoo, oiva, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (0/0) ::  I  T  O
 I (0/1) (0/0) ::  I  T  O
 ------------
 TOTO = -30
 ------------
 */
tori toi_toto(bool x, bool y){
    register tori result = oib(oimoo, oivoe, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (0/0) ::  I  T  O
 I (0/1) (1/0) ::  I  T  I
 ------------
 TOTI = -29
 ------------
 */
tori toi_toti(bool x, bool y){
    register tori result = oib(oimu, oivoe, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (0/0) ::  I  T  O
 I (0/0) (0/1) ::  I  O  T
 ------------
 TOOT = -28
 ------------
 */
tori toi_toot(bool x, bool y){
    register tori result = oib(oimoo, oivou, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (0/0) ::  I  T  O
 I (0/0) (0/0) ::  I  O  O
 ------------
 TOOO = -27
 ------------
 */
tori toi_tooo(bool x, bool y){
    register tori result = oib(oimoo, oimo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (0/0) ::  I  T  O
 I (0/0) (1/0) ::  I  O  I
 ------------
 TOOI = -26
 ------------
 */
tori toi_tooi(bool x, bool y){
    register tori result = oib(oimu, oimo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (0/0) ::  I  T  O
 I (1/0) (0/1) ::  I  I  T
 ------------
 TOIT = -25
 ------------
 */
tori toi_toit(bool x, bool y){
    register tori result = oib(oime, oivou, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (0/0) ::  I  T  O
 I (1/0) (0/0) ::  I  I  O
 ------------
 TOIO = -24
 ------------
 */
tori toi_toio(bool x, bool y){
    register tori result = oib(oime, oimo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (0/0) ::  I  T  O
 I (1/0) (1/0) ::  I  I  I
 ------------
 TOII = -23
 ------------
 */
tori toi_toii(bool x, bool y){
    register tori result = oib(oiveu, oimo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (1/0) ::  I  T  I
 I (0/1) (0/1) ::  I  T  T
 ------------
 TITT = -22
 ------------
 */
tori toi_titt(bool x, bool y){
    register tori result = oib(oima, oiva, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (1/0) ::  I  T  I
 I (0/1) (0/0) ::  I  T  O
 ------------
 TITO = -21
 ------------
 */
tori toi_tito(bool x, bool y){
    register tori result = oib(oima, oivoe, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (1/0) ::  I  T  I
 I (0/1) (1/0) ::  I  T  I
 ------------
 TITI = -20
 ------------
 */
tori toi_titi(bool x, bool y){
    register tori result = oib(oivau, oivoe, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (1/0) ::  I  T  I
 I (0/0) (0/1) ::  I  O  T
 ------------
 TIOT = -19
 ------------
 */
tori toi_tiot(bool x, bool y){
    register tori result = oib(oima, oivou, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (1/0) ::  I  T  I
 I (0/0) (0/0) ::  I  O  O
 ------------
 TIOO = -18
 ------------
 */
tori toi_tioo(bool x, bool y){
    register tori result = oib(oima, oimo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (1/0) ::  I  T  I
 I (0/0) (1/0) ::  I  O  I
 ------------
 TIOI = -17
 ------------
 */
tori toi_tioi(bool x, bool y){
    register tori result = oib(oivau, oimo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (1/0) ::  I  T  I
 I (1/0) (0/1) ::  I  I  T
 ------------
 TIIT = -16
 ------------
 */
tori toi_tiit(bool x, bool y){
    register tori result = oib(oivae, oivou, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (1/0) ::  I  T  I
 I (1/0) (0/0) ::  I  I  O
 ------------
 TIIO = -15
 ------------
 */
tori toi_tiio(bool x, bool y){
    register tori result = oib(oivae, oimo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/1) (1/0) ::  I  T  I
 I (1/0) (1/0) ::  I  I  I
 ------------
 TIII = -14
 ------------
 */
tori toi_tiii(bool x, bool y){
    register tori result = oib(oivo, oimo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (0/1) ::  I  O  T
 I (0/1) (0/1) ::  I  T  T
 ------------
 OTTT = -13
 ------------
 */
tori toi_ottt(bool x, bool y){
    register tori result = oib(oimoo, oivo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (0/1) ::  I  O  T
 I (0/1) (0/0) ::  I  T  O
 ------------
 OTTO = -12
 ------------
 */
tori toi_otto(bool x, bool y){
    register tori result = oib(oimoo, oivae, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (0/1) ::  I  O  T
 I (0/1) (1/0) ::  I  T  I
 ------------
 OTTI = -11
 ------------
 */
tori toi_otti(bool x, bool y){
    register tori result = oib(oimu, oivae, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (0/1) ::  I  O  T
 I (0/0) (0/1) ::  I  O  T
 ------------
 OTOT = -10
 ------------
 */
tori toi_otot(bool x, bool y){
    register tori result = oib(oimoo, oivau, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (0/1) ::  I  O  T
 I (0/0) (0/0) ::  I  O  O
 ------------
 OTOO = -9
 ------------
 */
tori toi_otoo(bool x, bool y){
    register tori result = oib(oimoo, oima, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (0/1) ::  I  O  T
 I (0/0) (1/0) ::  I  O  I
 ------------
 OTOI = -8
 ------------
 */
tori toi_otoi(bool x, bool y){
    register tori result = oib(oimu, oima, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (0/1) ::  I  O  T
 I (1/0) (0/1) ::  I  I  T
 ------------
 OTIT = -7
 ------------
 */
tori toi_otit(bool x, bool y){
    register tori result = oib(oime, oivau, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (0/1) ::  I  O  T
 I (1/0) (0/0) ::  I  I  O
 ------------
 OTIO = -6
 ------------
 */
tori toi_otio(bool x, bool y){
    register tori result = oib(oime, oima, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (0/1) ::  I  O  T
 I (1/0) (1/0) ::  I  I  I
 ------------
 OTII = -5
 ------------
 */
tori toi_otii(bool x, bool y){
    register tori result = oib(oiveu, oima, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (0/0) ::  I  O  O
 I (0/1) (0/1) ::  I  T  T
 ------------
 OOTT = -4
 ------------
 */
tori toi_oott(bool x, bool y){
    register tori result = oib(oimoo, oiveu, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (0/0) ::  I  O  O
 I (0/1) (0/0) ::  I  T  O
 ------------
 OOTO = -3
 ------------
 */
tori toi_ooto(bool x, bool y){
    register tori result = oib(oimoo, oime, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (0/0) ::  I  O  O
 I (0/1) (1/0) ::  I  T  I
 ------------
 OOTI = -2
 ------------
 */
tori toi_ooti(bool x, bool y){
    register tori result = oib(oimu, oime, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (0/0) ::  I  O  O
 I (0/0) (0/1) ::  I  O  T
 ------------
 OOOT = -1
 ------------
 */
tori toi_ooot(bool x, bool y){
    register tori result = oib(oimoo, oimu, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (0/0) ::  I  O  O
 I (0/0) (0/0) ::  I  O  O
 ------------
 OOOO = 0
 ------------
 */
tori toi_oooo(bool x, bool y){
    register tori result = oib(oimoo, oimoo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (0/0) ::  I  O  O
 I (0/0) (1/0) ::  I  O  I
 ------------
 OOOI = 1
 ------------
 */
tori toi_oooi(bool x, bool y){
    register tori result = oib(oimu, oimoo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (0/0) ::  I  O  O
 I (1/0) (0/1) ::  I  I  T
 ------------
 OOIT = 2
 ------------
 */
tori toi_ooit(bool x, bool y){
    register tori result = oib(oime, oimu, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (0/0) ::  I  O  O
 I (1/0) (0/0) ::  I  I  O
 ------------
 OOIO = 3
 ------------
 */
tori toi_ooio(bool x, bool y){
    register tori result = oib(oime, oimoo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (0/0) ::  I  O  O
 I (1/0) (1/0) ::  I  I  I
 ------------
 OOII = 4
 ------------
 */
tori toi_ooii(bool x, bool y){
    register tori result = oib(oiveu, oimoo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (1/0) ::  I  O  I
 I (0/1) (0/1) ::  I  T  T
 ------------
 OITT = 5
 ------------
 */
tori toi_oitt(bool x, bool y){
    register tori result = oib(oima, oiveu, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (1/0) ::  I  O  I
 I (0/1) (0/0) ::  I  T  O
 ------------
 OITO = 6
 ------------
 */
tori toi_oito(bool x, bool y){
    register tori result = oib(oima, oime, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (1/0) ::  I  O  I
 I (0/1) (1/0) ::  I  T  I
 ------------
 OITI = 7
 ------------
 */
tori toi_oiti(bool x, bool y){
    register tori result = oib(oivau, oime, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (1/0) ::  I  O  I
 I (0/0) (0/1) ::  I  O  T
 ------------
 OIOT = 8
 ------------
 */
tori toi_oiot(bool x, bool y){
    register tori result = oib(oima, oimu, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (1/0) ::  I  O  I
 I (0/0) (0/0) ::  I  O  O
 ------------
 OIOO = 9
 ------------
 */
tori toi_oioo(bool x, bool y){
    register tori result = oib(oima, oimoo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (1/0) ::  I  O  I
 I (0/0) (1/0) ::  I  O  I
 ------------
 OIOI = 10
 ------------
 */
tori toi_oioi(bool x, bool y){
    register tori result = oib(oivau, oimoo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (1/0) ::  I  O  I
 I (1/0) (0/1) ::  I  I  T
 ------------
 OIIT = 11
 ------------
 */
tori toi_oiit(bool x, bool y){
    register tori result = oib(oivae, oimu, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (1/0) ::  I  O  I
 I (1/0) (0/0) ::  I  I  O
 ------------
 OIIO = 12
 ------------
 */
tori toi_oiio(bool x, bool y){
    register tori result = oib(oivae, oimoo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (0/0) (1/0) ::  I  O  I
 I (1/0) (1/0) ::  I  I  I
 ------------
 OIII = 13
 ------------
 */
tori toi_oiii(bool x, bool y){
    register tori result = oib(oivo, oimoo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (0/1) ::  I  I  T
 I (0/1) (0/1) ::  I  T  T
 ------------
 ITTT = 14
 ------------
 */
tori toi_ittt(bool x, bool y){
    register tori result = oib(oimo, oivo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (0/1) ::  I  I  T
 I (0/1) (0/0) ::  I  T  O
 ------------
 ITTO = 15
 ------------
 */
tori toi_itto(bool x, bool y){
    register tori result = oib(oimo, oivae, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (0/1) ::  I  I  T
 I (0/1) (1/0) ::  I  T  I
 ------------
 ITTI = 16
 ------------
 */
tori toi_itti(bool x, bool y){
    register tori result = oib(oivou, oivae, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (0/1) ::  I  I  T
 I (0/0) (0/1) ::  I  O  T
 ------------
 ITOT = 17
 ------------
 */
tori toi_itot(bool x, bool y){
    register tori result = oib(oimo, oivau, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (0/1) ::  I  I  T
 I (0/0) (0/0) ::  I  O  O
 ------------
 ITOO = 18
 ------------
 */
tori toi_itoo(bool x, bool y){
    register tori result = oib(oimo, oima, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (0/1) ::  I  I  T
 I (0/0) (1/0) ::  I  O  I
 ------------
 ITOI = 19
 ------------
 */
tori toi_itoi(bool x, bool y){
    register tori result = oib(oivou, oima, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (0/1) ::  I  I  T
 I (1/0) (0/1) ::  I  I  T
 ------------
 ITIT = 20
 ------------
 */
tori toi_itit(bool x, bool y){
    register tori result = oib(oivoe, oivau, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (0/1) ::  I  I  T
 I (1/0) (0/0) ::  I  I  O
 ------------
 ITIO = 21
 ------------
 */
tori toi_itio(bool x, bool y){
    register tori result = oib(oivoe, oima, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (0/1) ::  I  I  T
 I (1/0) (1/0) ::  I  I  I
 ------------
 ITII = 22
 ------------
 */
tori toi_itii(bool x, bool y){
    register tori result = oib(oiva, oima, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (0/0) ::  I  I  O
 I (0/1) (0/1) ::  I  T  T
 ------------
 IOTT = 23
 ------------
 */
tori toi_iott(bool x, bool y){
    register tori result = oib(oimo, oiveu, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (0/0) ::  I  I  O
 I (0/1) (0/0) ::  I  T  O
 ------------
 IOTO = 24
 ------------
 */
tori toi_ioto(bool x, bool y){
    register tori result = oib(oimo, oime, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (0/0) ::  I  I  O
 I (0/1) (1/0) ::  I  T  I
 ------------
 IOTI = 25
 ------------
 */
tori toi_ioti(bool x, bool y){
    register tori result = oib(oivou, oime, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (0/0) ::  I  I  O
 I (0/0) (0/1) ::  I  O  T
 ------------
 IOOT = 26
 ------------
 */
tori toi_ioot(bool x, bool y){
    register tori result = oib(oimo, oimu, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (0/0) ::  I  I  O
 I (0/0) (0/0) ::  I  O  O
 ------------
 IOOO = 27
 ------------
 */
tori toi_iooo(bool x, bool y){
    register tori result = oib(oimo, oimoo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (0/0) ::  I  I  O
 I (0/0) (1/0) ::  I  O  I
 ------------
 IOOI = 28
 ------------
 */
tori toi_iooi(bool x, bool y){
    register tori result = oib(oivou, oimoo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (0/0) ::  I  I  O
 I (1/0) (0/1) ::  I  I  T
 ------------
 IOIT = 29
 ------------
 */
tori toi_ioit(bool x, bool y){
    register tori result = oib(oivoe, oimu, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (0/0) ::  I  I  O
 I (1/0) (0/0) ::  I  I  O
 ------------
 IOIO = 30
 ------------
 */
tori toi_ioio(bool x, bool y){
    register tori result = oib(oivoe, oimoo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (0/0) ::  I  I  O
 I (1/0) (1/0) ::  I  I  I
 ------------
 IOII = 31
 ------------
 */
tori toi_ioii(bool x, bool y){
    register tori result = oib(oiva, oimoo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (1/0) ::  I  I  I
 I (0/1) (0/1) ::  I  T  T
 ------------
 IITT = 32
 ------------
 */
tori toi_iitt(bool x, bool y){
    register tori result = oib(oivoa, oiveu, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (1/0) ::  I  I  I
 I (0/1) (0/0) ::  I  T  O
 ------------
 IITO = 33
 ------------
 */
tori toi_iito(bool x, bool y){
    register tori result = oib(oivoa, oime, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (1/0) ::  I  I  I
 I (0/1) (1/0) ::  I  T  I
 ------------
 IITI = 34
 ------------
 */
tori toi_iiti(bool x, bool y){
    register tori result = oib(oive, oime, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (1/0) ::  I  I  I
 I (0/0) (0/1) ::  I  O  T
 ------------
 IIOT = 35
 ------------
 */
tori toi_iiot(bool x, bool y){
    register tori result = oib(oivoa, oimu, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (1/0) ::  I  I  I
 I (0/0) (0/0) ::  I  O  O
 ------------
 IIOO = 36
 ------------
 */
tori toi_iioo(bool x, bool y){
    register tori result = oib(oivoa, oimoo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (1/0) ::  I  I  I
 I (0/0) (1/0) ::  I  O  I
 ------------
 IIOI = 37
 ------------
 */
tori toi_iioi(bool x, bool y){
    register tori result = oib(oive, oimoo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (1/0) ::  I  I  I
 I (1/0) (0/1) ::  I  I  T
 ------------
 IIIT = 38
 ------------
 */
tori toi_iiit(bool x, bool y){
    register tori result = oib(oivu, oimu, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (1/0) ::  I  I  I
 I (1/0) (0/0) ::  I  I  O
 ------------
 IIIO = 39
 ------------
 */
tori toi_iiio(bool x, bool y){
    register tori result = oib(oivu, oimoo, x, y);
    return result;
}

/*
 Z   I     O   ::  Z  I  O
 I (1/0) (1/0) ::  I  I  I
 I (1/0) (1/0) ::  I  I  I
 ------------
 IIII = 40
 ------------
 */
tori toi_iiii(bool x, bool y){
    register tori result = oib(oivoo, oimoo, x, y);
    return result;
}

