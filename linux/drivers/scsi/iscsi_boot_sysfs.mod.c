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

KSYMTAB_FUNC(iscsi_boot_create_target, "_gpl", "");
KSYMTAB_FUNC(iscsi_boot_create_initiator, "_gpl", "");
KSYMTAB_FUNC(iscsi_boot_create_ethernet, "_gpl", "");
KSYMTAB_FUNC(iscsi_boot_create_acpitbl, "_gpl", "");
KSYMTAB_FUNC(iscsi_boot_create_kset, "_gpl", "");
KSYMTAB_FUNC(iscsi_boot_create_host_kset, "_gpl", "");
KSYMTAB_FUNC(iscsi_boot_destroy_kset, "_gpl", "");

SYMBOL_CRC(iscsi_boot_create_target, 0xc829598e, "_gpl");
SYMBOL_CRC(iscsi_boot_create_initiator, 0x2491a95c, "_gpl");
SYMBOL_CRC(iscsi_boot_create_ethernet, 0x0e21c34e, "_gpl");
SYMBOL_CRC(iscsi_boot_create_acpitbl, 0x9b3b0f82, "_gpl");
SYMBOL_CRC(iscsi_boot_create_kset, 0x165f0bf7, "_gpl");
SYMBOL_CRC(iscsi_boot_create_host_kset, 0x6bb68d08, "_gpl");
SYMBOL_CRC(iscsi_boot_destroy_kset, 0x469a7213, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc6cbbc89, "capable" },
	{ 0x37a0cba, "kfree" },
	{ 0x374b3c83, "sysfs_remove_group" },
	{ 0x317df83, "kobject_put" },
	{ 0xb6841069, "kset_unregister" },
	{ 0x9f1dc8c6, "kmalloc_caches" },
	{ 0xc4a913aa, "__kmalloc_cache_noprof" },
	{ 0x32f84764, "firmware_kobj" },
	{ 0x67b68af, "kset_create_and_add" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x2d5b0050, "kobject_init_and_add" },
	{ 0xed85cddf, "sysfs_create_group" },
	{ 0x32700730, "kobject_uevent" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C20997ECCE1CF436DF99F29");
