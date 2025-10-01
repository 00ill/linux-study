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
	{ 0x994edb3c, "regulator_bulk_enable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6f7defa4, "gpiod_direction_output" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x94cdce7d, "regulator_bulk_disable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xee1be65c, "regmap_raw_write" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xfd9ee7fe, "__v4l2_subdev_state_get_crop" },
	{ 0x89fe0b01, "__v4l2_subdev_state_get_format" },
	{ 0xa2eb131b, "__v4l2_ctrl_modify_range" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0xdcb764ad, "memset" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x33297427, "v4l2_async_unregister_subdev" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x6d58ceba, "__v4l2_ctrl_handler_setup" },
	{ 0xc90aa5df, "__v4l2_ctrl_grab" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe304d311, "__pm_runtime_suspend" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x273de036, "devm_regulator_bulk_get" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xaf639b91, "of_device_get_match_data" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0xa8eb0c77, "v4l2_i2c_subdev_init" },
	{ 0xdbd31f73, "v4l2_fwnode_device_parse" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x133d5f87, "v4l2_ctrl_new_std_menu_items" },
	{ 0x4f66b8c7, "v4l2_ctrl_new_fwnode_properties" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0x247cff22, "__v4l2_subdev_init_finalize" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x8444a114, "__v4l2_async_register_subdev" },
	{ 0x62990e3a, "pm_runtime_set_autosuspend_delay" },
	{ 0xc0d8cf8, "__pm_runtime_use_autosuspend" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x6cfb64fe, "regmap_raw_read" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xd1b9afa6, "pm_runtime_get_if_in_use" },
	{ 0xd523ea7, "v4l2_subdev_get_fmt" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,v4l2-async,regmap-i2c,v4l2-fwnode,mc");

MODULE_ALIAS("of:N*T*Csony,imx296");
MODULE_ALIAS("of:N*T*Csony,imx296C*");
MODULE_ALIAS("of:N*T*Csony,imx296ll");
MODULE_ALIAS("of:N*T*Csony,imx296llC*");
MODULE_ALIAS("of:N*T*Csony,imx296lq");
MODULE_ALIAS("of:N*T*Csony,imx296lqC*");

MODULE_INFO(srcversion, "78D33397D768BA45254FD1E");
