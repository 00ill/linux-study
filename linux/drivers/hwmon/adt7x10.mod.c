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

KSYMTAB_FUNC(adt7x10_probe, "_gpl", "");

SYMBOL_CRC(adt7x10_probe, 0xe6c9dd65, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcc0983c6, "regmap_write" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x6bcc92c6, "hwmon_notify_event" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa4800818, "regmap_multi_reg_read" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0xc8aca20f, "devm_hwmon_device_register_with_info" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "82D26B92F1B4D9ADEF68FD9");
