#!/bin/bash

if [ "$EUID" -ne 0 ]
  then echo "Must run as root, try: sudo ./mail.sh"
  exit
fi

for user in $(cat emails.txt | cut -d "@" -f 1);
do
  username=$user
  password=$(openssl rand -base64 12)

  useradd -m -g CSI230 -s /bin/bash $username -p $password
  chage -d 0 $user

  echo "Username is: ${username}"
  echo "Random password is: ${password}"
done
