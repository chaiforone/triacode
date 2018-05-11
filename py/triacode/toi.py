"""
topology of logic
author: Daway.Cai guangixan
email: caixnet@outlook.com

triacode ternary 81 logic
"""

from triacode.oi import *




"""
 ----------
 Z   I     O   ::  Z  I  O
 I (0/1) (0/1) ::  I  T  T
 I (0/1) (0/1) ::  I  T  T
 ------------
 TTTT = -40
 ------------
 """

def toi_tttt(x, y):
    result = oib(oimoo, oivoo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (0/1) ::  I  T  T
 I (0/1) (0/0) ::  I  T  O
 ------------
 TTTO = -39
 ------------
 """
def toi_ttto(x, y):
    result = oib(oimoo, oivu, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (0/1) ::  I  T  T
 I (0/1) (1/0) ::  I  T  I
 ------------
 TTTI = -38
 ------------
 """
def toi_ttti(x, y):
    result = oib(oimu, oivu, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (0/1) ::  I  T  T
 I (0/0) (0/1) ::  I  O  T
 ------------
 TTOT = -37
 ------------
 """
def toi_ttot(x, y):
    result = oib(oimoo, oive, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (0/1) ::  I  T  T
 I (0/0) (0/0) ::  I  O  O
 ------------
 TTOO = -36
 ------------
 """
def toi_ttoo(x, y):
    result = oib(oimoo, oivoa, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (0/1) ::  I  T  T
 I (0/0) (1/0) ::  I  O  I
 ------------
 TTOI = -35
 ------------
 """
def toi_ttoi(x, y):
    result = oib(oimu, oivoa, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (0/1) ::  I  T  T
 I (1/0) (0/1) ::  I  I  T
 ------------
 TTIT = -34
 ------------
 """
def toi_ttit(x, y):
    result = oib(oime, oive, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (0/1) ::  I  T  T
 I (1/0) (0/0) ::  I  I  O
 ------------
 TTIO = -33
 ------------
 """
def toi_ttio(x, y):
    result = oib(oime, oivoa, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (0/1) ::  I  T  T
 I (1/0) (1/0) ::  I  I  I
 ------------
 TTII = -32
 ------------
 """
def toi_ttii(x, y):
    result = oib(oiveu, oivoa, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (0/0) ::  I  T  O
 I (0/1) (0/1) ::  I  T  T
 ------------
 TOTT = -31
 ------------
 """
def toi_tott(x, y):
    result = oib(oimoo, oiva, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (0/0) ::  I  T  O
 I (0/1) (0/0) ::  I  T  O
 ------------
 TOTO = -30
 ------------
 """
def toi_toto(x, y):
    result = oib(oimoo, oivoe, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (0/0) ::  I  T  O
 I (0/1) (1/0) ::  I  T  I
 ------------
 TOTI = -29
 ------------
 """
def toi_toti(x, y):
    result = oib(oimu, oivoe, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (0/0) ::  I  T  O
 I (0/0) (0/1) ::  I  O  T
 ------------
 TOOT = -28
 ------------
 """
def toi_toot(x, y):
    result = oib(oimoo, oivou, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (0/0) ::  I  T  O
 I (0/0) (0/0) ::  I  O  O
 ------------
 TOOO = -27
 ------------
 """
def toi_tooo(x, y):
    result = oib(oimoo, oimo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (0/0) ::  I  T  O
 I (0/0) (1/0) ::  I  O  I
 ------------
 TOOI = -26
 ------------
 """
def toi_tooi(x, y):
    result = oib(oimu, oimo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (0/0) ::  I  T  O
 I (1/0) (0/1) ::  I  I  T
 ------------
 TOIT = -25
 ------------
 """
def toi_toit(x, y):
    result = oib(oime, oivou, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (0/0) ::  I  T  O
 I (1/0) (0/0) ::  I  I  O
 ------------
 TOIO = -24
 ------------
 """
def toi_toio(x, y):
    result = oib(oime, oimo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (0/0) ::  I  T  O
 I (1/0) (1/0) ::  I  I  I
 ------------
 TOII = -23
 ------------
 """
def toi_toii(x, y):
    result = oib(oiveu, oimo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (1/0) ::  I  T  I
 I (0/1) (0/1) ::  I  T  T
 ------------
 TITT = -22
 ------------
 """
def toi_titt(x, y):
    result = oib(oima, oiva, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (1/0) ::  I  T  I
 I (0/1) (0/0) ::  I  T  O
 ------------
 TITO = -21
 ------------
 """
def toi_tito(x, y):
    result = oib(oima, oivoe, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (1/0) ::  I  T  I
 I (0/1) (1/0) ::  I  T  I
 ------------
 TITI = -20
 ------------
 """
def toi_titi(x, y):
    result = oib(oivau, oivoe, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (1/0) ::  I  T  I
 I (0/0) (0/1) ::  I  O  T
 ------------
 TIOT = -19
 ------------
 """
def toi_tiot(x, y):
    result = oib(oima, oivou, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (1/0) ::  I  T  I
 I (0/0) (0/0) ::  I  O  O
 ------------
 TIOO = -18
 ------------
 """
def toi_tioo(x, y):
    result = oib(oima, oimo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (1/0) ::  I  T  I
 I (0/0) (1/0) ::  I  O  I
 ------------
 TIOI = -17
 ------------
 """
def toi_tioi(x, y):
    result = oib(oivau, oimo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (1/0) ::  I  T  I
 I (1/0) (0/1) ::  I  I  T
 ------------
 TIIT = -16
 ------------
 """
def toi_tiit(x, y):
    result = oib(oivae, oivou, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (1/0) ::  I  T  I
 I (1/0) (0/0) ::  I  I  O
 ------------
 TIIO = -15
 ------------
 """
def toi_tiio(x, y):
    result = oib(oivae, oimo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/1) (1/0) ::  I  T  I
 I (1/0) (1/0) ::  I  I  I
 ------------
 TIII = -14
 ------------
 """
def toi_tiii(x, y):
    result = oib(oivo, oimo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (0/1) ::  I  O  T
 I (0/1) (0/1) ::  I  T  T
 ------------
 OTTT = -13
 ------------
 """
def toi_ottt(x, y):
    result = oib(oimoo, oivo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (0/1) ::  I  O  T
 I (0/1) (0/0) ::  I  T  O
 ------------
 OTTO = -12
 ------------
 """
def toi_otto(x, y):
    result = oib(oimoo, oivae, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (0/1) ::  I  O  T
 I (0/1) (1/0) ::  I  T  I
 ------------
 OTTI = -11
 ------------
 """
def toi_otti(x, y):
    result = oib(oimu, oivae, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (0/1) ::  I  O  T
 I (0/0) (0/1) ::  I  O  T
 ------------
 OTOT = -10
 ------------
 """
def toi_otot(x, y):
    result = oib(oimoo, oivau, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (0/1) ::  I  O  T
 I (0/0) (0/0) ::  I  O  O
 ------------
 OTOO = -9
 ------------
 """
def toi_otoo(x, y):
    result = oib(oimoo, oima, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (0/1) ::  I  O  T
 I (0/0) (1/0) ::  I  O  I
 ------------
 OTOI = -8
 ------------
 """
def toi_otoi(x, y):
    result = oib(oimu, oima, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (0/1) ::  I  O  T
 I (1/0) (0/1) ::  I  I  T
 ------------
 OTIT = -7
 ------------
 """
def toi_otit(x, y):
    result = oib(oime, oivau, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (0/1) ::  I  O  T
 I (1/0) (0/0) ::  I  I  O
 ------------
 OTIO = -6
 ------------
 """
def toi_otio(x, y):
    result = oib(oime, oima, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (0/1) ::  I  O  T
 I (1/0) (1/0) ::  I  I  I
 ------------
 OTII = -5
 ------------
 """
def toi_otii(x, y):
    result = oib(oiveu, oima, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (0/0) ::  I  O  O
 I (0/1) (0/1) ::  I  T  T
 ------------
 OOTT = -4
 ------------
 """
def toi_oott(x, y):
    result = oib(oimoo, oiveu, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (0/0) ::  I  O  O
 I (0/1) (0/0) ::  I  T  O
 ------------
 OOTO = -3
 ------------
 """
def toi_ooto(x, y):
    result = oib(oimoo, oime, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (0/0) ::  I  O  O
 I (0/1) (1/0) ::  I  T  I
 ------------
 OOTI = -2
 ------------
 """
def toi_ooti(x, y):
    result = oib(oimu, oime, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (0/0) ::  I  O  O
 I (0/0) (0/1) ::  I  O  T
 ------------
 OOOT = -1
 ------------
 """
def toi_ooot(x, y):
    result = oib(oimoo, oimu, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (0/0) ::  I  O  O
 I (0/0) (0/0) ::  I  O  O
 ------------
 OOOO = 0
 ------------
 """
def toi_oooo(x, y):
    result = oib(oimoo, oimoo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (0/0) ::  I  O  O
 I (0/0) (1/0) ::  I  O  I
 ------------
 OOOI = 1
 ------------
 """
def toi_oooi(x, y):
    result = oib(oimu, oimoo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (0/0) ::  I  O  O
 I (1/0) (0/1) ::  I  I  T
 ------------
 OOIT = 2
 ------------
 """
def toi_ooit(x, y):
    result = oib(oime, oimu, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (0/0) ::  I  O  O
 I (1/0) (0/0) ::  I  I  O
 ------------
 OOIO = 3
 ------------
 """
def toi_ooio(x, y):
    result = oib(oime, oimoo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (0/0) ::  I  O  O
 I (1/0) (1/0) ::  I  I  I
 ------------
 OOII = 4
 ------------
 """
def toi_ooii(x, y):
    result = oib(oiveu, oimoo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (1/0) ::  I  O  I
 I (0/1) (0/1) ::  I  T  T
 ------------
 OITT = 5
 ------------
 """
def toi_oitt(x, y):
    result = oib(oima, oiveu, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (1/0) ::  I  O  I
 I (0/1) (0/0) ::  I  T  O
 ------------
 OITO = 6
 ------------
 """
def toi_oito(x, y):
    result = oib(oima, oime, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (1/0) ::  I  O  I
 I (0/1) (1/0) ::  I  T  I
 ------------
 OITI = 7
 ------------
 """
def toi_oiti(x, y):
    result = oib(oivau, oime, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (1/0) ::  I  O  I
 I (0/0) (0/1) ::  I  O  T
 ------------
 OIOT = 8
 ------------
 """
def toi_oiot(x, y):
    result = oib(oima, oimu, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (1/0) ::  I  O  I
 I (0/0) (0/0) ::  I  O  O
 ------------
 OIOO = 9
 ------------
 """
def toi_oioo(x, y):
    result = oib(oima, oimoo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (1/0) ::  I  O  I
 I (0/0) (1/0) ::  I  O  I
 ------------
 OIOI = 10
 ------------
 """
def toi_oioi(x, y):
    result = oib(oivau, oimoo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (1/0) ::  I  O  I
 I (1/0) (0/1) ::  I  I  T
 ------------
 OIIT = 11
 ------------
 """
def toi_oiit(x, y):
    result = oib(oivae, oimu, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (1/0) ::  I  O  I
 I (1/0) (0/0) ::  I  I  O
 ------------
 OIIO = 12
 ------------
 """
def toi_oiio(x, y):
    result = oib(oivae, oimoo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (0/0) (1/0) ::  I  O  I
 I (1/0) (1/0) ::  I  I  I
 ------------
 OIII = 13
 ------------
 """
def toi_oiii(x, y):
    result = oib(oivo, oimoo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (0/1) ::  I  I  T
 I (0/1) (0/1) ::  I  T  T
 ------------
 ITTT = 14
 ------------
 """
def toi_ittt(x, y):
    result = oib(oimo, oivo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (0/1) ::  I  I  T
 I (0/1) (0/0) ::  I  T  O
 ------------
 ITTO = 15
 ------------
 """
def toi_itto(x, y):
    result = oib(oimo, oivae, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (0/1) ::  I  I  T
 I (0/1) (1/0) ::  I  T  I
 ------------
 ITTI = 16
 ------------
 """
def toi_itti(x, y):
    result = oib(oivou, oivae, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (0/1) ::  I  I  T
 I (0/0) (0/1) ::  I  O  T
 ------------
 ITOT = 17
 ------------
 """
def toi_itot(x, y):
    result = oib(oimo, oivau, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (0/1) ::  I  I  T
 I (0/0) (0/0) ::  I  O  O
 ------------
 ITOO = 18
 ------------
 """
def toi_itoo(x, y):
    result = oib(oimo, oima, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (0/1) ::  I  I  T
 I (0/0) (1/0) ::  I  O  I
 ------------
 ITOI = 19
 ------------
 """
def toi_itoi(x, y):
    result = oib(oivou, oima, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (0/1) ::  I  I  T
 I (1/0) (0/1) ::  I  I  T
 ------------
 ITIT = 20
 ------------
 """
def toi_itit(x, y):
    result = oib(oivoe, oivau, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (0/1) ::  I  I  T
 I (1/0) (0/0) ::  I  I  O
 ------------
 ITIO = 21
 ------------
 """
def toi_itio(x, y):
    result = oib(oivoe, oima, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (0/1) ::  I  I  T
 I (1/0) (1/0) ::  I  I  I
 ------------
 ITII = 22
 ------------
 """
def toi_itii(x, y):
    result = oib(oiva, oima, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (0/0) ::  I  I  O
 I (0/1) (0/1) ::  I  T  T
 ------------
 IOTT = 23
 ------------
 """
def toi_iott(x, y):
    result = oib(oimo, oiveu, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (0/0) ::  I  I  O
 I (0/1) (0/0) ::  I  T  O
 ------------
 IOTO = 24
 ------------
 """
def toi_ioto(x, y):
    result = oib(oimo, oime, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (0/0) ::  I  I  O
 I (0/1) (1/0) ::  I  T  I
 ------------
 IOTI = 25
 ------------
 """
def toi_ioti(x, y):
    result = oib(oivou, oime, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (0/0) ::  I  I  O
 I (0/0) (0/1) ::  I  O  T
 ------------
 IOOT = 26
 ------------
 """
def toi_ioot(x, y):
    result = oib(oimo, oimu, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (0/0) ::  I  I  O
 I (0/0) (0/0) ::  I  O  O
 ------------
 IOOO = 27
 ------------
 """
def toi_iooo(x, y):
    result = oib(oimo, oimoo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (0/0) ::  I  I  O
 I (0/0) (1/0) ::  I  O  I
 ------------
 IOOI = 28
 ------------
 """
def toi_iooi(x, y):
    result = oib(oivou, oimoo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (0/0) ::  I  I  O
 I (1/0) (0/1) ::  I  I  T
 ------------
 IOIT = 29
 ------------
 """
def toi_ioit(x, y):
    result = oib(oivoe, oimu, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (0/0) ::  I  I  O
 I (1/0) (0/0) ::  I  I  O
 ------------
 IOIO = 30
 ------------
 """
def toi_ioio(x, y):
    result = oib(oivoe, oimoo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (0/0) ::  I  I  O
 I (1/0) (1/0) ::  I  I  I
 ------------
 IOII = 31
 ------------
 """
def toi_ioii(x, y):
    result = oib(oiva, oimoo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (1/0) ::  I  I  I
 I (0/1) (0/1) ::  I  T  T
 ------------
 IITT = 32
 ------------
 """
def toi_iitt(x, y):
    result = oib(oivoa, oiveu, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (1/0) ::  I  I  I
 I (0/1) (0/0) ::  I  T  O
 ------------
 IITO = 33
 ------------
 """
def toi_iito(x, y):
    result = oib(oivoa, oime, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (1/0) ::  I  I  I
 I (0/1) (1/0) ::  I  T  I
 ------------
 IITI = 34
 ------------
 """
def toi_iiti(x, y):
    result = oib(oive, oime, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (1/0) ::  I  I  I
 I (0/0) (0/1) ::  I  O  T
 ------------
 IIOT = 35
 ------------
 """
def toi_iiot(x, y):
    result = oib(oivoa, oimu, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (1/0) ::  I  I  I
 I (0/0) (0/0) ::  I  O  O
 ------------
 IIOO = 36
 ------------
 """
def toi_iioo(x, y):
    result = oib(oivoa, oimoo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (1/0) ::  I  I  I
 I (0/0) (1/0) ::  I  O  I
 ------------
 IIOI = 37
 ------------
 """
def toi_iioi(x, y):
    result = oib(oive, oimoo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (1/0) ::  I  I  I
 I (1/0) (0/1) ::  I  I  T
 ------------
 IIIT = 38
 ------------
 """
def toi_iiit(x, y):
    result = oib(oivu, oimu, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (1/0) ::  I  I  I
 I (1/0) (0/0) ::  I  I  O
 ------------
 IIIO = 39
 ------------
 """
def toi_iiio(x, y):
    result = oib(oivu, oimoo, x, y)
    return result


"""
 Z   I     O   ::  Z  I  O
 I (1/0) (1/0) ::  I  I  I
 I (1/0) (1/0) ::  I  I  I
 ------------
 IIII = 40
 ------------
 """
def toi_iiii(x, y):
    result = oib(oivoo, oimoo, x, y)
    return result
