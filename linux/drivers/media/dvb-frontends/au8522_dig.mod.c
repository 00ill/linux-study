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

KSYMTAB_FUNC(au8522_attach, "_gpl", "");

SYMBOL_CRC(au8522_attach, 0x5949db41, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xab0ea0f, "au8522_release_state" },
	{ 0x89c0507d, "au8522_get_state" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4e329892, "au8522_analog_i2c_gate_ctrl" },
	{ 0x7e85b741, "au8522_init" },
	{ 0x1acda8d4, "au8522_i2c_gate_ctrl" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x14051359, "au8522_readreg" },
	{ 0x65a69b80, "au8522_led_ctrl" },
	{ 0x65d0306e, "au8522_writereg" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc53cc63e, "au8522_sleep" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "au8522_common");


MODULE_INFO(srcversion, "345180AF755528395AF5D45");
