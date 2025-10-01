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
	{ 0x669c413b, "_dev_err" },
	{ 0x2b59fb76, "hid_hw_output_report" },
	{ 0x23237c6b, "hid_hw_raw_request" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x37a0cba, "kfree" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0x98cf60b3, "strlen" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcab72f31, "input_register_device" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0x72731ed4, "input_alloc_absinfo" },
	{ 0x639e2de9, "power_supply_get_drvdata" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4ca11597, "usb_submit_urb" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0x630a82d3, "hid_is_usb" },
	{ 0xaabb1e65, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9dcb80d8, "usb_free_urb" },
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x41cc93f6, "input_event" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe315d7b6, "input_mt_report_slot_state" },
	{ 0xb6092a57, "input_mt_sync_frame" },
	{ 0x8c9926ba, "hid_hw_close" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xde3f8b9d, "hid_hw_request" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xdcb764ad, "memset" },
	{ 0x47b0c752, "devm_led_classdev_register_ext" },
	{ 0x5fc625c6, "devm_kasprintf" },
	{ 0x85dc3ccb, "devm_power_supply_register" },
	{ 0x84fc3420, "power_supply_powers" },
	{ 0x6d77e136, "hid_hw_open" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0x6a35ed2, "input_ff_create_memless" },
	{ 0x5a02514b, "input_mt_init_slots" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xaa48c5b9, "hid_validate_values" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0003g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0005g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0003g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000024B");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000374");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000002");
MODULE_ALIAS("hid:b0003g*v0000054Cp00001000");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000306");
MODULE_ALIAS("hid:b0005g*v0000046Dp00000306");
MODULE_ALIAS("hid:b0005g*v00000609p00000306");
MODULE_ALIAS("hid:b0003g*v00001345p00003008");
MODULE_ALIAS("hid:b0005g*v00000609p00000368");
MODULE_ALIAS("hid:b0005g*v00000609p00000369");
MODULE_ALIAS("hid:b0003g*v000012BAp0000074B");
MODULE_ALIAS("hid:b0003g*v00001430p0000474C");
MODULE_ALIAS("hid:b0003g*v000012BAp00000100");
MODULE_ALIAS("hid:b0003g*v00001430p000007BB");

MODULE_INFO(srcversion, "9CB52D4489D87400FB901BB");
