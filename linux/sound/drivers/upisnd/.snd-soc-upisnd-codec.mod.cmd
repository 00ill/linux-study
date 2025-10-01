savedcmd_sound/drivers/upisnd/snd-soc-upisnd-codec.mod := printf '%s\n'   upisnd_codec.o | awk '!x[$$0]++ { print("sound/drivers/upisnd/"$$0) }' > sound/drivers/upisnd/snd-soc-upisnd-codec.mod
