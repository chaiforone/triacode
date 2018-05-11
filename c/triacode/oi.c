//
//  oi.c
//  triacode
//
//  Created by Daway.Cai on 2018/5/9.
//  Copyright © 2018年 Daway.Cai. All rights reserved.
//

/*
topology of logic
author: Daway.Cai guangixan
email: caixnet@outlook.com
*  topology logic matrix
*  O A
*  E U
*
*  OAEU
*/

#include <stdio.h>
#include "oi.h"
//#define name_to_str(name)
/*
  util
 */
bool l2b(bool x){
    bool result;
    if(true == x){
        result = x;
    }else if (false == x){
        result = x;
    }else{
        result = x;
    }
    return result;
}

/*
 
 print demo
 Z I O
 I * *
 O * *
 
 */

void boi_test(bool (*fn)(bool, bool)){
    tori oi_demo[4] = {{true, true}, {true, false}, {false, true}, {false, false}};
    bool items[4] = {};
    for (int i = 0; i< 4; i++){
        items[i] = fn(oi_demo[i].x, oi_demo[i].y);
    }
    //printf("%P\n", fn);
    printf("Z I O\n");
    printf("I %d %d\n", items[0], items[1]);
    printf("O %d %d\n", items[2], items[3]);
    printf("\n");
}


/*
 *
 * Optical interference B mode Logic: tria
 *
 * X----XY'
 * |\  /
 * | \/
 * | /\
 * |/  \
 * Y----YX'
 *
 */


tori oib(bool (*fnx)(bool, bool), bool (*fny)(bool, bool), bool x, bool y){
    register tori z;
    z.x = fnx(x, y);
    z.y = fny(x, y);
    return z;
}


/*
 *
 * Optical Interference P mode Logic: not
 *
 * A -A
 * 1  0
 * 0  1
 *
 * X----P
 * |   /
 * |  /
 * | /
 * |/
 * Y----Y'
 *
 */

bool oip(bool x){
    return !x;
}



/*
* Optical interference M mode Logic: and
* X---X'
* |\
* | \
* |  M
* | /
* |/
* Y---Y'
*
*/

/*
*
* O I O
* I 1 0
* O 0 0
*
* oim_O = 1000
*/

bool oim_o_point_logic(bool x, bool y){
    return x && y;
}

bool oimo(bool x, bool y){
    return oim_o_point_logic(x, y);
}

/*
* A I O
* I 0 1
* O 0 0
*
* oim_A = 0100
*/

bool oim_a_point_logic(bool x, bool y){
    return x && !y;
}

bool oima(bool x, bool y){
    return oim_a_point_logic(x, y);
}

/*
* A I O
* I 0 0
* O 1 0
*
*oi_E = 0010
*/

bool oim_e_point_logic(bool x, bool y){
    return !x && y;
}

bool oime(bool x, bool y){
    return oim_e_point_logic(x, y);
}

/*
 * A I O
 * I 0 0  | O A |
 * O 0 1  | E U |
 *
 *oi_u = 0001
 */

bool oim_u_point_logic(bool x, bool y){
    return !x && !y;
}

bool oimu(bool x, bool y){
    return oim_u_point_logic(x, y);
}

/*
* Optical interference V mode Logic: or
* V logic
* X
*  \
*   \
*    V
*   /
*  /
* Y
*
*/

/*
* A I O
* I 1 1  | O A |
* O 1 0  | E U |
*
*oi_oae = 1110
*/

bool oiv_oae_face_logic(bool x, bool y){
    return x || y;
}

bool oivu(bool x, bool y){
    return oiv_oae_face_logic(x, y);
}

/*
 * A I O
 * I 1 1  | O A |
 * O 0 1  | E U |
 *
 *oi_auo = 1101
 */

bool oiv_auo_face_logic(bool x, bool y){
    return x || !y;
}

bool oive(bool x, bool y){
    return oiv_auo_face_logic(x, y);
}

/*
 * A I O
 * I 1 0  | O A |
 * O 1 1  | E U |
 *
 *oi_auo = 1011
 */

bool oiv_eau_face_logic(bool x, bool y){
    return !x || y;
}

bool oiva(bool x, bool y){
    return oiv_eau_face_logic(x, y);
}

/*
 * A I O
 * I 0 1  | O A |
 * O 1 1  | E U |
 *
 *oi_uea = 0111
 */

bool oiv_uea_face_logic(bool x, bool y){
    return !x || !y;
}

bool oivo(bool x, bool y){
    return oiv_uea_face_logic(x, y);
}

/*
 * Optical interference V mode Logic: or to and
 
 * V logic
 * X
 *  \
 *   \
 *    V1----
 *   /|\
 *  / | \
 * Y  |  \
 *    |   V
 * X  |  /
 *  \ | /
 *   \|/
 *    V2----
 *   /
 *  /
 * Y
 *
 * Optical interference V mode Logic: and to or
 *
 * X---X'
 * |\
 * | \
 * |  M
 * | / \
 * |/   \
 * Y---Y'\
 *        M
 * X---X'/
 * |\   /
 * | \ /
 * |  M
 * | /
 * |/
 * Y---Y'
 *
 */

