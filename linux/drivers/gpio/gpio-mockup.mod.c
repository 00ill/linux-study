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
	{ 0x98fe0676, "debugfs_remove" },
	{ 0x35ef1cd, "gpiochip_get_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5e90e886, "irq_create_mapping_affinity" },
	{ 0x89426a62, "__irq_resolve_mapping" },
	{ 0x5256f7f0, "irq_get_irq_data" },
	{ 0xb88dbfce, "irq_set_irqchip_state" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x71c90ddc, "single_open" },
	{ 0xf9ca2eb4, "kstrtoint_from_user" },
	{ 0xdcb764ad, "memset" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x28310bcd, "kasprintf_strarray" },
	{ 0x472382ce, "fwnode_create_software_node" },
	{ 0xdcbfa77, "platform_device_register_full" },
	{ 0x248e1473, "kfree_strarray" },
	{ 0x9350a6bd, "fwnode_remove_software_node" },
	{ 0x122c3a7e, "_printk" },
	{ 0xa4b57c1, "debugfs_create_dir" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xd39d88d5, "__dev_fwnode" },
	{ 0x23e91bcc, "platform_device_unregister" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x7f1755e1, "device_property_read_u16_array" },
	{ 0xa0fffb26, "device_property_read_string" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xeef65a47, "devm_irq_domain_create_sim" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x71d5ffb9, "devm_gpiochip_add_data_with_key" },
	{ 0x2ce48aa, "device_find_any_child" },
	{ 0x5fc625c6, "devm_kasprintf" },
	{ 0x4a68060f, "debugfs_create_file" },
	{ 0x36dc6ece, "put_device" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x10139ad8, "single_release" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0xe43e74d9, "param_array_ops" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-mockup");
MODULE_ALIAS("of:N*T*Cgpio-mockupC*");

MODULE_INFO(srcversion, "DDAD97426BF27D5AC9B1B5A");
