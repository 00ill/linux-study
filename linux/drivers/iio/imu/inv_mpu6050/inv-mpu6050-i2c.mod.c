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
	{ 0xcc0983c6, "regmap_write" },
	{ 0x3826df6, "i2c_client_get_device_id" },
	{ 0x38ad8d43, "inv_mpu_core_probe" },
	{ 0x929c4eb7, "__devm_regmap_init_i2c" },
	{ 0x4e8e25be, "i2c_register_driver" },
	{ 0x669c413b, "_dev_err" },
	{ 0x760c9fbb, "i2c_mux_alloc" },
	{ 0x9b151109, "_dev_warn" },
	{ 0xe806e4fd, "device_get_match_data" },
	{ 0xcbec36d6, "device_get_named_child_node" },
	{ 0x6063a9be, "inv_mpu_pmops" },
	{ 0x649b3692, "i2c_mux_del_adapters" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0xde29233a, "i2c_mux_add_adapter" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "inv-mpu6050,regmap-i2c,i2c-mux");

MODULE_ALIAS("acpi*:INVN6500:*");
MODULE_ALIAS("i2c:mpu6050");
MODULE_ALIAS("i2c:mpu6500");
MODULE_ALIAS("i2c:mpu6515");
MODULE_ALIAS("i2c:mpu6880");
MODULE_ALIAS("i2c:mpu9150");
MODULE_ALIAS("i2c:mpu9250");
MODULE_ALIAS("i2c:mpu9255");
MODULE_ALIAS("i2c:icm20608");
MODULE_ALIAS("i2c:icm20608d");
MODULE_ALIAS("i2c:icm20609");
MODULE_ALIAS("i2c:icm20689");
MODULE_ALIAS("i2c:icm20600");
MODULE_ALIAS("i2c:icm20602");
MODULE_ALIAS("i2c:icm20690");
MODULE_ALIAS("i2c:iam20680");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6050");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6050C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6500");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6500C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6515");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6515C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6880");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6880C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9150");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9150C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9250");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9250C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9255");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9255C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20608");
MODULE_ALIAS("of:N*T*Cinvensense,icm20608C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20608d");
MODULE_ALIAS("of:N*T*Cinvensense,icm20608dC*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20609");
MODULE_ALIAS("of:N*T*Cinvensense,icm20609C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20689");
MODULE_ALIAS("of:N*T*Cinvensense,icm20689C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20600");
MODULE_ALIAS("of:N*T*Cinvensense,icm20600C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20602");
MODULE_ALIAS("of:N*T*Cinvensense,icm20602C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20690");
MODULE_ALIAS("of:N*T*Cinvensense,icm20690C*");
MODULE_ALIAS("of:N*T*Cinvensense,iam20680");
MODULE_ALIAS("of:N*T*Cinvensense,iam20680C*");

MODULE_INFO(srcversion, "86079E14E55574AB9A7A9DF");
