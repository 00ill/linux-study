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

KSYMTAB_FUNC(ad714x_probe, "", "");

SYMBOL_CRC(ad714x_probe, 0xa1a5fdbe, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0x669c413b, "_dev_err" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x41cc93f6, "input_event" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ECE0A3B82BD036DB5D34FF6");
