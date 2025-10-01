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
	{ 0x33297427, "v4l2_async_unregister_subdev" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7c913590, "regulator_disable" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0xa8eb0c77, "v4l2_i2c_subdev_init" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x732ec33b, "regulator_register_notifier" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0x8444a114, "__v4l2_async_register_subdev" },
	{ 0xc358232e, "regulator_unregister_notifier" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "v4l2-async,videodev,mc");

MODULE_ALIAS("of:N*T*Cadi,ad5398");
MODULE_ALIAS("of:N*T*Cadi,ad5398C*");
MODULE_ALIAS("i2c:ad5398");

MODULE_INFO(srcversion, "89B3B7F4D11C9E48925F1BE");
