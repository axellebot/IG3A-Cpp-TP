#!/bin/bash
# Axel LE BOT - 2017-10-02
echo "Ex6 - paramètres"
echo -n "-Liste des parametres entres : "

A=$#
for ((i=0 ; i<A ; i++)) do
	echo -n "$1 "
	shift
done

echo -e "\n-Nombre de parametres : $A"
