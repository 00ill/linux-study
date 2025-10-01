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

KSYMTAB_DATA(adxl34x_groups, "_gpl", "");
KSYMTAB_FUNC(adxl34x_probe, "_gpl", "");

SYMBOL_CRC(adxl34x_groups, 0x86384276, "_gpl");
SYMBOL_CRC(adxl34x_probe, 0x6c625872, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x669c413b, "_dev_err" },
	{ 0x41cc93f6, "input_event" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0A45B24C6BCA7FE267DB5C6");
