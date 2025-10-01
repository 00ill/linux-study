savedcmd_drivers/iio/light/veml6075.mod := printf '%s\n'   veml6075.o | awk '!x[$$0]++ { print("drivers/iio/light/"$$0) }' > drivers/iio/light/veml6075.mod
