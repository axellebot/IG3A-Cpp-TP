#!/bin/bash
# Author : Axel LE BOT

echo "lancement du processus $$";

TAB=( "SIGHUP" "SIGINT" "SIGQUIT" "SIGKILL" "SIGUSR1"
"SIGUSR2" "SIGPIPE" "SIGALRM" "SIGTERM" "SIGSTKFLT" "SIGCHLD" "SIGCONT" "SIGSTOP" "SIGURG" "SIGVTALRM" "SIGWINCH" "SIGIO" "SIGPWR" "SIGRTMIN"
"SIGRTMIN+1" "SIGRTMIN+2" "SIGRTMIN+3" "SIGRTMIN+4" "SIGRTMIN+5" "SIGRTMIN+6" "SIGRTMIN+7" "SIGRTMIN+8"
"SIGRTMIN+9" "SIGRTMIN+10" "SIGRTMIN+11" "SIGRTMIN+12" "SIGRTMIN+13" "SIGRTMIN+14" "SIGRTMIN+15" "SIGRTMAX-14"
"SIGRTMAX-13" "SIGRTMAX-12" "SIGRTMAX-11" "SIGRTMAX-10" "SIGRTMAX-9" "SIGRTMAX-8" "SIGRTMAX-7" "SIGRTMAX-6"
"SIGRTMAX-5" "SIGRTMAX-4" "SIGRTMAX-3" "SIGRTMAX-2" "SIGRTMAX-1" "SIGRTMAX" )

while :
do
    sleep 1;
    echo ".";
    for signal in "${TAB[@]}"
    do
        trap "echo SIGNAL dumped; echo NO WAY" $signal
    done
done