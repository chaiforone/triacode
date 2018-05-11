"""
topology of logic
author: Daway.Cai guangixan
email: caixnet@outlook.com

triacode binary 16 logic
"""

#  topology logic matrix
#  O  A
#
#  E  U
#
#  OAEU

def oi_geometryOfLogic():
    print('Z I O')
    print('I O A')
    print('O E U')

def oi_test(fn):
    #oi_demo = [(1,1), (1,0), (0, 1), (0, 0)]
    oi_demo = [(True, True), (True, False), (False, True), (False, False)]
    #oi_demo = [(x, y) for x in (1, 0) for y in (1, 0)]
    items = []
    print(str(fn))
    for row in oi_demo:
        result = fn(row[0], row[1])
        if True == result:
            items.append(1)
        else:
            items.append(0)
    print('Z I O')
    print('I {0} {1}'.format(items[0], items[1]))
    print('O {0} {1}'.format(items[2], items[3]))
    print('')

#
# Optical Interference P mode Logic: not
#
# A -A
# 1  0
# 0  1
#
# X----P
# |   /
# |  /
# | /
# |/
# Y----Y'
#
def oip(x):
    return not x

#
# Optical interference B mode Logic:
#
# X----XY'
# |\  /
# | \/
# | /\
# |/  \
# Y----YX'
#
def oib(fnx, fny, x, y):
    return fnx(x, y), fny(x, y)


#
# Optical interference M mode Logic: and
# X---X'
# |\
# | \
# |  M
# | /
# |/
# Y---Y'
#
#
# O I O
# I 1 0
# O 0 0
#
#oi_O = 1000
def oim_O_point_Logic(x, y):
    return x and y

def oimo(x, y):
    return oim_O_point_Logic(x, y)

#
# A I O
# I 0 1
# O 0 0
#
#oi_A = 0100
def oim_A_point_Logic(x, y):
    return x and (not y)

def oima(x, y):
    return oim_A_point_Logic(x, y)

#
# A I O
# I 0 0
# O 1 0
#
#oi_E = 0010
def oim_E_point_logic(x, y):
    return (not x) and y

def oime(x, y):
    return oim_E_point_logic(x, y)

#
# A I O
# I 0 0
# O 0 1
#
#oi_U = 0001
def oim_U_point_logic(x, y):
    return (not x) and (not y)

def oimu(x, y):
    return oim_U_point_logic(x, y)

#
# Optical interference V mode Logic: or
# V logic
# X
#  \
#   \
#    V
#   /
#  /
# Y
#
#
# A I O
# I 1 1
# O 1 0
#
#oi_ABC = 1110
def oiv_OAE_face_logic(x,y):
    return x or y

def oivu(x, y):
    return oiv_OAE_face_logic(x, y)
#
# A I O
# I 1 1
# O 0 1
#
#oi_BDA = 1101
def oiv_OAU_face_logic(x, y):
    return x or (not y)

def oive(x, y):
    return oiv_OAU_face_logic(x, y)

#
# A I O
# I 0 1
# O 1 1
#
#oi_DCB = 0111
def oiv_UEA_face_logic(x, y):
    return (not x) or (not y)

def oivo(x, y):
    return oiv_UEA_face_logic(x, y)

#
# A I O
# I 1 0
# O 1 1
#
#oi_CAD = 1011
def oiv_EOU_face_logic(x, y):
    return (not x) or y

def oiva(x, y):
    return oiv_EOU_face_logic(x, y)


#
# A I O
# I 1 1
# O 0 0
#
#oi_AB = oi_ABC & oi_BDA
def oim_OA_line_logic(x, y):
    return oivu(x, y) and oive(x, y)

def oimoa(x, y):
    return oim_OA_line_logic(x, y)

def oiv_OA_line_logic(x, y):
    return oimo(x, y) or oima(x, y)

def oivoa(x, y):
    return oiv_OA_line_logic(x, y)

