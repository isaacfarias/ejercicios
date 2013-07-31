#! /usr/bin/python
from random import randint
dado = [0,0,0,0,0,0]
cont = 0
while cont < 10000:
	dado[randint(0,5)]+=1
	cont+=1
mayor=0
for a in dado:
	print a, "veces"
	if a>mayor:
		mayor = a
print mayor,"Mayor "bo