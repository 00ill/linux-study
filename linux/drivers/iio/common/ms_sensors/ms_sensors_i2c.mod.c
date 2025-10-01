#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(ms_sensors_reset, "", "IIO_MEAS_SPEC_SENSORS");
KSYMTAB_FUNC(ms_sensors_read_prom_word, "", "IIO_MEAS_SPEC_SENSORS");
KSYMTAB_FUNC(ms_sensors_convert_and_read, "", "IIO_MEAS_SPEC_SENSORS");
KSYMTAB_FUNC(ms_sensors_read_serial, "", "IIO_MEAS_SPEC_SENSORS");
KSYMTAB_FUNC(ms_sensors_write_resolution, "", "IIO_MEAS_SPEC_SENSORS");
KSYMTAB_FUNC(ms_sensors_show_battery_low, "", "IIO_MEAS_SPEC_SENSORS");
KSYMTAB_FUNC(ms_sensors_show_heater, "", "IIO_MEAS_SPEC_SENSORS");
KSYMTAB_FUNC(ms_sensors_write_heater, "", "IIO_MEAS_SPEC_SENSORS");
KSYMTAB_FUNC(ms_sensors_ht_read_temperature, "", "IIO_MEAS_SPEC_SENSORS");
KSYMTAB_FUNC(ms_sensors_ht_read_humidity, "", "IIO_MEAS_SPEC_SENSORS");
KSYMTAB_FUNC(ms_sensors_tp_read_prom, "", "IIO_MEAS_SPEC_SENSORS");
KSYMTAB_FUNC(ms_sensors_read_temp_and_pressure, "", "IIO_MEAS_SPEC_SENSORS");

SYMBOL_CRC(ms_sensors_reset, 0x2d2f5cd5, "");
SYMBOL_CRC(ms_sensors_read_prom_word, 0x045688dd, "");
SYMBOL_CRC(ms_sensors_convert_and_read, 0x42b6a050, "");
SYMBOL_CRC(ms_sensors_read_serial, 0xf5c79725, "");
SYMBOL_CRC(ms_sensors_write_resolution, 0x42283161, "");
SYMBOL_CRC(ms_sensors_show_battery_low, 0xe5add41a, "");
SYMBOL_CRC(ms_sensors_show_heater, 0xcd2aec36, "");
SYMBOL_CRC(ms_sensors_write_heater, 0xb13ef02d, "");
SYMBOL_CRC(ms_sensors_ht_read_temperature, 0x6b9a565f, "");
SYMBOL_CRC(ms_sensors_ht_read_humidity, 0x60956a50, "");
SYMBOL_CRC(ms_sensors_tp_read_prom, 0xcf25153f, "");
SYMBOL_CRC(ms_sensors_read_temp_and_pressure, 0xe3e77cef, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb865073a, "i2c_smbus_read_word_data" },
	{ 0x669c413b, "_dev_err" },
	{ 0x2c605a6c, "i2c_smbus_write_byte" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1f09285b, "i2c_smbus_read_i2c_block_data" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x555dcc70, "i2c_smbus_write_byte_data" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C7C6C47FFDE659E17031032");
