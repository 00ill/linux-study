savedcmd_drivers/hwmon/powerz.mod := printf '%s\n'   powerz.o | awk '!x[$$0]++ { print("drivers/hwmon/"$$0) }' > drivers/hwmon/powerz.mod
