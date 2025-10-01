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

KSYMTAB_FUNC(au8522_writereg, "", "");
KSYMTAB_FUNC(au8522_readreg, "", "");
KSYMTAB_FUNC(au8522_i2c_gate_ctrl, "", "");
KSYMTAB_FUNC(au8522_analog_i2c_gate_ctrl, "", "");
KSYMTAB_FUNC(au8522_get_state, "", "");
KSYMTAB_FUNC(au8522_release_state, "", "");
KSYMTAB_FUNC(au8522_led_ctrl, "", "");
KSYMTAB_FUNC(au8522_init, "", "");
KSYMTAB_FUNC(au8522_sleep, "", "");

SYMBOL_CRC(au8522_writereg, 0x65d0306e, "");
SYMBOL_CRC(au8522_readreg, 0x14051359, "");
SYMBOL_CRC(au8522_i2c_gate_ctrl, 0x1acda8d4, "");
SYMBOL_CRC(au8522_analog_i2c_gate_ctrl, 0x4e329892, "");
SYMBOL_CRC(au8522_get_state, 0x89c0507d, "");
SYMBOL_CRC(au8522_release_state, 0x0ab0ea0f, "");
SYMBOL_CRC(au8522_led_ctrl, 0x65a69b80, "");
SYMBOL_CRC(au8522_init, 0x7e85b741, "");
SYMBOL_CRC(au8522_sleep, 0xc53cc63e, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "077D63E081ACFB2C749A075");
