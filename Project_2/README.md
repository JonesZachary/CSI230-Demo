### Chronology of progress:

1. Make if statement to see if user is running as root
2. Create for loop, and cut out the user's username using '@' delimiter
3. Generate random password
4. Add a new user, create a home directory, add them to CSI230 group, set their password to the randomly generated password, and make their default shell bash
5. Ensure user needs to change their password on first login
6. Checks if user already exists and if true, updates password

### Online Resources: 

[Add users to a group](https://www.techrepublic.com/article/how-to-create-users-and-groups-in-linux-from-the-command-line/)  
[Change password on first login](https://www.tecmint.com/force-user-to-change-password-next-login-in-linux/)  
[Check if user exists](https://bytefreaks.net/gnulinux/bash/linux-check-if-a-user-or-a-group-exists)  
