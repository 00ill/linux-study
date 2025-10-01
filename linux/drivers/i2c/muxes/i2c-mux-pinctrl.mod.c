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
	{ 0x2862394e, "pinctrl_select_state" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xebe20c1, "of_property_read_string_helper" },
	{ 0xdcb764ad, "memset" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0xdc0b74e3, "i2c_get_adapter_by_fwnode" },
	{ 0x469438cc, "of_node_put" },
	{ 0x760c9fbb, "i2c_mux_alloc" },
	{ 0x3034b00c, "devm_pinctrl_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe6b525d4, "pinctrl_lookup_state" },
	{ 0x669c413b, "_dev_err" },
	{ 0xd727a8f9, "i2c_root_adapter" },
	{ 0xde29233a, "i2c_mux_add_adapter" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("of:N*T*Ci2c-mux-pinctrl");
MODULE_ALIAS("of:N*T*Ci2c-mux-pinctrlC*");

MODULE_INFO(srcversion, "7F6697AEF204D9E066FB86E");
