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
	{ 0xab4aa831, "sdhci_pltfm_clk_get_max_clock" },
	{ 0x1c33b55d, "device_property_present" },
	{ 0x23e343dd, "sdhci_enable_v4_mode" },
	{ 0x1fe18549, "sdhci_cqe_irq" },
	{ 0xaacd2e02, "cqhci_irq" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x7d92cc6a, "sdhci_set_clock" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x8e55f538, "sdhci_reset" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x3c0c55d8, "sdhci_execute_tuning" },
	{ 0x90ab8803, "cqhci_set_tran_desc" },
	{ 0x379650ce, "sdhci_dumpregs" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0x31b32fea, "devm_clk_bulk_get_optional" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0x669c413b, "_dev_err" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0xf50cb889, "sdhci_adma_write_desc" },
	{ 0xf198a1f, "sdhci_request" },
	{ 0x6f2f1642, "dev_pm_genpd_rpm_always_on" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x37ec6ed2, "sdhci_cqe_enable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x315e990e, "sdhci_reset_tuning" },
	{ 0x92d29b1, "mmc_send_tuning" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x8f09f576, "of_device_is_compatible" },
	{ 0x7763d7ce, "devm_reset_control_array_get" },
	{ 0x57624c0a, "of_property_read_variable_u8_array" },
	{ 0x5d975c3c, "__pm_runtime_resume" },
	{ 0x2587b615, "__pm_runtime_disable" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x9cfee47c, "sdhci_remove_host" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0x1423f28b, "sdhci_pltfm_free" },
	{ 0x93ef191a, "sdhci_start_tuning" },
	{ 0x337e342f, "__sdhci_execute_tuning" },
	{ 0x7e26b6ca, "sdhci_end_tuning" },
	{ 0xe806e4fd, "device_get_match_data" },
	{ 0x90e36dcb, "sdhci_pltfm_init" },
	{ 0x258e7f66, "dma_get_required_mask" },
	{ 0xe856a90, "devm_clk_get" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xef54673c, "devm_clk_get_optional" },
	{ 0xc606708c, "mmc_of_parse" },
	{ 0x79ebbc17, "sdhci_get_property" },
	{ 0x437d0342, "__pm_runtime_set_status" },
	{ 0x4dcc3608, "pm_runtime_enable" },
	{ 0xcddf7f53, "sdhci_setup_host" },
	{ 0xce6e8370, "__sdhci_add_host" },
	{ 0xfda399a4, "__pm_runtime_idle" },
	{ 0x7df1180a, "sdhci_cleanup_host" },
	{ 0x3c20f073, "cqhci_init" },
	{ 0x2a10607e, "devm_kfree" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x36b24246, "sdhci_cqe_disable" },
	{ 0x434edb0c, "sdhci_set_bus_width" },
	{ 0x4f1cf0bd, "sdhci_pltfm_clk_get_timeout_clock" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,rp1-dwcmshc");
MODULE_ALIAS("of:N*T*Craspberrypi,rp1-dwcmshcC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-dwcmshc");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-dwcmshcC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3576-dwcmshc");
MODULE_ALIAS("of:N*T*Crockchip,rk3576-dwcmshcC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-dwcmshc");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-dwcmshcC*");
MODULE_ALIAS("of:N*T*Csnps,dwcmshc-sdhci");
MODULE_ALIAS("of:N*T*Csnps,dwcmshc-sdhciC*");
MODULE_ALIAS("of:N*T*Csophgo,cv1800b-dwcmshc");
MODULE_ALIAS("of:N*T*Csophgo,cv1800b-dwcmshcC*");
MODULE_ALIAS("of:N*T*Csophgo,sg2002-dwcmshc");
MODULE_ALIAS("of:N*T*Csophgo,sg2002-dwcmshcC*");
MODULE_ALIAS("of:N*T*Cthead,th1520-dwcmshc");
MODULE_ALIAS("of:N*T*Cthead,th1520-dwcmshcC*");
MODULE_ALIAS("of:N*T*Csophgo,sg2042-dwcmshc");
MODULE_ALIAS("of:N*T*Csophgo,sg2042-dwcmshcC*");

MODULE_INFO(srcversion, "AF6280F0055A62D5003226E");
