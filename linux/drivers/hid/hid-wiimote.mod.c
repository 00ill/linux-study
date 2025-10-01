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
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x85d4ff86, "power_supply_register" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0x2b59fb76, "hid_hw_output_report" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x5efb105e, "__hid_register_driver" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0xe3dcebe7, "led_classdev_unregister" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x99ed6ef6, "get_device" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xb727b479, "input_free_device" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xcab72f31, "input_register_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x36dc6ece, "put_device" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xa916b694, "strnlen" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xee7a3241, "device_create_file" },
	{ 0x669c413b, "_dev_err" },
	{ 0x5d809a68, "simple_open" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6d77e136, "hid_hw_open" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x5a921311, "strncmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x8c9926ba, "hid_hw_close" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x37c9d5fc, "led_classdev_register_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x639e2de9, "power_supply_get_drvdata" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xdf237453, "timer_shutdown_sync" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x41cc93f6, "input_event" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x661256ad, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x84fc3420, "power_supply_powers" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x32700730, "kobject_uevent" },
	{ 0x3925304c, "power_supply_unregister" },
	{ 0x10139ad8, "single_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x6a35ed2, "input_ff_create_memless" },
	{ 0x98cf60b3, "strlen" },
	{ 0x71c90ddc, "single_open" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0xe9af6d33, "generic_file_llseek" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xa92274c6, "device_remove_file" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0005g*v0000057Ep00000306");
MODULE_ALIAS("hid:b0005g*v0000057Ep00000330");

MODULE_INFO(srcversion, "0D24A3B5E0F8073DF5733BC");
