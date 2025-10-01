savedcmd_drivers/media/i2c/mira220.mod := printf '%s\n'   mira220.o | awk '!x[$$0]++ { print("drivers/media/i2c/"$$0) }' > drivers/media/i2c/mira220.mod
