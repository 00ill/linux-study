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
	{ 0xdd830e0c, "tpm_chip_unregister" },
	{ 0xf073a598, "tpm_tis_remove" },
	{ 0xbbe69956, "i2c_transfer" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2cfa9196, "i2c_del_driver" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x4829a47e, "memcpy" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4305df44, "tpm_tis_core_init" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "tpm,tpm_tis_core,crc-ccitt");

MODULE_ALIAS("of:N*T*Cinfineon,slb9673");
MODULE_ALIAS("of:N*T*Cinfineon,slb9673C*");
MODULE_ALIAS("of:N*T*Cnuvoton,npct75x");
MODULE_ALIAS("of:N*T*Cnuvoton,npct75xC*");
MODULE_ALIAS("of:N*T*Ctcg,tpm-tis-i2c");
MODULE_ALIAS("of:N*T*Ctcg,tpm-tis-i2cC*");
MODULE_ALIAS("i2c:tpm_tis_i2c");

MODULE_INFO(srcversion, "2FDCC6DC0698CD13256292E");
