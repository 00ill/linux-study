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

KSYMTAB_FUNC(mux_chip_alloc, "_gpl", "");
KSYMTAB_FUNC(mux_chip_register, "_gpl", "");
KSYMTAB_FUNC(mux_chip_unregister, "_gpl", "");
KSYMTAB_FUNC(mux_chip_free, "_gpl", "");
KSYMTAB_FUNC(devm_mux_chip_alloc, "_gpl", "");
KSYMTAB_FUNC(devm_mux_chip_register, "_gpl", "");
KSYMTAB_FUNC(mux_control_states, "_gpl", "");
KSYMTAB_FUNC(mux_control_select_delay, "_gpl", "");
KSYMTAB_FUNC(mux_state_select_delay, "_gpl", "");
KSYMTAB_FUNC(mux_control_try_select_delay, "_gpl", "");
KSYMTAB_FUNC(mux_state_try_select_delay, "_gpl", "");
KSYMTAB_FUNC(mux_control_deselect, "_gpl", "");
KSYMTAB_FUNC(mux_state_deselect, "_gpl", "");
KSYMTAB_FUNC(mux_control_get, "_gpl", "");
KSYMTAB_FUNC(mux_control_put, "_gpl", "");
KSYMTAB_FUNC(devm_mux_control_get, "_gpl", "");
KSYMTAB_FUNC(devm_mux_state_get, "_gpl", "");

SYMBOL_CRC(mux_chip_alloc, 0x86f9c683, "_gpl");
SYMBOL_CRC(mux_chip_register, 0xd23005ba, "_gpl");
SYMBOL_CRC(mux_chip_unregister, 0x7553d1b6, "_gpl");
SYMBOL_CRC(mux_chip_free, 0xea88f13d, "_gpl");
SYMBOL_CRC(devm_mux_chip_alloc, 0xb8409034, "_gpl");
SYMBOL_CRC(devm_mux_chip_register, 0x85ec9bba, "_gpl");
SYMBOL_CRC(mux_control_states, 0x2317acf2, "_gpl");
SYMBOL_CRC(mux_control_select_delay, 0x4b216900, "_gpl");
SYMBOL_CRC(mux_state_select_delay, 0xfa76e911, "_gpl");
SYMBOL_CRC(mux_control_try_select_delay, 0x6be32c0d, "_gpl");
SYMBOL_CRC(mux_state_try_select_delay, 0x0a65c89f, "_gpl");
SYMBOL_CRC(mux_control_deselect, 0xdbedf963, "_gpl");
SYMBOL_CRC(mux_state_deselect, 0x7cf08396, "_gpl");
SYMBOL_CRC(mux_control_get, 0x0fb0c5bc, "_gpl");
SYMBOL_CRC(mux_control_put, 0xc682d4d9, "_gpl");
SYMBOL_CRC(devm_mux_control_get, 0x3666a6d4, "_gpl");
SYMBOL_CRC(devm_mux_state_get, 0x61102419, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x469438cc, "of_node_put" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x1fc5434f, "dev_set_name" },
	{ 0x24da821d, "of_property_match_string" },
	{ 0xfbbe1c93, "device_match_of_node" },
	{ 0xcf2a6966, "up" },
	{ 0x16965a52, "device_initialize" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xde5315ca, "devres_add" },
	{ 0x122c3a7e, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x36dc6ece, "put_device" },
	{ 0x669c413b, "_dev_err" },
	{ 0x7b1a51f0, "device_add" },
	{ 0x9fff3285, "__of_parse_phandle_with_args" },
	{ 0x8ae2c330, "__devres_alloc_node" },
	{ 0xffb7c514, "ida_free" },
	{ 0x7143a676, "class_unregister" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x73f49957, "device_del" },
	{ 0xdcb764ad, "memset" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x36b6ebbf, "down_killable" },
	{ 0xa42d469b, "class_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xcf5fbd79, "class_find_device" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "330F3890F0AECD292E3B2B5");
