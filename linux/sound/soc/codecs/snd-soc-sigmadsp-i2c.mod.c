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

KSYMTAB_FUNC(devm_sigmadsp_init_i2c, "_gpl", "");

SYMBOL_CRC(devm_sigmadsp_init_i2c, 0x76585140, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x150687ee, "i2c_transfer_buffer_flags" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x771c6525, "devm_sigmadsp_init" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-sigmadsp");


MODULE_INFO(srcversion, "3F562FBA3353A142F41B3D7");
