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
	{ 0x5efb105e, "__hid_register_driver" },
	{ 0x41cc93f6, "input_event" },
	{ 0xe94986d6, "sched_clock" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x630a82d3, "hid_is_usb" },
	{ 0x466985b0, "usb_set_wireless_status" },
	{ 0x95c93767, "input_mt_get_slot_by_key" },
	{ 0xe315d7b6, "input_mt_report_slot_state" },
	{ 0xb6092a57, "input_mt_sync_frame" },
	{ 0x374b3c83, "sysfs_remove_group" },
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6d77e136, "hid_hw_open" },
	{ 0x8c9926ba, "hid_hw_close" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdcb764ad, "memset" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2b59fb76, "hid_hw_output_report" },
	{ 0x23237c6b, "hid_hw_raw_request" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x639e2de9, "power_supply_get_drvdata" },
	{ 0x5a921311, "strncmp" },
	{ 0x96848186, "scnprintf" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xa92274c6, "device_remove_file" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x37a0cba, "kfree" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0xc310b981, "strnstr" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0x72731ed4, "input_alloc_absinfo" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0x5a02514b, "input_mt_init_slots" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x12437bc7, "power_supply_changed" },
	{ 0x2bd3941b, "hid_report_raw_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x669c413b, "_dev_err" },
	{ 0xe393dda2, "hid_field_extract" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xed85cddf, "sysfs_create_group" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0xcf2a6966, "up" },
	{ 0x6626afca, "down" },
	{ 0xdbc9050f, "hid_connect" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2a10607e, "devm_kfree" },
	{ 0x4ac7587f, "input_ff_create" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xee7a3241, "device_create_file" },
	{ 0x4679d10c, "devm_kmemdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x85dc3ccb, "devm_power_supply_register" },
	{ 0x84fc3420, "power_supply_powers" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x5fc625c6, "devm_kasprintf" },
	{ 0xb727b479, "input_free_device" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g0102v0000046Dp00004011");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004101");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B00C");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00001017");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000402D");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000101B");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000101A");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004024");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004002");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B305");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B309");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B30B");
MODULE_ALIAS("hid:b0003g0102v0000046Dp*");
MODULE_ALIAS("hid:b0003g0104v0000046Dp00000049");
MODULE_ALIAS("hid:b0003g0104v0000046Dp00000057");
MODULE_ALIAS("hid:b0003g0104v0000046Dp0000005C");
MODULE_ALIAS("hid:b0003g0104v0000046Dp000000FE");
MODULE_ALIAS("hid:b0003g0104v0000046Dp*");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C082");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C08D");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C087");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C090");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C081");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C086");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C088");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C08A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C090");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C091");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C343");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C262");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C26E");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C094");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C09B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C09A");
MODULE_ALIAS("hid:b0003g*v0000046Dp00000A87");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B305");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B309");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B30B");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B35F");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B008");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B012");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B015");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B019");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B01D");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B01E");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B020");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B02A");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B023");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B025");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B034");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B038");

MODULE_INFO(srcversion, "1385136C42A001D2F4CFE54");
