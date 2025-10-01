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

KSYMTAB_FUNC(dib3000mc_get_tuner_i2c_master, "", "");
KSYMTAB_FUNC(dib3000mc_pid_control, "", "");
KSYMTAB_FUNC(dib3000mc_pid_parse, "", "");
KSYMTAB_FUNC(dib3000mc_set_config, "", "");
KSYMTAB_FUNC(dib3000mc_i2c_enumeration, "", "");
KSYMTAB_FUNC(dib3000mc_attach, "_gpl", "");

SYMBOL_CRC(dib3000mc_get_tuner_i2c_master, 0xde691d17, "");
SYMBOL_CRC(dib3000mc_pid_control, 0x15f164ee, "");
SYMBOL_CRC(dib3000mc_pid_parse, 0x7d75bdec, "");
SYMBOL_CRC(dib3000mc_set_config, 0x43b214a1, "");
SYMBOL_CRC(dib3000mc_i2c_enumeration, 0x18643122, "");
SYMBOL_CRC(dib3000mc_attach, 0x05195a37, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x57bb9174, "dibx000_get_i2c_adapter" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x122c3a7e, "_printk" },
	{ 0xdd8b5f87, "dibx000_exit_i2c_master" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4829a47e, "memcpy" },
	{ 0x283f4977, "dibx000_init_i2c_master" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dibx000_common");


MODULE_INFO(srcversion, "D503ED79D2446A9D49A5823");
