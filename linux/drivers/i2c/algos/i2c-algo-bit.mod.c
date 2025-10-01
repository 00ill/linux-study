#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_DATA(i2c_bit_algo, "", "");
KSYMTAB_FUNC(i2c_bit_add_bus, "", "");
KSYMTAB_FUNC(i2c_bit_add_numbered_bus, "", "");

SYMBOL_CRC(i2c_bit_algo, 0x1cad0a75, "");
SYMBOL_CRC(i2c_bit_add_bus, 0xd728697c, "");
SYMBOL_CRC(i2c_bit_add_numbered_bus, 0x9a1b7cee, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x15ba50a6, "jiffies" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x669c413b, "_dev_err" },
	{ 0x760a0f4f, "yield" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x122c3a7e, "_printk" },
	{ 0x60570175, "i2c_add_adapter" },
	{ 0xe7278cfd, "i2c_add_numbered_adapter" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1EE7C7ED220579B268F471E");
