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
	{ 0x649b3692, "i2c_mux_del_adapters" },
	{ 0x893a5557, "regmap_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0x8733236, "intlog10" },
	{ 0x669c413b, "_dev_err" },
	{ 0xa0f62c1e, "__i2c_transfer" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x6e3da156, "__regmap_init" },
	{ 0x760c9fbb, "i2c_mux_alloc" },
	{ 0xde29233a, "i2c_mux_add_adapter" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("i2c:rtl2830");

MODULE_INFO(srcversion, "BB985ECAB50BD204B634163");
