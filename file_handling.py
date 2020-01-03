# -*- coding: utf-8 -*-
"""
Created on Sat Jan  4 01:57:14 2020

@author: hp
"""

r = open('car_arduino.txt', 'r')
w = open('new_car_arduino.txt', 'x')
s = r.read()
i = 0
while i < len(s)-3:
    if(s[i:i+3] == 'LOW'):
        w.write('HIGH')
        i += 3
    elif(s[i:i+4] == 'HIGH'):
        w.write('LOW')
        i += 4
    else:
        w.write(s[i])
        i += 1
r.close()
w.close()