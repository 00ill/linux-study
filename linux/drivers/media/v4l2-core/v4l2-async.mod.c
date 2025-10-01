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

KSYMTAB_FUNC(v4l2_async_nf_init, "", "");
KSYMTAB_FUNC(v4l2_async_subdev_nf_init, "_gpl", "");
KSYMTAB_FUNC(v4l2_async_nf_register, "", "");
KSYMTAB_FUNC(v4l2_async_nf_unregister, "", "");
KSYMTAB_FUNC(v4l2_async_nf_cleanup, "_gpl", "");
KSYMTAB_FUNC(__v4l2_async_nf_add_fwnode, "_gpl", "");
KSYMTAB_FUNC(__v4l2_async_nf_add_fwnode_remote, "_gpl", "");
KSYMTAB_FUNC(__v4l2_async_nf_add_i2c, "_gpl", "");
KSYMTAB_FUNC(v4l2_async_subdev_endpoint_add, "_gpl", "");
KSYMTAB_FUNC(v4l2_async_connection_unique, "_gpl", "");
KSYMTAB_FUNC(__v4l2_async_register_subdev, "", "");
KSYMTAB_FUNC(v4l2_async_unregister_subdev, "", "");

SYMBOL_CRC(v4l2_async_nf_init, 0x4719faec, "");
SYMBOL_CRC(v4l2_async_subdev_nf_init, 0xa626f43f, "_gpl");
SYMBOL_CRC(v4l2_async_nf_register, 0x2ee112f3, "");
SYMBOL_CRC(v4l2_async_nf_unregister, 0x21c64f30, "");
SYMBOL_CRC(v4l2_async_nf_cleanup, 0xc3d19456, "_gpl");
SYMBOL_CRC(__v4l2_async_nf_add_fwnode, 0x93948a3c, "_gpl");
SYMBOL_CRC(__v4l2_async_nf_add_fwnode_remote, 0x7217401a, "_gpl");
SYMBOL_CRC(__v4l2_async_nf_add_i2c, 0xa89d4d67, "_gpl");
SYMBOL_CRC(v4l2_async_subdev_endpoint_add, 0xa0d82b69, "_gpl");
SYMBOL_CRC(v4l2_async_connection_unique, 0xf7ce3529, "_gpl");
SYMBOL_CRC(__v4l2_async_register_subdev, 0x8444a114, "");
SYMBOL_CRC(v4l2_async_unregister_subdev, 0x33297427, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x82539880, "i2c_verify_client" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x71c90ddc, "single_open" },
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc9ae8cac, "fwnode_handle_get" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x25e1210d, "__v4l2_device_register_subdev" },
	{ 0x419fd8ed, "v4l2_device_unregister_subdev" },
	{ 0x9a228441, "media_create_ancillary_link" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xb70166e7, "seq_printf" },
	{ 0x8a5711b1, "fwnode_property_present" },
	{ 0x89b1cb63, "fwnode_graph_get_port_parent" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x2c7cc941, "fwnode_graph_get_remote_endpoint" },
	{ 0x37a0cba, "kfree" },
	{ 0x2113e675, "v4l2_subdev_put_privacy_led" },
	{ 0x9300ac8c, "seq_lseek" },
	{ 0x661256ad, "seq_read" },
	{ 0x10139ad8, "single_release" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "videodev,mc");


MODULE_INFO(srcversion, "5BA6B5B7A07FBD1A4525A8B");
