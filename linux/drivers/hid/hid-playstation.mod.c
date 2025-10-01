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
	{ 0xe783e261, "sysfs_emit" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x41cc93f6, "input_event" },
	{ 0xe315d7b6, "input_mt_report_slot_state" },
	{ 0xb6092a57, "input_mt_sync_frame" },
	{ 0x669c413b, "_dev_err" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0x5fc625c6, "devm_kasprintf" },
	{ 0x85dc3ccb, "devm_power_supply_register" },
	{ 0x84fc3420, "power_supply_powers" },
	{ 0x639e2de9, "power_supply_get_drvdata" },
	{ 0x47b0c752, "devm_led_classdev_register_ext" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xdcb764ad, "memset" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0x5a02514b, "input_mt_init_slots" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x72731ed4, "input_alloc_absinfo" },
	{ 0x2b59fb76, "hid_hw_output_report" },
	{ 0xffb7c514, "ida_free" },
	{ 0x8c9926ba, "hid_hw_close" },
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0x23237c6b, "hid_hw_raw_request" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x37a0cba, "kfree" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdbd0ef77, "led_mc_calc_color_components" },
	{ 0x6a35ed2, "input_ff_create_memless" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0x6d77e136, "hid_hw_open" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x98cf60b3, "strlen" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xf82f1e94, "devm_led_classdev_multicolor_register_ext" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "led-class-multicolor,ff-memless");

MODULE_ALIAS("hid:b0005g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0003g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0005g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0003g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000BA0");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000CE6");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000CE6");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000DF2");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000DF2");

MODULE_INFO(srcversion, "98693A5D3A98D46AD073382");
