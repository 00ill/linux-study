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

KSYMTAB_FUNC(tpm_tis_remove, "_gpl", "");
KSYMTAB_FUNC(tpm_tis_core_init, "_gpl", "");

SYMBOL_CRC(tpm_tis_remove, 0xf073a598, "_gpl");
SYMBOL_CRC(tpm_tis_core_init, 0x4305df44, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd71fb816, "devm_free_irq" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x669c413b, "_dev_err" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd73653c4, "freezer_active" },
	{ 0x4958742, "freezing_slow_path" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xedc03953, "iounmap" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x7b8227b9, "tpm1_getcap" },
	{ 0xac6da50c, "tpm_calc_ordinal_duration" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xc1434922, "tpm2_get_tpm_pt" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe2964344, "__wake_up" },
	{ 0x6b4fe010, "tpmm_chip_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xda518ca5, "tpm_chip_start" },
	{ 0x25719377, "tpm2_probe" },
	{ 0x8eff6693, "tpm_chip_stop" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4de17ca0, "tpm_chip_bootstrap" },
	{ 0xa0e6ef26, "tpm_get_timeouts" },
	{ 0x498b8b49, "tpm_chip_register" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "tpm");


MODULE_INFO(srcversion, "9B9207854A93D1F288EEB53");
