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
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xaff77e28, "i2c_smbus_read_byte" },
	{ 0x89426a62, "__irq_resolve_mapping" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xdcb764ad, "memset" },
	{ 0x78805cdd, "irq_domain_simple_ops" },
	{ 0x1894ba7a, "irq_domain_instantiate" },
	{ 0x603da9ea, "handle_simple_irq" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x434a7994, "irq_set_chip_and_handler_name" },
	{ 0x5e90e886, "irq_create_mapping_affinity" },
	{ 0x669c413b, "_dev_err" },
	{ 0x7c913590, "regulator_disable" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x547b2119, "irq_domain_remove" },
	{ 0x649b3692, "i2c_mux_del_adapters" },
	{ 0xa92274c6, "device_remove_file" },
	{ 0x3826df6, "i2c_client_get_device_id" },
	{ 0x760c9fbb, "i2c_mux_alloc" },
	{ 0x63c42bd1, "devm_regulator_get" },
	{ 0xb724c49d, "regulator_enable" },
	{ 0xd84ead50, "__devm_reset_control_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0xe806e4fd, "device_get_match_data" },
	{ 0x3c5a817a, "i2c_get_device_id" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x72109e18, "device_property_read_u32_array" },
	{ 0x6d474afe, "__dev_fwnode_const" },
	{ 0x6b83cd46, "fwnode_property_match_string" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x555dcc70, "i2c_smbus_write_byte_data" },
	{ 0xde29233a, "i2c_mux_add_adapter" },
	{ 0x5a1c908c, "devm_gpiod_get_optional" },
	{ 0x64e9ccb2, "gpiod_set_value_cansleep" },
	{ 0x2c605a6c, "i2c_smbus_write_byte" },
	{ 0x3ce80115, "devm_request_threaded_irq" },
	{ 0xee7a3241, "device_create_file" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x230a9582, "__i2c_smbus_xfer" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("of:N*T*Cmaxim,max7356");
MODULE_ALIAS("of:N*T*Cmaxim,max7356C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7357");
MODULE_ALIAS("of:N*T*Cmaxim,max7357C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7358");
MODULE_ALIAS("of:N*T*Cmaxim,max7358C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7367");
MODULE_ALIAS("of:N*T*Cmaxim,max7367C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7368");
MODULE_ALIAS("of:N*T*Cmaxim,max7368C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7369");
MODULE_ALIAS("of:N*T*Cmaxim,max7369C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9540");
MODULE_ALIAS("of:N*T*Cnxp,pca9540C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9542");
MODULE_ALIAS("of:N*T*Cnxp,pca9542C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9543");
MODULE_ALIAS("of:N*T*Cnxp,pca9543C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9544");
MODULE_ALIAS("of:N*T*Cnxp,pca9544C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9545");
MODULE_ALIAS("of:N*T*Cnxp,pca9545C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9546");
MODULE_ALIAS("of:N*T*Cnxp,pca9546C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9547");
MODULE_ALIAS("of:N*T*Cnxp,pca9547C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9548");
MODULE_ALIAS("of:N*T*Cnxp,pca9548C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9846");
MODULE_ALIAS("of:N*T*Cnxp,pca9846C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9847");
MODULE_ALIAS("of:N*T*Cnxp,pca9847C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9848");
MODULE_ALIAS("of:N*T*Cnxp,pca9848C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9849");
MODULE_ALIAS("of:N*T*Cnxp,pca9849C*");
MODULE_ALIAS("i2c:max7356");
MODULE_ALIAS("i2c:max7357");
MODULE_ALIAS("i2c:max7358");
MODULE_ALIAS("i2c:max7367");
MODULE_ALIAS("i2c:max7368");
MODULE_ALIAS("i2c:max7369");
MODULE_ALIAS("i2c:pca9540");
MODULE_ALIAS("i2c:pca9542");
MODULE_ALIAS("i2c:pca9543");
MODULE_ALIAS("i2c:pca9544");
MODULE_ALIAS("i2c:pca9545");
MODULE_ALIAS("i2c:pca9546");
MODULE_ALIAS("i2c:pca9547");
MODULE_ALIAS("i2c:pca9548");
MODULE_ALIAS("i2c:pca9846");
MODULE_ALIAS("i2c:pca9847");
MODULE_ALIAS("i2c:pca9848");
MODULE_ALIAS("i2c:pca9849");

MODULE_INFO(srcversion, "314C36DD1807BA28552C51F");
