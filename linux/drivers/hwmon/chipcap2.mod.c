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
	{ 0x34593969, "regulator_is_enabled" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa6257a2f, "complete" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8a27cd30, "devm_regulator_get_exclusive" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x2555a374, "fwnode_irq_get_byname" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xc8aca20f, "devm_hwmon_device_register_with_info" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x6bcc92c6, "hwmon_notify_event" },
	{ 0x7c913590, "regulator_disable" },
	{ 0xe94059dd, "i2c_smbus_write_word_data" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Camphenol,cc2d23");
MODULE_ALIAS("of:N*T*Camphenol,cc2d23C*");
MODULE_ALIAS("of:N*T*Camphenol,cc2d23s");
MODULE_ALIAS("of:N*T*Camphenol,cc2d23sC*");
MODULE_ALIAS("of:N*T*Camphenol,cc2d25");
MODULE_ALIAS("of:N*T*Camphenol,cc2d25C*");
MODULE_ALIAS("of:N*T*Camphenol,cc2d25s");
MODULE_ALIAS("of:N*T*Camphenol,cc2d25sC*");
MODULE_ALIAS("of:N*T*Camphenol,cc2d33");
MODULE_ALIAS("of:N*T*Camphenol,cc2d33C*");
MODULE_ALIAS("of:N*T*Camphenol,cc2d33s");
MODULE_ALIAS("of:N*T*Camphenol,cc2d33sC*");
MODULE_ALIAS("of:N*T*Camphenol,cc2d35");
MODULE_ALIAS("of:N*T*Camphenol,cc2d35C*");
MODULE_ALIAS("of:N*T*Camphenol,cc2d35s");
MODULE_ALIAS("of:N*T*Camphenol,cc2d35sC*");
MODULE_ALIAS("i2c:cc2d23");
MODULE_ALIAS("i2c:cc2d23s");
MODULE_ALIAS("i2c:cc2d25");
MODULE_ALIAS("i2c:cc2d25s");
MODULE_ALIAS("i2c:cc2d33");
MODULE_ALIAS("i2c:cc2d33s");
MODULE_ALIAS("i2c:cc2d35");
MODULE_ALIAS("i2c:cc2d35s");

MODULE_INFO(srcversion, "40E579E15219C115BC488C8");
