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

KSYMTAB_FUNC(i2c_hid_core_probe, "_gpl", "");
KSYMTAB_FUNC(i2c_hid_core_remove, "_gpl", "");
KSYMTAB_FUNC(i2c_hid_core_shutdown, "_gpl", "");
KSYMTAB_DATA(i2c_hid_core_pm, "_gpl", "");

SYMBOL_CRC(i2c_hid_core_probe, 0x72f2131a, "_gpl");
SYMBOL_CRC(i2c_hid_core_remove, 0x7c5f5083, "_gpl");
SYMBOL_CRC(i2c_hid_core_shutdown, 0x86126789, "_gpl");
SYMBOL_CRC(i2c_hid_core_pm, 0xbcf919c9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc1514a3b, "free_irq" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xfee89c86, "drm_panel_remove_follower" },
	{ 0x46b21a16, "hid_driver_suspend" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x56f15226, "hid_driver_reset_resume" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x74b5d32f, "hid_allocate_device" },
	{ 0xc69639d5, "hid_destroy_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x669c413b, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5256f7f0, "irq_get_irq_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xaff77e28, "i2c_smbus_read_byte" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfd444e73, "hid_input_report" },
	{ 0x6d30b69c, "drm_is_panel_follower" },
	{ 0x7346d030, "drm_panel_add_follower" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x6e527b0a, "hid_parse_report" },
	{ 0xf9a482f9, "msleep" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xb19d3a3e, "hid_add_device" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "drm");


MODULE_INFO(srcversion, "4EF297EAABC7975DD770919");
