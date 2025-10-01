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
	{ 0xc9061b8b, "phy_drivers_register" },
	{ 0xe47e4c8d, "mdiobus_read" },
	{ 0xbc650787, "phy_trigger_machine" },
	{ 0x6c4afbb8, "phy_error" },
	{ 0x6815c63c, "phy_modify_changed" },
	{ 0x7ee3556d, "genphy_soft_reset" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x81729368, "phy_modify" },
	{ 0x669c413b, "_dev_err" },
	{ 0xa4ba0539, "phy_read_mmd" },
	{ 0xad508551, "__mdiobus_write" },
	{ 0x78613315, "__mdiobus_read" },
	{ 0x9e255c51, "mdiobus_write" },
	{ 0x8f2ed534, "genphy_resume" },
	{ 0x1120e01e, "genphy_suspend" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2e7a0088, "genphy_c45_pma_resume" },
	{ 0xf9a482f9, "msleep" },
	{  0xf71b2, "genphy_c45_pma_read_abilities" },
	{ 0xcd7b51, "phy_write_mmd" },
	{ 0x58dc424, "phy_modify_mmd_changed" },
	{ 0x63b78629, "phy_read_paged" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x950583f1, "phy_modify_paged_changed" },
	{ 0x91bd1316, "__genphy_config_aneg" },
	{ 0xd79f6ee2, "genphy_read_abilities" },
	{ 0x9525b620, "phy_modify_paged" },
	{ 0xf223c72a, "genphy_read_status" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0xe62942b0, "devm_clk_get_optional_enabled" },
	{ 0x4cd6ab7e, "of_find_property" },
	{ 0x40f83abf, "dev_err_probe" },
	{ 0x7ad5b349, "phy_select_page" },
	{ 0xf99c528, "__phy_modify" },
	{ 0x4a153076, "phy_restore_page" },
	{ 0xeb4e97df, "phy_drivers_unregister" },
	{ 0x9a1cd1e7, "genphy_update_link" },
	{ 0x9b710c40, "genphy_c45_read_status" },
	{ 0xd417642e, "genphy_c45_an_config_aneg" },
	{ 0xa89ed47, "genphy_c45_check_and_restart_aneg" },
	{ 0xef5a28b6, "genphy_c45_pma_setup_forced" },
	{ 0x34401e53, "phy_write_paged" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xdb49d476, "genphy_read_mmd_unsupported" },
	{ 0xbeab4f61, "genphy_write_mmd_unsupported" },
	{ 0xa1597486, "genphy_c45_pma_suspend" },
	{ 0x37875905, "genphy_handle_interrupt_no_ack" },
	{ 0xfe7849dd, "phy_basic_t1_features" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000011100110010??????????");

MODULE_INFO(srcversion, "F0F50C6F3F07F49609E00BB");
