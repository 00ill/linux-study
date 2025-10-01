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
	{ 0x4829a47e, "memcpy" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4df83a8d, "gpiod_set_value" },
	{ 0x7c913590, "regulator_disable" },
	{ 0x23e91bcc, "platform_device_unregister" },
	{ 0x419fd8ed, "v4l2_device_unregister_subdev" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdcb764ad, "memset" },
	{ 0xa6257a2f, "complete" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xddf1ec59, "devm_regulator_get_optional" },
	{ 0xa8eb0c77, "v4l2_i2c_subdev_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0xac8e4c37, "v4l2_ctrl_new_custom" },
	{ 0x1ae48415, "v4l2_ctrl_new_std_menu" },
	{ 0xf27b4bb9, "v4l2_ctrl_cluster" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x25dfac11, "platform_device_alloc" },
	{ 0xf7c74ac0, "platform_device_add_data" },
	{ 0xcc3bfc6c, "platform_device_add" },
	{ 0x56e83a64, "platform_device_put" },
	{ 0x669c413b, "_dev_err" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("of:N*T*Csilabs,si4713");
MODULE_ALIAS("of:N*T*Csilabs,si4713C*");
MODULE_ALIAS("i2c:si4713");

MODULE_INFO(srcversion, "BEE0600D16AAF8B21F2E904");
