#! /usr/bin/python
"""Programa que verifica si una palabra es un palindromo, es decir,
se escribe igual de derecha a  izquierda que de izquierda a derecha
Ejemplo lol ana"""
palabra = raw_input("Ingresa la palabra ")
a = 0;
limite = len(palabra)/2
palindromo = True
while a < (limite and palindromo):
	if (palabra[a] != palabra[-a-1]):
		palindromo = False
	a+=1
print palindromo