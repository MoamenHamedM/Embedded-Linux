#!/bin/bash
file=~/.bashrc
if [ -f $file ]; then
    echo export HELLO=$HOSTNAME >> $file
    echo LOCAL=$(whoami) >> $file
    echo 'echo $HELLO' >> $file
    echo 'echo $LOCAL' >> $file
    gnome-terminal
fi

