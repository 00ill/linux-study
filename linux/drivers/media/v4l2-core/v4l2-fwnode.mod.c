#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(v4l2_fwnode_endpoint_parse, "_gpl", "");
KSYMTAB_FUNC(v4l2_fwnode_endpoint_free, "_gpl", "");
KSYMTAB_FUNC(v4l2_fwnode_endpoint_alloc_parse, "_gpl", "");
KSYMTAB_FUNC(v4l2_fwnode_parse_link, "_gpl", "");
KSYMTAB_FUNC(v4l2_fwnode_put_link, "_gpl", "");
KSYMTAB_FUNC(v4l2_fwnode_connector_free, "_gpl", "");
KSYMTAB_FUNC(v4l2_fwnode_connector_parse, "_gpl", "");
KSYMTAB_FUNC(v4l2_fwnode_connector_add_link, "_gpl", "");
KSYMTAB_FUNC(v4l2_fwnode_device_parse, "_gpl", "");
KSYMTAB_FUNC(v4l2_async_register_subdev_sensor, "_gpl", "");

SYMBOL_CRC(v4l2_fwnode_endpoint_parse, 0xa6d71c96, "_gpl");
SYMBOL_CRC(v4l2_fwnode_endpoint_free, 0xce5bb82a, "_gpl");
SYMBOL_CRC(v4l2_fwnode_endpoint_alloc_parse, 0xc95ea0f9, "_gpl");
SYMBOL_CRC(v4l2_fwnode_parse_link, 0x06143b27, "_gpl");
SYMBOL_CRC(v4l2_fwnode_put_link, 0x41fca2dd, "_gpl");
SYMBOL_CRC(v4l2_fwnode_connector_free, 0x612ddce5, "_gpl");
SYMBOL_CRC(v4l2_fwnode_connector_parse, 0xdb2341ac, "_gpl");
SYMBOL_CRC(v4l2_fwnode_connector_add_link, 0x7e340908, "_gpl");
SYMBOL_CRC(v4l2_fwnode_device_parse, 0xdbd31f73, "_gpl");
SYMBOL_CRC(v4l2_async_register_subdev_sensor, 0x9676abff, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf6d37b88, "fwnode_property_read_u32_array" },
	{ 0x122c3a7e, "_printk" },
	{ 0x8a5711b1, "fwnode_property_present" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xeb4a5318, "fwnode_graph_parse_endpoint" },
	{ 0x37a0cba, "kfree" },
	{ 0xe87fcff1, "fwnode_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x37ec39b5, "fwnode_property_get_reference_args" },
	{ 0x93948a3c, "__v4l2_async_nf_add_fwnode" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xa626f43f, "v4l2_async_subdev_nf_init" },
	{ 0xb4415c2b, "v4l2_subdev_get_privacy_led" },
	{ 0x2ee112f3, "v4l2_async_nf_register" },
	{ 0x8444a114, "__v4l2_async_register_subdev" },
	{ 0x2113e675, "v4l2_subdev_put_privacy_led" },
	{ 0xc3d19456, "v4l2_async_nf_cleanup" },
	{ 0x21c64f30, "v4l2_async_nf_unregister" },
	{ 0x71865a15, "fwnode_property_read_u64_array" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x89b1cb63, "fwnode_graph_get_port_parent" },
	{ 0xf265b171, "fwnode_graph_get_remote_port_parent" },
	{ 0xede4d93f, "fwnode_get_name" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0x2c7cc941, "fwnode_graph_get_remote_endpoint" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "v4l2-async,videodev");


MODULE_INFO(srcversion, "1118A6A1EB4212D5621572D");
