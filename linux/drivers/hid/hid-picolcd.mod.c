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
	{ 0x99c44b73, "input_allocate_device" },
	{ 0x3b9320ca, "hid_output_report" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x5efb105e, "__hid_register_driver" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xb727b479, "input_free_device" },
	{ 0xcab72f31, "input_register_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x60f37a71, "hid_alloc_report_buf" },
	{ 0xee7a3241, "device_create_file" },
	{ 0x669c413b, "_dev_err" },
	{ 0x5d809a68, "simple_open" },
	{ 0x648f4314, "hid_set_field" },
	{ 0xde3f8b9d, "hid_hw_request" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0x6d77e136, "hid_hw_open" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x8c9926ba, "hid_hw_close" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x41cc93f6, "input_event" },
	{ 0xe49080e7, "hid_debug_event" },
	{ 0x661256ad, "seq_read" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x10139ad8, "single_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x71c90ddc, "single_open" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0xe9af6d33, "generic_file_llseek" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa92274c6, "device_remove_file" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000004D8p0000C002");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F002");

MODULE_INFO(srcversion, "5B2314DE5BDD85A8180A2FA");
