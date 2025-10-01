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
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x649b3692, "i2c_mux_del_adapters" },
	{ 0xaad5afda, "i2c_put_adapter" },
	{ 0xdbedf963, "mux_control_deselect" },
	{ 0x4b216900, "mux_control_select_delay" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x3666a6d4, "devm_mux_control_get" },
	{ 0xdcb764ad, "memset" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0xdc0b74e3, "i2c_get_adapter_by_fwnode" },
	{ 0x469438cc, "of_node_put" },
	{ 0x50a58b43, "of_get_next_child" },
	{ 0x760c9fbb, "i2c_mux_alloc" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x2317acf2, "mux_control_states" },
	{ 0xde29233a, "i2c_mux_add_adapter" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x669c413b, "_dev_err" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "i2c-mux,mux-core");

MODULE_ALIAS("of:N*T*Ci2c-mux");
MODULE_ALIAS("of:N*T*Ci2c-muxC*");

MODULE_INFO(srcversion, "5C89EB28C8E49541CAF07F9");
