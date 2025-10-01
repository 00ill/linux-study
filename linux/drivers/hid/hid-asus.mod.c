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
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5efb105e, "__hid_register_driver" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x23237c6b, "hid_hw_raw_request" },
	{ 0x37a0cba, "kfree" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0x639e2de9, "power_supply_get_drvdata" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x5fc625c6, "devm_kasprintf" },
	{ 0x85dc3ccb, "devm_power_supply_register" },
	{ 0x84fc3420, "power_supply_powers" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0x630a82d3, "hid_is_usb" },
	{ 0x78ddb76b, "dmi_match" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0x41cc93f6, "input_event" },
	{ 0x12437bc7, "power_supply_changed" },
	{ 0xe315d7b6, "input_mt_report_slot_state" },
	{ 0xb6092a57, "input_mt_sync_frame" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0x72731ed4, "input_alloc_absinfo" },
	{ 0x5a02514b, "input_mt_init_slots" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0x47b0c752, "devm_led_classdev_register_ext" },
	{ 0x2a10607e, "devm_kfree" },
	{ 0x122c3a7e, "_printk" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0018g*v00000B05p00008585");
MODULE_ALIAS("hid:b0018g*v00000B05p00000101");
MODULE_ALIAS("hid:b0003g*v00000B05p00001854");
MODULE_ALIAS("hid:b0003g*v00000B05p00001837");
MODULE_ALIAS("hid:b0003g*v00000B05p00001822");
MODULE_ALIAS("hid:b0003g*v00000B05p00001869");
MODULE_ALIAS("hid:b0003g*v00000B05p00001866");
MODULE_ALIAS("hid:b0003g*v00000B05p000019B6");
MODULE_ALIAS("hid:b0003g*v00000B05p00001A30");
MODULE_ALIAS("hid:b0003g*v00000B05p000018C6");
MODULE_ALIAS("hid:b0003g*v00000B05p00001ABE");
MODULE_ALIAS("hid:b0003g*v00000B05p00001B4C");
MODULE_ALIAS("hid:b0003g*v00000B05p0000196B");
MODULE_ALIAS("hid:b0003g*v00000B05p000017E0");
MODULE_ALIAS("hid:b0003g*v00000B05p00001807");
MODULE_ALIAS("hid:b0003g*v000004F2p00001125");
MODULE_ALIAS("hid:b0003g*v0000062Ap00005110");
MODULE_ALIAS("hid:b0003g*v00000C45p00005112");
MODULE_ALIAS("hid:b0005g*v00000B05p00008502");
MODULE_ALIAS("hid:b0003g*v0000048Dp0000CE50");
MODULE_ALIAS("hid:b0003g0001v00000B05p0000183D");

MODULE_INFO(srcversion, "C63B4A6DF8FB113B87FA200");
