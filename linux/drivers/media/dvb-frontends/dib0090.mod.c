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

KSYMTAB_FUNC(dib0090_dcc_freq, "", "");
KSYMTAB_FUNC(dib0090_pwm_gain_reset, "", "");
KSYMTAB_FUNC(dib0090_set_dc_servo, "", "");
KSYMTAB_FUNC(dib0090_gain_control, "", "");
KSYMTAB_FUNC(dib0090_get_current_gain, "", "");
KSYMTAB_FUNC(dib0090_get_wbd_target, "", "");
KSYMTAB_FUNC(dib0090_get_wbd_offset, "", "");
KSYMTAB_FUNC(dib0090_set_switch, "", "");
KSYMTAB_FUNC(dib0090_set_vga, "", "");
KSYMTAB_FUNC(dib0090_update_rframp_7090, "", "");
KSYMTAB_FUNC(dib0090_update_tuning_table_7090, "", "");
KSYMTAB_FUNC(dib0090_get_tune_state, "", "");
KSYMTAB_FUNC(dib0090_set_tune_state, "", "");
KSYMTAB_FUNC(dib0090_register, "_gpl", "");
KSYMTAB_FUNC(dib0090_fw_register, "_gpl", "");

SYMBOL_CRC(dib0090_dcc_freq, 0xa8746b2f, "");
SYMBOL_CRC(dib0090_pwm_gain_reset, 0x67cc891b, "");
SYMBOL_CRC(dib0090_set_dc_servo, 0x5c6dd8ee, "");
SYMBOL_CRC(dib0090_gain_control, 0x52724d65, "");
SYMBOL_CRC(dib0090_get_current_gain, 0xe05590ed, "");
SYMBOL_CRC(dib0090_get_wbd_target, 0x9fb0dd88, "");
SYMBOL_CRC(dib0090_get_wbd_offset, 0x870416f3, "");
SYMBOL_CRC(dib0090_set_switch, 0xcdc3beb9, "");
SYMBOL_CRC(dib0090_set_vga, 0xeb5a41bc, "");
SYMBOL_CRC(dib0090_update_rframp_7090, 0x0665cfe8, "");
SYMBOL_CRC(dib0090_update_tuning_table_7090, 0x1bc8a6b1, "");
SYMBOL_CRC(dib0090_get_tune_state, 0xdd216945, "");
SYMBOL_CRC(dib0090_set_tune_state, 0xe91b4dab, "");
SYMBOL_CRC(dib0090_register, 0x8e246e95, "_gpl");
SYMBOL_CRC(dib0090_fw_register, 0x482de007, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x122c3a7e, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F672ABEBE107C3D9B5D64CC");
