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
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbd143cf9, "w1_reset_select_slave" },
	{ 0xea7b044f, "w1_write_8" },
	{ 0x652fcef6, "w1_read_block" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd4eb9522, "w1_write_block" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x639e2de9, "power_supply_get_drvdata" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xcc223af9, "w1_unregister_family" },
	{ 0x12437bc7, "power_supply_changed" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x96fd6cbf, "power_supply_am_i_supplied" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xf261f72a, "_dev_notice" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x85dc3ccb, "devm_power_supply_register" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x669c413b, "_dev_err" },
	{ 0xaa4df60d, "param_ops_uint" },
	{ 0xde3f102d, "param_ops_bool" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "EFC0BD5F2EF5299E3FDEC85");
