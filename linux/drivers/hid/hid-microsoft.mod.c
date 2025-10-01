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
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0x6a35ed2, "input_ff_create_memless" },
	{ 0x669c413b, "_dev_err" },
	{ 0x2b59fb76, "hid_hw_output_report" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x122c3a7e, "_printk" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0003g*v0000045Ep0000003B");
MODULE_ALIAS("hid:b0003g*v0000045Ep00000048");
MODULE_ALIAS("hid:b0003g*v0000045Ep000000DB");
MODULE_ALIAS("hid:b0003g*v0000045Ep000000DC");
MODULE_ALIAS("hid:b0003g*v0000045Ep0000071D");
MODULE_ALIAS("hid:b0003g*v0000045Ep000000F9");
MODULE_ALIAS("hid:b0003g*v0000045Ep00000713");
MODULE_ALIAS("hid:b0003g*v0000045Ep00000730");
MODULE_ALIAS("hid:b0003g*v0000045Ep000000B4");
MODULE_ALIAS("hid:b0003g*v0000045Ep00000750");
MODULE_ALIAS("hid:b0003g*v0000045Ep00000732");
MODULE_ALIAS("hid:b0003g*v0000045Ep0000009D");
MODULE_ALIAS("hid:b0003g*v0000045Ep0000076C");
MODULE_ALIAS("hid:b0003g*v0000045Ep000007DA");
MODULE_ALIAS("hid:b0003g*v0000045Ep000000E3");
MODULE_ALIAS("hid:b0005g*v0000045Ep00000701");
MODULE_ALIAS("hid:b0005g*v0000045Ep0000091B");
MODULE_ALIAS("hid:b0005g*v0000045Ep000002FD");
MODULE_ALIAS("hid:b0005g*v0000045Ep00000B20");
MODULE_ALIAS("hid:b0005g*v0000045Ep00000B13");
MODULE_ALIAS("hid:b0005g*v0000045Ep00000B05");
MODULE_ALIAS("hid:b0005g*v0000045Ep00000B22");
MODULE_ALIAS("hid:b0005g*v0000045Ep000002E0");

MODULE_INFO(srcversion, "46B3F07685801CCEBA17F59");
