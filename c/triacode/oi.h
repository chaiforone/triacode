//
//  oi.h
//  triacode
//
//  Created by Daway.Cai on 2018/5/9.
//  Copyright © 2018年 Daway.Cai. All rights reserved.
//

#ifndef oi_h
#define oi_h
#define name_to_str(name) (#name)

#include <stdbool.h>

/*
 
 set logic
     {x,y,z}
     /  |  \
    /   |   \
   /    |    \
{x,y} {x,z} {y,z}
 |\  /     \  /|
 | \/       \/ |
 | /\       /\ |
 |/  \     /  \|
 {x}   {y}    {z}
   \    |    /
    \   |   /
     \  |  /
       { }

 
topology logic
  (o+a+e)        (a+u+o)
    (o) - (o+a)- (a)
     | \       / |
     |  (o+u) /  |
     |    \  /   |
  (o+e)    X    (a+u)
     |    /  \   |
     |  (a+e) \  |
     | /       \ |
    (e)- (e+u) - (u)
  (e+o+u)        (u+e+a)
 
 */
typedef struct tori_type{
    bool x;
    bool y;
} tori;

bool l2b(bool x);
void boi_test(bool (*)(bool, bool));

// rib
tori oib(bool (*fnx)(bool, bool), bool (*fny)(bool, bool), bool x, bool y);

// not
bool oip(bool x);

// and = point
bool oimo(bool x, bool y);
bool oima(bool x, bool y);
bool oime(bool x, bool y);
bool oimu(bool x, bool y);

// or = space
bool oivu(bool x, bool y);
bool oive(bool x, bool y);
bool oiva(bool x, bool y);
bool oivo(bool x, bool y);

// or + and = line
bool oivoa(bool x, bool y);
bool oimoa(bool x, bool y);

bool oivau(bool x, bool y);
bool oimau(bool x, bool y);

bool oiveu(bool x, bool y);
bool oimeu(bool x, bool y);

bool oivoe(bool x, bool y);
bool oimoe(bool x, bool y);

bool oivou(bool x, bool y);
bool oimou(bool x, bool y);

bool oivae(bool x, bool y);
bool oimae(bool x, bool y);

// or + and = zone
bool oimoo(bool x, bool y);
bool oimaa(bool x, bool y);
bool oimee(bool x, bool y);
bool oimuu(bool x, bool y);

// or + or = zone
bool oivoo(bool x, bool y);
bool oivaa(bool x, bool y);
bool oivee(bool x, bool y);
bool oivuu(bool x, bool y);

#endif /* oi_h */