#
# A I O
# I 1 0
# O 1 0
#
#oi_AC = oi_ABC & oi_CAD
def oim_OE_line_logic(x, y):
    return oivu(x, y) and oiva(x, y)

def oimoe(x, y):
    return oim_OE_line_logic(x, y)

def oiv_OE_line_logic(x, y):
    return oimo(x, y) or oime(x, y)

def oivoe(x, y):
    return oiv_OE_line_logic(x, y)

#
# A I O
# I 0 0
# O 1 1
#
#oi_DC = oi_CAD & oi_DCB
# oivo(x, y) && oiva(x, y);
def oim_EU_line_logic(x, y):
    return oivo(x, y) and oiva(x, y)
    #return oivo(x, y) and oiva(x, y)

def oimeu(x, y):
    oim_EU_line_logic(x, y)

def oiv_EU_ling_logic(x, y):
    return oime(x, y) or oimu(x, y)

def oiveu(x, y):
    return oiv_EU_ling_logic(x, y)

#
# A I O
# I 0 1
# O 0 1
#
#oi_BD = oi_BDA & oi_DCB
def oim_AU_line_logic(x, y):
    return oive(x, y) and oivo(x, y)

def oimau(x, y):
    return oim_AU_line_logic(x, y)

def oiv_AU_line_logic(x, y):
    return oima(x, y) or oimu(x, y)

def oivau(x, y):
    return oiv_AU_line_logic(x, y)

#
# AD I O
#  I 1 0
#  O 0 1
#
#oi_AD = oi_BDA & oi_CAD
def oim_O_U_line_logic(x, y):
    return oive(x, y) and oiva(x, y)

def oimou(x, y):
    return oim_O_U_line_logic(x, y)

def oiv_O_U_line_logic(x, y):
    return oimo(x, y) or oimu(x, y)

def oivou(x, y):
    return oiv_O_U_line_logic(x, y)
#
# A I O
# I 0 1
# O 1 0
#
#oi_BC = oi_ABC & oi_DCB
def oim_AE_line_logic(x, y):
    return oivu(x, y) and oivo(x, y)

def oimae(x,y):
    return oim_AE_line_logic(x, y)

def oiv_AE_line_logic(x, y):
    return oima(x, y) or oime(x, y)

def oivae(x, y):
    return oiv_AE_line_logic(x, y)



#
# A I O
# I 0 0
# O 0 0
#
def oim_O_UEA_space_logic(x, y):
    return oimo(x, y) and oivo(x, y)

def oimoo(x, y):
    return oim_O_UEA_space_logic(x, y)

def oim_A_EOU_space_logic(x, y):
    return oima(x, y) and oiva(x,y)

def oimaa(x, y):
    return oim_A_EOU_space_logic(x, y)

def oim_E_AUO_space_logic(x, y):
    return oime(x, y) and oive(x,y)

def oimee(x, y):
    return oim_E_AUO_space_logic(x, y)

def oim_U_OAE_space_logic(x, y):
    return oimu(x, y) and oivu(x,y)

def oimuu(x, y):
    return oim_U_OAE_space_logic(x, y)

#
# A I O
# I 1 1
# O 1 1
#

def oiv_O_UEA_space_logic(x, y):
    return oimo(x, y) or oivo(x,y)

def oivoo(x, y):
    return oiv_O_UEA_space_logic(x, y)


def oiv_A_EOU_space_logic(x, y):
    return oima(x, y) or oiva(x,y)

def oivaa(x, y):
    return oiv_A_EOU_space_logic(x, y)

def oiv_E_AUO_space_logic(x, y):
    return oime(x, y) or oime(x,y)

def oivee(x, y):
    return oiv_E_AUO_space_logic(x, y)

def oiv_U_OAE_space_logic(x, y):
    return oimu(x, y) or oivu(x,y)

def oivuu(x, y):
    return oiv_U_OAE_space_logic(x, y)


