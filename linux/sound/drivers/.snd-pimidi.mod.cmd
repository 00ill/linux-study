savedcmd_sound/drivers/snd-pimidi.mod := printf '%s\n'   pimidi.o | awk '!x[$$0]++ { print("sound/drivers/"$$0) }' > sound/drivers/snd-pimidi.mod
