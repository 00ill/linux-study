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
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x649b3692, "i2c_mux_del_adapters" },
	{ 0x893a5557, "regmap_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7af7db8b, "__regmap_init_i2c" },
	{ 0x760c9fbb, "i2c_mux_alloc" },
	{ 0xde29233a, "i2c_mux_add_adapter" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x8733236, "intlog10" },
	{ 0x669c413b, "_dev_err" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "i2c-mux,regmap-i2c");

MODULE_ALIAS("i2c:rtl2832");

MODULE_INFO(srcversion, "649E8A1FA732C100DADD18C");
