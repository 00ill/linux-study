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
	{ 0x9b151109, "_dev_warn" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe393dda2, "hid_field_extract" },
	{ 0x41cc93f6, "input_event" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xffb7c514, "ida_free" },
	{ 0x8c9926ba, "hid_hw_close" },
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0x639e2de9, "power_supply_get_drvdata" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x2b59fb76, "hid_hw_output_report" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcb764ad, "memset" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x669c413b, "_dev_err" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe2964344, "__wake_up" },
	{ 0x5fc625c6, "devm_kasprintf" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0x6d77e136, "hid_hw_open" },
	{ 0xcf2a6966, "up" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x47b0c752, "devm_led_classdev_register_ext" },
	{ 0x85dc3ccb, "devm_power_supply_register" },
	{ 0x84fc3420, "power_supply_powers" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0xcab72f31, "input_register_device" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0x72731ed4, "input_alloc_absinfo" },
	{ 0x6a35ed2, "input_ff_create_memless" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0003g*v0000057Ep00002009");
MODULE_ALIAS("hid:b0003g*v0000057Ep00002017");
MODULE_ALIAS("hid:b0003g*v0000057Ep0000201E");
MODULE_ALIAS("hid:b0003g*v0000057Ep00002019");
MODULE_ALIAS("hid:b0005g*v0000057Ep00002009");
MODULE_ALIAS("hid:b0003g*v0000057Ep0000200E");
MODULE_ALIAS("hid:b0005g*v0000057Ep00002006");
MODULE_ALIAS("hid:b0005g*v0000057Ep00002007");
MODULE_ALIAS("hid:b0005g*v0000057Ep00002017");
MODULE_ALIAS("hid:b0005g*v0000057Ep0000201E");
MODULE_ALIAS("hid:b0005g*v0000057Ep00002019");

MODULE_INFO(srcversion, "E31B3EC31F63775652E5C7A");
