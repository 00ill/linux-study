savedcmd_drivers/firmware/rp1-fw.mod := printf '%s\n'   rp1-fw.o | awk '!x[$$0]++ { print("drivers/firmware/"$$0) }' > drivers/firmware/rp1-fw.mod
