savedcmd_drivers/misc/rp1-pio.mod := printf '%s\n'   rp1-pio.o | awk '!x[$$0]++ { print("drivers/misc/"$$0) }' > drivers/misc/rp1-pio.mod
