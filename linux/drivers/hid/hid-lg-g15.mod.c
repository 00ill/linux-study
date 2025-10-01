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
	{ 0x6d77e136, "hid_hw_open" },
	{ 0x8c9926ba, "hid_hw_close" },
	{ 0x23237c6b, "hid_hw_raw_request" },
	{ 0x669c413b, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3141634d, "hid_unregister_driver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xcf4967eb, "hid_open_report" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1940079d, "devm_input_allocate_device" },
	{ 0x32b9316d, "hid_hw_start" },
	{ 0xdcb764ad, "memset" },
	{ 0xc9b1f445, "hid_hw_stop" },
	{ 0x7e8eaa58, "input_set_capability" },
	{ 0xcab72f31, "input_register_device" },
	{ 0x47b0c752, "devm_led_classdev_register_ext" },
	{ 0x2b59fb76, "hid_hw_output_report" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v0000046Dp0000C225");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C222");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C227");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C22D");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C22E");
MODULE_ALIAS("hid:b0003g*v0000046Dp00000A07");

MODULE_INFO(srcversion, "35406E0838B1DACBDA8F4D2");
