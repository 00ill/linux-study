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
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x374647f3, "_dev_printk" },
	{ 0x612ddce5, "v4l2_fwnode_connector_free" },
	{ 0x41576788, "media_device_unregister_entity" },
	{ 0x33297427, "v4l2_async_unregister_subdev" },
	{ 0x263f3602, "v4l2_ctrl_handler_free" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0xcc0983c6, "regmap_write" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0xdcb764ad, "memset" },
	{ 0x9725ccf0, "v4l2_src_change_event_subdev_subscribe" },
	{ 0x626c1dc6, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x669c413b, "_dev_err" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0xfecf197a, "v4l2_subdev_notify_event" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0xb1c4027b, "media_device_register_entity" },
	{ 0x37a84f24, "media_create_pad_link" },
	{ 0x9ea20842, "media_pad_remote_pad_first" },
	{ 0x4632ba45, "media_entity_find_link" },
	{ 0xc38b7ac0, "v4l2_ctrl_handler_setup" },
	{ 0xfd9ee7fe, "__v4l2_subdev_state_get_crop" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xa8eb0c77, "v4l2_i2c_subdev_init" },
	{ 0x67b9787a, "of_graph_get_endpoint_count" },
	{ 0x38b95834, "of_graph_get_next_endpoint" },
	{ 0xdb2341ac, "v4l2_fwnode_connector_parse" },
	{ 0x7e340908, "v4l2_fwnode_connector_add_link" },
	{ 0x4241833, "of_graph_parse_endpoint" },
	{ 0x469438cc, "of_node_put" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x9aaf43cd, "v4l2_ctrl_handler_init_class" },
	{ 0x75c4b665, "v4l2_ctrl_new_std" },
	{ 0x133d5f87, "v4l2_ctrl_new_std_menu_items" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x8444a114, "__v4l2_async_register_subdev" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0x5fc625c6, "devm_kasprintf" },
	{ 0x8b5f7abc, "of_graph_get_endpoint_by_regs" },
	{ 0xa6d71c96, "v4l2_fwnode_endpoint_parse" },
	{ 0xfe616670, "v4l2_event_subdev_unsubscribe" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "v4l2-fwnode,mc,v4l2-async,videodev,regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,tvp5150");
MODULE_ALIAS("of:N*T*Cti,tvp5150C*");
MODULE_ALIAS("i2c:tvp5150");

MODULE_INFO(srcversion, "D19EC1FC8A99B0FF3E6321A");
