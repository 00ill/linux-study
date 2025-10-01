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
	{ 0x5b6a59bc, "v4l2_subdev_call_wrappers" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x21c64f30, "v4l2_async_nf_unregister" },
	{ 0xc3d19456, "v4l2_async_nf_cleanup" },
	{ 0x33297427, "v4l2_async_unregister_subdev" },
	{ 0x15be55ad, "v4l2_subdev_cleanup" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x89fe0b01, "__v4l2_subdev_state_get_format" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdbedf963, "mux_control_deselect" },
	{ 0x6be32c0d, "mux_control_try_select_delay" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x9ea20842, "media_pad_remote_pad_first" },
	{ 0x669c413b, "_dev_err" },
	{ 0x23eca69e, "v4l2_create_fwnode_links" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xd852811d, "v4l2_subdev_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x38b95834, "of_graph_get_next_endpoint" },
	{ 0x4241833, "of_graph_parse_endpoint" },
	{ 0x3666a6d4, "devm_mux_control_get" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8b5f7abc, "of_graph_get_endpoint_by_regs" },
	{ 0xa6d71c96, "v4l2_fwnode_endpoint_parse" },
	{ 0x469438cc, "of_node_put" },
	{ 0xa3732c8f, "media_entity_pads_init" },
	{ 0x247cff22, "__v4l2_subdev_init_finalize" },
	{ 0xa626f43f, "v4l2_async_subdev_nf_init" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0xea00fde7, "fwnode_graph_get_endpoint_by_id" },
	{ 0x2c7cc941, "fwnode_graph_get_remote_endpoint" },
	{ 0x7217401a, "__v4l2_async_nf_add_fwnode_remote" },
	{ 0x2ee112f3, "v4l2_async_nf_register" },
	{ 0x8444a114, "__v4l2_async_register_subdev" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4900d010, "v4l2_subdev_get_fwnode_pad_1_to_1" },
	{ 0x580fd1bb, "v4l2_subdev_link_validate" },
	{ 0xd523ea7, "v4l2_subdev_get_fmt" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,v4l2-async,mux-core,mc,v4l2-fwnode");

MODULE_ALIAS("of:N*T*Cvideo-mux");
MODULE_ALIAS("of:N*T*Cvideo-muxC*");

MODULE_INFO(srcversion, "694D6F146AE57FBBD8731EF");
