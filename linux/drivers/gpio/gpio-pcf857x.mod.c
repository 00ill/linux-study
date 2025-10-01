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
	{ 0xaff77e28, "i2c_smbus_read_byte" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xe4a8350b, "gpiochip_disable_irq" },
	{ 0xf29a84d1, "gpiochip_enable_irq" },
	{ 0x89426a62, "__irq_resolve_mapping" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0x2c605a6c, "i2c_smbus_write_byte" },
	{ 0x35ef1cd, "gpiochip_get_data" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xda1bd86, "i2c_get_match_data" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0x335384c2, "handle_level_irq" },
	{ 0x71d5ffb9, "devm_gpiochip_add_data_with_key" },
	{ 0x84a10e08, "_dev_info" },
	{ 0xc7d83fd, "gpiochip_irq_reqres" },
	{ 0xf5a126c3, "gpiochip_irq_relres" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pcf8574");
MODULE_ALIAS("of:N*T*Cnxp,pcf8574C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf8574a");
MODULE_ALIAS("of:N*T*Cnxp,pcf8574aC*");
MODULE_ALIAS("of:N*T*Cnxp,pca8574");
MODULE_ALIAS("of:N*T*Cnxp,pca8574C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9670");
MODULE_ALIAS("of:N*T*Cnxp,pca9670C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9672");
MODULE_ALIAS("of:N*T*Cnxp,pca9672C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9674");
MODULE_ALIAS("of:N*T*Cnxp,pca9674C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf8575");
MODULE_ALIAS("of:N*T*Cnxp,pcf8575C*");
MODULE_ALIAS("of:N*T*Cnxp,pca8575");
MODULE_ALIAS("of:N*T*Cnxp,pca8575C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9671");
MODULE_ALIAS("of:N*T*Cnxp,pca9671C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9673");
MODULE_ALIAS("of:N*T*Cnxp,pca9673C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9675");
MODULE_ALIAS("of:N*T*Cnxp,pca9675C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7328");
MODULE_ALIAS("of:N*T*Cmaxim,max7328C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7329");
MODULE_ALIAS("of:N*T*Cmaxim,max7329C*");
MODULE_ALIAS("i2c:pcf8574");
MODULE_ALIAS("i2c:pcf8574a");
MODULE_ALIAS("i2c:pca8574");
MODULE_ALIAS("i2c:pca9670");
MODULE_ALIAS("i2c:pca9672");
MODULE_ALIAS("i2c:pca9674");
MODULE_ALIAS("i2c:pcf8575");
MODULE_ALIAS("i2c:pca8575");
MODULE_ALIAS("i2c:pca9671");
MODULE_ALIAS("i2c:pca9673");
MODULE_ALIAS("i2c:pca9675");
MODULE_ALIAS("i2c:max7328");
MODULE_ALIAS("i2c:max7329");

MODULE_INFO(srcversion, "341C40C07A492F45C8CED49");
