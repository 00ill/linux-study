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
	{ 0x26130a71, "w1_register_family" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbd143cf9, "w1_reset_select_slave" },
	{ 0xd4eb9522, "w1_write_block" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xea7b044f, "w1_write_8" },
	{ 0xb61957a6, "w1_read_8" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaded60ca, "i2c_del_adapter" },
	{ 0x2a10607e, "devm_kfree" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x15c22b09, "w1_touch_bit" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xbd6841d4, "crc16" },
	{ 0x652fcef6, "w1_read_block" },
	{ 0x99a20da3, "w1_reset_resume_command" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xe914e41e, "strcpy" },
	{ 0x60570175, "i2c_add_adapter" },
	{ 0xcc223af9, "w1_unregister_family" },
	{ 0x6afcefb6, "param_ops_byte" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "E8B6F462E8647B5391A73B3");
