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

KSYMTAB_FUNC(inv_sensors_timestamp_init, "_gpl", "IIO_INV_SENSORS_TIMESTAMP");
KSYMTAB_FUNC(inv_sensors_timestamp_update_odr, "_gpl", "IIO_INV_SENSORS_TIMESTAMP");
KSYMTAB_FUNC(inv_sensors_timestamp_interrupt, "_gpl", "IIO_INV_SENSORS_TIMESTAMP");
KSYMTAB_FUNC(inv_sensors_timestamp_apply_odr, "_gpl", "IIO_INV_SENSORS_TIMESTAMP");

SYMBOL_CRC(inv_sensors_timestamp_init, 0x4c441c91, "_gpl");
SYMBOL_CRC(inv_sensors_timestamp_update_odr, 0x8f76efe5, "_gpl");
SYMBOL_CRC(inv_sensors_timestamp_interrupt, 0x61a3d94e, "_gpl");
SYMBOL_CRC(inv_sensors_timestamp_apply_odr, 0xf515045a, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdcb764ad, "memset" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2128D8523E726F99118A336");
