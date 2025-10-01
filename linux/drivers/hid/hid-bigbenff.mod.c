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
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0x669c413b, "_dev_err" },
	{ 0x60f37a71, "hid_alloc_report_buf" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b9320ca, "hid_output_report" },
	{ 0x23237c6b, "hid_hw_raw_request" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0xaa48c5b9, "hid_validate_values" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x6a35ed2, "input_ff_create_memless" },
	{ 0x98cf60b3, "strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x47b0c752, "devm_led_classdev_register_ext" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0003g*v0000146Bp00000902");

MODULE_INFO(srcversion, "8D43B548850DF60CB22F023");
