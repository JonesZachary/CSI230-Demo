#!/bin/bash

# Checks if the User ID is 0, if not then user is not root and exits
if [ "$EUID" -ne 0 ]
  then echo "Must run as root, try: sudo ./mail.sh"
  exit
fi

# For all the emails in the txt file, cut out username
for user in $(cat emails.txt | cut -d "@" -f 1);
do

  # Stores the username and generates a new password 
  username=$user
  password=$(openssl rand -base64 12)

  #echo "Random password is: ${password}"

  # Checks if the user already exists and has a password, if so update password
  egrep -q -i "^${username}:" /etc/passwd
  if [ $? -eq 0 ]; then
    echo "User already exists, changing ${username}'s password"

  # If user DNE, creates a new user, adds them to CSI230, and sets the password
  else
  echo "${username} does not exist, creating a new account and new password"
  useradd -m -g CSI230 -s /bin/bash $username -p $password
  # Next login, change password
  chage -d 0 $username

  fi
done
