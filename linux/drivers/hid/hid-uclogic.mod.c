#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x630a82d3, "hid_is_usb" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5efb105e, "__hid_register_driver" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0x70f7da02, "usb_interrupt_msg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x669c413b, "_dev_err" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5a921311, "strncmp" },
	{ 0x414ea878, "usb_control_msg" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x90548a4e, "usb_string" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x41cc93f6, "input_event" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5fc625c6, "devm_kasprintf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v00005543p00000042");
MODULE_ALIAS("hid:b0003g*v00005543p00000003");
MODULE_ALIAS("hid:b0003g*v00005543p00000004");
MODULE_ALIAS("hid:b0003g*v00005543p00000005");
MODULE_ALIAS("hid:b0003g*v00005543p00000064");
MODULE_ALIAS("hid:b0003g*v00005543p00000522");
MODULE_ALIAS("hid:b0003g*v00005543p00000781");
MODULE_ALIAS("hid:b0003g*v0000256Cp0000006E");
MODULE_ALIAS("hid:b0003g*v0000256Cp0000006D");
MODULE_ALIAS("hid:b0003g*v0000145Fp00000212");
MODULE_ALIAS("hid:b0003g*v00005543p0000006E");
MODULE_ALIAS("hid:b0003g*v00005543p0000004D");
MODULE_ALIAS("hid:b0003g*v00005543p00000081");
MODULE_ALIAS("hid:b0003g*v00005543p00000045");
MODULE_ALIAS("hid:b0003g*v00005543p00000047");
MODULE_ALIAS("hid:b0003g*v00005543p00003031");
MODULE_ALIAS("hid:b0003g*v00002179p00000053");
MODULE_ALIAS("hid:b0003g*v00002179p00000077");
MODULE_ALIAS("hid:b0003g*v000028BDp00001903");
MODULE_ALIAS("hid:b0003g*v000028BDp00000074");
MODULE_ALIAS("hid:b0003g*v000028BDp00000071");
MODULE_ALIAS("hid:b0003g*v000028BDp00000055");
MODULE_ALIAS("hid:b0003g*v000028BDp00000075");
MODULE_ALIAS("hid:b0003g*v000028BDp00000094");
MODULE_ALIAS("hid:b0003g*v000028BDp00000042");
MODULE_ALIAS("hid:b0003g*v000028BDp00000905");
MODULE_ALIAS("hid:b0003g*v000028BDp00000935");
MODULE_ALIAS("hid:b0003g*v000028BDp00000934");
MODULE_ALIAS("hid:b0003g*v000028BDp00000909");
MODULE_ALIAS("hid:b0003g*v000028BDp00000933");
MODULE_ALIAS("hid:b0003g*v000028BDp00000078");

MODULE_INFO(srcversion, "1EDD261C626938FC30AFB54");
