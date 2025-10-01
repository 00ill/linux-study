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

KSYMTAB_FUNC(i2c_root_adapter, "_gpl", "");
KSYMTAB_FUNC(i2c_mux_alloc, "_gpl", "");
KSYMTAB_FUNC(i2c_mux_add_adapter, "_gpl", "");
KSYMTAB_FUNC(i2c_mux_del_adapters, "_gpl", "");

SYMBOL_CRC(i2c_root_adapter, 0xd727a8f9, "_gpl");
SYMBOL_CRC(i2c_mux_alloc, 0x760c9fbb, "_gpl");
SYMBOL_CRC(i2c_mux_add_adapter, 0xde29233a, "_gpl");
SYMBOL_CRC(i2c_mux_del_adapters, 0x649b3692, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfb656668, "i2c_adapter_type" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x4e323edc, "rt_mutex_unlock" },
	{ 0xa9a9fc43, "rt_mutex_trylock" },
	{ 0xeef925a0, "rt_mutex_lock" },
	{ 0x230a9582, "__i2c_smbus_xfer" },
	{ 0xccd654e1, "i2c_smbus_xfer" },
	{ 0xa0f62c1e, "__i2c_transfer" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x685bb4f9, "sysfs_remove_link" },
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0x469438cc, "of_node_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0xec905c5d, "of_get_child_by_name" },
	{ 0x50a58b43, "of_get_next_child" },
	{ 0x60570175, "i2c_add_adapter" },
	{ 0xcb647be8, "sysfs_create_link" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xe7278cfd, "i2c_add_numbered_adapter" },
	{ 0x669c413b, "_dev_err" },
	{ 0x697cbeec, "of_node_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B709C109B38EDD55D29D234");
