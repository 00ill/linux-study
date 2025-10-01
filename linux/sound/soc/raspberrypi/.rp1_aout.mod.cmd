savedcmd_sound/soc/raspberrypi/rp1_aout.mod := printf '%s\n'   rp1_aout.o | awk '!x[$$0]++ { print("sound/soc/raspberrypi/"$$0) }' > sound/soc/raspberrypi/rp1_aout.mod
