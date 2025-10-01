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
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5256f7f0, "irq_get_irq_data" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x32a0c53, "input_unregister_device" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0x41cc93f6, "input_event" },
	{ 0xe315d7b6, "input_mt_report_slot_state" },
	{ 0xa6257a2f, "complete" },
	{ 0x64433362, "input_mt_report_pointer_emulation" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x847188e8, "krealloc_noprof" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x8bbcc68f, "request_firmware_nowait" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0xdcb764ad, "memset" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0x5a921311, "strncmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x99c44b73, "input_allocate_device" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0xd6f640bb, "input_set_abs_params" },
	{ 0x5a02514b, "input_mt_init_slots" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x72731ed4, "input_alloc_absinfo" },
	{ 0xb727b479, "input_free_device" },
	{ 0x765bedb8, "request_firmware" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:qt602240_ts");
MODULE_ALIAS("i2c:atmel_mxt_ts");
MODULE_ALIAS("i2c:atmel_mxt_tp");
MODULE_ALIAS("i2c:maxtouch");
MODULE_ALIAS("i2c:mXT224");
MODULE_ALIAS("of:N*T*Catmel,maxtouch");
MODULE_ALIAS("of:N*T*Catmel,maxtouchC*");
MODULE_ALIAS("of:N*T*Catmel,qt602240_ts");
MODULE_ALIAS("of:N*T*Catmel,qt602240_tsC*");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_ts");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tsC*");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tp");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tpC*");
MODULE_ALIAS("of:N*T*Catmel,mXT224");
MODULE_ALIAS("of:N*T*Catmel,mXT224C*");

MODULE_INFO(srcversion, "0F6E3704C8DBDC7D43C658E");
