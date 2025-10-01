savedcmd_drivers/hwmon/chipcap2.mod := printf '%s\n'   chipcap2.o | awk '!x[$$0]++ { print("drivers/hwmon/"$$0) }' > drivers/hwmon/chipcap2.mod
