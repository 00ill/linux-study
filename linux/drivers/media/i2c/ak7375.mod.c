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
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xe806e4fd, "device_get_match_data" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0xa8eb0c77, "v4l2_i2c_subdev_init" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0x8444a114, "__v4l2_async_register_subdev" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x669c413b, "_dev_err" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "v4l2-async,videodev,mc");

MODULE_ALIAS("of:N*T*Casahi-kasei,ak7345");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak7345C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak7375");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak7375C*");

MODULE_INFO(srcversion, "D898CD823D612B6D0F2F249");
