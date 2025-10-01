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

KSYMTAB_FUNC(async_raid6_2data_recov, "_gpl", "");
KSYMTAB_FUNC(async_raid6_datap_recov, "_gpl", "");

SYMBOL_CRC(async_raid6_2data_recov, 0xf9dd5c8c, "_gpl");
SYMBOL_CRC(async_raid6_datap_recov, 0x5319707b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfea89c8c, "async_tx_quiesce" },
	{ 0x6680e7aa, "raid6_empty_zero_page" },
	{ 0x1803a6ed, "raid6_2data_recov" },
	{ 0xe4b051cf, "raid6_datap_recov" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "async_tx,raid6_pq");


MODULE_INFO(srcversion, "062F9612BD09B480935227F");
