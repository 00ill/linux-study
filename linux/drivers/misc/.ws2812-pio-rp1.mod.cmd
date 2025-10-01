savedcmd_drivers/misc/ws2812-pio-rp1.mod := printf '%s\n'   ws2812-pio-rp1.o | awk '!x[$$0]++ { print("drivers/misc/"$$0) }' > drivers/misc/ws2812-pio-rp1.mod