/*
* A I O
* I 1 1  | O A |
* O 0 0  | E U |
*
* oa = 1100
*/


bool oiv_oa_line_logic(bool x, bool y){
    return oivu(x, y) && oive(x, y);
}

bool oivoa(bool x, bool y){
    return oiv_oa_line_logic(x, y);
}

bool oim_oa_line_logic(bool x, bool y){
    return oimo(x, y) || oima(x, y);
}

bool oimoa(bool x, bool y){
    return oim_oa_line_logic(x, y);
}

/*
 * A I O
 * I 0 1  | O A |
 * O 0 1  | E U |
 *
 * oa = 0101
 */


bool oiv_au_line_logic(bool x, bool y){
    return oivo(x, y) && oive(x, y);
}

bool oivau(bool x, bool y){
    return oiv_au_line_logic(x, y);
}

bool oim_au_line_logic(bool x, bool y){
    return oima(x, y) || oimu(x, y);
}

bool oimau(bool x, bool y){
    return oim_au_line_logic(x, y);
}

/*
 * A I O
 * I 0 0  | O A |
 * O 1 1  | E U |
 *
 * oa = 0011
 */


bool oiv_eu_line_logic(bool x, bool y){
    return oivo(x, y) && oiva(x, y);
}

bool oiveu(bool x, bool y){
    return oiv_eu_line_logic(x, y);
}

bool oim_eu_line_logic(bool x, bool y){
    return oime(x, y) || oimu(x, y);
}

bool oimeu(bool x, bool y){
    return oim_eu_line_logic(x, y);
}


/*
 * A I O
 * I 1 0  | O A |
 * O 1 0  | E U |
 *
 * oe = 1010
 */


bool oiv_oe_line_logic(bool x, bool y){
    return oiva(x, y) && oivu(x, y);
}

bool oivoe(bool x, bool y){
    return oiv_oe_line_logic(x, y);
}

bool oim_oe_line_logic(bool x, bool y){
    return oimo(x, y) || oime(x, y);
}

bool oimoe(bool x, bool y){
    return oim_oe_line_logic(x, y);
}


/*
 * A I O
 * I 1 0  | O A |
 * O 0 1  | E U |
 *
 * oe = 1001
 */


bool oiv_ou_line_logic(bool x, bool y){
    return oiva(x, y) && oive(x, y);
}

bool oivou(bool x, bool y){
    return oiv_ou_line_logic(x, y);
}

bool oim_ou_line_logic(bool x, bool y){
    return oimo(x, y) || oimu(x, y);
}

bool oimou(bool x, bool y){
    return oim_ou_line_logic(x, y);
}


/*
 * A I O
 * I 0 1  | O A |
 * O 1 0  | E U |
 *
 * oe = 1010
 */


bool oiv_ae_line_logic(bool x, bool y){
    return oivo(x, y) && oivu(x, y);
}

bool oivae(bool x, bool y){
    return oiv_ae_line_logic(x, y);
}

bool oim_ae_line_logic(bool x, bool y){
    return oima(x, y) || oime(x, y);
}

bool oimae(bool x, bool y){
    return oim_ae_line_logic(x, y);
}

/*
* A I O
* I 0 0  | O A |
* O 0 0  | E U |
*
* o-uea = 0000
*
*/

bool oim_o_uea_space_logic(bool x, bool y){
    return oimo(x, y) && oivo(x, y);
}

bool oimoo(bool x, bool y){
    return oim_o_uea_space_logic(x, y);
}

bool oim_a_eou_space_logic(bool x, bool y){
    return oima(x, y) && oiva(x, y);
}

bool oimaa(bool x, bool y){
    return oim_a_eou_space_logic(x, y);
}

bool oim_e_auo_space_logic_space_logic(bool x, bool y){
    return oime(x, y) && oive(x, y);
}

bool oimee(bool x, bool y){
    return oim_e_auo_space_logic_space_logic(x, y);
}

bool oim_u_oae_space_logic_space_logic(bool x, bool y){
    return oime(x, y) && oive(x, y);
}

bool oimuu(bool x, bool y){
    return oim_u_oae_space_logic_space_logic(x, y);
}

/*
 * A I O
 * I 1 1  | O A |
 * O 1 1  | E U |
 *
 * o-uea = 1111
 *
 */

bool oiv_o_uea_space_logic(bool x, bool y){
    return oimo(x, y) || oivo(x, y);
}

bool oivoo(bool x, bool y){
    return oiv_o_uea_space_logic(x, y);
}

bool oiv_a_eou_space_logic(bool x, bool y){
    return oima(x, y) || oiva(x, y);
}

bool oivaa(bool x, bool y){
    return oiv_a_eou_space_logic(x, y);
}

bool oiv_e_auo_space_logic_space_logic(bool x, bool y){
    return oime(x, y) || oive(x, y);
}

bool oivee(bool x, bool y){
    return oiv_e_auo_space_logic_space_logic(x, y);
}

bool oiv_u_oae_space_logic_space_logic(bool x, bool y){
    return oime(x, y) || oive(x, y);
}

bool oivuu(bool x, bool y){
    return oiv_u_oae_space_logic_space_logic(x, y);
}


