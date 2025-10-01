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
	{ 0x419fd8ed, "v4l2_device_unregister_subdev" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0x122c3a7e, "_printk" },
	{ 0x94838529, "v4l2_ctrl_handler_log_status" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x555dcc70, "i2c_smbus_write_byte_data" },
	{ 0xa3f622a6, "v4l2_ctrl_g_ctrl" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xa8eb0c77, "v4l2_i2c_subdev_init" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:wm8775");

MODULE_INFO(srcversion, "A1E5E5B6D6DA668F7D4D30C");
