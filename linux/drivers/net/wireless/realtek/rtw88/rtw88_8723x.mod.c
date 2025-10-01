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

KSYMTAB_DATA(rtw8723x_common, "", "");

SYMBOL_CRC(rtw8723x_common, 0x22950520, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x58210e60, "rtw_rate_section" },
	{ 0x519c8ba9, "rtw_rate_size" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "rtw88_core");


MODULE_INFO(srcversion, "FC94A8FB33365801CAD774E");
