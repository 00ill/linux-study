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
	{ 0x419fd8ed, "v4l2_device_unregister_subdev" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0x89fe0b01, "__v4l2_subdev_state_get_format" },
	{ 0xdcb764ad, "memset" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0xac8e4c37, "v4l2_ctrl_new_custom" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xa8eb0c77, "v4l2_i2c_subdev_init" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x3383ea7b, "fwnode_graph_get_next_endpoint" },
	{ 0xa6d71c96, "v4l2_fwnode_endpoint_parse" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x3250fd9c, "devm_gpiod_get" },
	{ 0xd213cf97, "desc_to_gpio" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5904a6cd, "v4l2_ctrl_find" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3ac81b38, "__v4l2_ctrl_s_ctrl" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8444a114, "__v4l2_async_register_subdev" },
	{ 0xc90aa5df, "__v4l2_ctrl_grab" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x765bedb8, "request_firmware" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xc38b7ac0, "v4l2_ctrl_handler_setup" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "v4l2-async,videodev,v4l2-fwnode,mc");

MODULE_ALIAS("of:N*T*Cinfineon,irs1125");
MODULE_ALIAS("of:N*T*Cinfineon,irs1125C*");

MODULE_INFO(srcversion, "C6F63B3276B839102375E03");
