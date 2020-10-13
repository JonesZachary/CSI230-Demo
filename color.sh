#!/bin/bash

red='\033[0;31m'
green='\033[0;32m'
yellow='\033[0;33m'
blue='\033[0;34m'
magenta='\033[0;35m'
default='\033[0m'

read -p "What is your favorite color (rec, green, yellow, blue, or magenta)? " color
color=${color^^}

case ${color} in

 "RED")     selected_color=$red;;
 "GREEN")   selected_color=$green;;
 "YELLOW")  selected_color=$yellow;;
 "BLUE")    selected_color=$blue;;
 "MAGENTA") selected_color=$magenta;;
 *)         echo "That's not a correct entry!"
            exit 1
            ;;
esac

echo -e "${selected_color}Your selected color is ${color}${default}"

#if [ -z ${color} ]; then
 # echo "You didn't enter anything!"
 # exit 1
 # else
 # if [ ${color} = "RED" ]; then
 #   selected_color=$red
 # elif [ ${color} = "GREEN" ]; then
 #   selected_color=$green
 # elif [ ${color} = "YELLOW" ]; then
 #   selected_color=$yellow
 # elif [ ${color} = "BLUE" ]; then
 #   selected_color=$blue
 # elif [ ${color} = "MAGENTA" ]; then
 #   selected_color=$magenta
 # else
 #   echo "You didn't enter one of the available options!"
 #   exit 2
 # fi
 # echo -e "${selected_color}Your selected color is ${color}${default}"
#fi
