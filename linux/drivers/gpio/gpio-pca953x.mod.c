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
	{ 0x7c913590, "regulator_disable" },
	{ 0x35ef1cd, "gpiochip_get_data" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2d5cd55f, "regmap_update_bits_base" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8a6da117, "regmap_bulk_read" },
	{ 0x669c413b, "_dev_err" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x18345b8e, "__bitmap_replace" },
	{ 0x945446cb, "regmap_bulk_write" },
	{ 0x9ba6295b, "regmap_read" },
	{ 0x52af2055, "regcache_sync_region" },
	{ 0xb70166e7, "seq_printf" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xf29a84d1, "gpiochip_enable_irq" },
	{ 0xe4a8350b, "gpiochip_disable_irq" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeca957d1, "__bitmap_and" },
	{ 0xf6fc8791, "__bitmap_xor" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x89426a62, "__irq_resolve_mapping" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x7c173634, "__bitmap_complement" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0xfc6bc6d3, "__devm_add_action" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0xe7b70404, "regcache_mark_dirty" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x603da9ea, "handle_simple_irq" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x71d5ffb9, "devm_gpiochip_add_data_with_key" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0xc7d83fd, "gpiochip_irq_reqres" },
	{ 0xf5a126c3, "gpiochip_irq_relres" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cnxp,pca6408");
MODULE_ALIAS("of:N*T*Cnxp,pca6408C*");
MODULE_ALIAS("of:N*T*Cnxp,pca6416");
MODULE_ALIAS("of:N*T*Cnxp,pca6416C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9505");
MODULE_ALIAS("of:N*T*Cnxp,pca9505C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9506");
MODULE_ALIAS("of:N*T*Cnxp,pca9506C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9534");
MODULE_ALIAS("of:N*T*Cnxp,pca9534C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9535");
MODULE_ALIAS("of:N*T*Cnxp,pca9535C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9536");
MODULE_ALIAS("of:N*T*Cnxp,pca9536C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9537");
MODULE_ALIAS("of:N*T*Cnxp,pca9537C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9538");
MODULE_ALIAS("of:N*T*Cnxp,pca9538C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9539");
MODULE_ALIAS("of:N*T*Cnxp,pca9539C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9554");
MODULE_ALIAS("of:N*T*Cnxp,pca9554C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9555");
MODULE_ALIAS("of:N*T*Cnxp,pca9555C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9556");
MODULE_ALIAS("of:N*T*Cnxp,pca9556C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9557");
MODULE_ALIAS("of:N*T*Cnxp,pca9557C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9574");
MODULE_ALIAS("of:N*T*Cnxp,pca9574C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9575");
MODULE_ALIAS("of:N*T*Cnxp,pca9575C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9698");
MODULE_ALIAS("of:N*T*Cnxp,pca9698C*");
MODULE_ALIAS("of:N*T*Cnxp,pcal6408");
MODULE_ALIAS("of:N*T*Cnxp,pcal6408C*");
MODULE_ALIAS("of:N*T*Cnxp,pcal6416");
MODULE_ALIAS("of:N*T*Cnxp,pcal6416C*");
MODULE_ALIAS("of:N*T*Cnxp,pcal6524");
MODULE_ALIAS("of:N*T*Cnxp,pcal6524C*");
MODULE_ALIAS("of:N*T*Cnxp,pcal6534");
MODULE_ALIAS("of:N*T*Cnxp,pcal6534C*");
MODULE_ALIAS("of:N*T*Cnxp,pcal9535");
MODULE_ALIAS("of:N*T*Cnxp,pcal9535C*");
MODULE_ALIAS("of:N*T*Cnxp,pcal9554b");
MODULE_ALIAS("of:N*T*Cnxp,pcal9554bC*");
MODULE_ALIAS("of:N*T*Cnxp,pcal9555a");
MODULE_ALIAS("of:N*T*Cnxp,pcal9555aC*");
MODULE_ALIAS("of:N*T*Cmaxim,max7310");
MODULE_ALIAS("of:N*T*Cmaxim,max7310C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7312");
MODULE_ALIAS("of:N*T*Cmaxim,max7312C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7313");
MODULE_ALIAS("of:N*T*Cmaxim,max7313C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7315");
MODULE_ALIAS("of:N*T*Cmaxim,max7315C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7318");
MODULE_ALIAS("of:N*T*Cmaxim,max7318C*");
MODULE_ALIAS("of:N*T*Cti,pca6107");
MODULE_ALIAS("of:N*T*Cti,pca6107C*");
MODULE_ALIAS("of:N*T*Cti,pca9536");
MODULE_ALIAS("of:N*T*Cti,pca9536C*");
MODULE_ALIAS("of:N*T*Cti,tca6408");
MODULE_ALIAS("of:N*T*Cti,tca6408C*");
MODULE_ALIAS("of:N*T*Cti,tca6416");
MODULE_ALIAS("of:N*T*Cti,tca6416C*");
MODULE_ALIAS("of:N*T*Cti,tca6424");
MODULE_ALIAS("of:N*T*Cti,tca6424C*");
MODULE_ALIAS("of:N*T*Cti,tca9535");
MODULE_ALIAS("of:N*T*Cti,tca9535C*");
MODULE_ALIAS("of:N*T*Cti,tca9538");
MODULE_ALIAS("of:N*T*Cti,tca9538C*");
MODULE_ALIAS("of:N*T*Cti,tca9539");
MODULE_ALIAS("of:N*T*Cti,tca9539C*");
MODULE_ALIAS("of:N*T*Cti,tca9554");
MODULE_ALIAS("of:N*T*Cti,tca9554C*");
MODULE_ALIAS("of:N*T*Connn,cat9554");
MODULE_ALIAS("of:N*T*Connn,cat9554C*");
MODULE_ALIAS("of:N*T*Connn,pca9654");
MODULE_ALIAS("of:N*T*Connn,pca9654C*");
MODULE_ALIAS("of:N*T*Connn,pca9655");
MODULE_ALIAS("of:N*T*Connn,pca9655C*");
MODULE_ALIAS("of:N*T*Cexar,xra1202");
MODULE_ALIAS("of:N*T*Cexar,xra1202C*");
MODULE_ALIAS("acpi*:INT3491:*");
MODULE_ALIAS("i2c:pca6408");
MODULE_ALIAS("i2c:pca6416");
MODULE_ALIAS("i2c:pca9505");
MODULE_ALIAS("i2c:pca9506");
MODULE_ALIAS("i2c:pca9534");
MODULE_ALIAS("i2c:pca9535");
MODULE_ALIAS("i2c:pca9536");
MODULE_ALIAS("i2c:pca9537");
MODULE_ALIAS("i2c:pca9538");
MODULE_ALIAS("i2c:pca9539");
MODULE_ALIAS("i2c:pca9554");
MODULE_ALIAS("i2c:pca9555");
MODULE_ALIAS("i2c:pca9556");
MODULE_ALIAS("i2c:pca9557");
MODULE_ALIAS("i2c:pca9574");
MODULE_ALIAS("i2c:pca9575");
MODULE_ALIAS("i2c:pca9698");
MODULE_ALIAS("i2c:pcal6408");
MODULE_ALIAS("i2c:pcal6416");
MODULE_ALIAS("i2c:pcal6524");
MODULE_ALIAS("i2c:pcal6534");
MODULE_ALIAS("i2c:pcal9535");
MODULE_ALIAS("i2c:pcal9554b");
MODULE_ALIAS("i2c:pcal9555a");
MODULE_ALIAS("i2c:max7310");
MODULE_ALIAS("i2c:max7312");
MODULE_ALIAS("i2c:max7313");
MODULE_ALIAS("i2c:max7315");
MODULE_ALIAS("i2c:max7318");
MODULE_ALIAS("i2c:pca6107");
MODULE_ALIAS("i2c:tca6408");
MODULE_ALIAS("i2c:tca6416");
MODULE_ALIAS("i2c:tca6424");
MODULE_ALIAS("i2c:tca9538");
MODULE_ALIAS("i2c:tca9539");
MODULE_ALIAS("i2c:tca9554");
MODULE_ALIAS("i2c:xra1202");

MODULE_INFO(srcversion, "84F1BC0EE383113B3BC8F1C");
