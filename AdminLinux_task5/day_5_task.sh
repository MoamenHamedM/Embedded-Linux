#!/bin/bash
user=$(grep -c '^m_oamen:' /etc/passwd) 
group=$(grep -c '^a_bdellatef:' /etc/group)

if [  $user = 0 ] 
then
sudo useradd m_oamen 
fi

if [  $group = 0 ] 
then
sudo groupadd -g 30000 a_bdellatef
fi

sudo usermod -aG a_bdellatef m_oamen 

cat /etc/passwd | grep m_oamen
cat /etc/group | grep a_bdellatef
