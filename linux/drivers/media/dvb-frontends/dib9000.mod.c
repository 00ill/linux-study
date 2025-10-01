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

KSYMTAB_FUNC(dib9000_fw_set_component_bus_speed, "", "");
KSYMTAB_FUNC(dib9000_get_tuner_interface, "", "");
KSYMTAB_FUNC(dib9000_get_component_bus_interface, "", "");
KSYMTAB_FUNC(dib9000_get_i2c_master, "", "");
KSYMTAB_FUNC(dib9000_set_i2c_adapter, "", "");
KSYMTAB_FUNC(dib9000_set_gpio, "", "");
KSYMTAB_FUNC(dib9000_fw_pid_filter_ctrl, "", "");
KSYMTAB_FUNC(dib9000_fw_pid_filter, "", "");
KSYMTAB_FUNC(dib9000_firmware_post_pll_init, "", "");
KSYMTAB_FUNC(dib9000_i2c_enumeration, "", "");
KSYMTAB_FUNC(dib9000_set_slave_frontend, "", "");
KSYMTAB_FUNC(dib9000_get_slave_frontend, "", "");
KSYMTAB_FUNC(dib9000_attach, "_gpl", "");

SYMBOL_CRC(dib9000_fw_set_component_bus_speed, 0x98f96121, "");
SYMBOL_CRC(dib9000_get_tuner_interface, 0x0a19abbd, "");
SYMBOL_CRC(dib9000_get_component_bus_interface, 0x7051aa46, "");
SYMBOL_CRC(dib9000_get_i2c_master, 0xa33e1bac, "");
SYMBOL_CRC(dib9000_set_i2c_adapter, 0x8c160118, "");
SYMBOL_CRC(dib9000_set_gpio, 0x420eed06, "");
SYMBOL_CRC(dib9000_fw_pid_filter_ctrl, 0x85777610, "");
SYMBOL_CRC(dib9000_fw_pid_filter, 0xfb4a92f7, "");
SYMBOL_CRC(dib9000_firmware_post_pll_init, 0x5808005a, "");
SYMBOL_CRC(dib9000_i2c_enumeration, 0xaa0f5b06, "");
SYMBOL_CRC(dib9000_set_slave_frontend, 0x60e1ba04, "");
SYMBOL_CRC(dib9000_get_slave_frontend, 0x658a63a6, "");
SYMBOL_CRC(dib9000_attach, 0xf05f9dab, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x57bb9174, "dibx000_get_i2c_adapter" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd4a72041, "dvb_frontend_detach" },
	{ 0xdd8b5f87, "dibx000_exit_i2c_master" },
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8733236, "intlog10" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x283f4977, "dibx000_init_i2c_master" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x60570175, "i2c_add_adapter" },
	{ 0xcf5e40ce, "dibx000_reset_i2c_master" },
	{ 0xdcb764ad, "memset" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "dibx000_common,dvb-core");


MODULE_INFO(srcversion, "9E445630D72E9D18322FBFC");
