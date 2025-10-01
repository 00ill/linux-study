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
	{ 0xb0acfe7a, "__pci_register_driver" },
	{ 0xfa474811, "__platform_driver_register" },
	{ 0x56a6b0c7, "pci_unregister_driver" },
	{ 0x21633aa2, "ata_host_detach" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x7fa7752b, "phy_power_off" },
	{ 0x122c3a7e, "_printk" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x94820feb, "ata_eh_analyze_ncq_error" },
	{ 0x79a84a25, "ata_port_freeze" },
	{ 0x562963, "sata_pmp_error_handler" },
	{ 0x788faaa5, "dmam_pool_create" },
	{ 0x61fd46a9, "platform_driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0xf139d567, "pci_read_config_dword" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x96848186, "scnprintf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x669c413b, "_dev_err" },
	{ 0x5c7b8f99, "ata_sff_dma_pause" },
	{ 0x9cf0caa0, "ata_qc_get_active" },
	{ 0x408cf8cf, "ata_qc_complete_multiple" },
	{ 0x1ddb2313, "sata_std_hardreset" },
	{ 0x2fe7f8c4, "ata_sff_softreset" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x9b151109, "_dev_warn" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x57852c0e, "_dev_alert" },
	{ 0xef7fa408, "platform_get_resource" },
	{ 0x80192c9b, "of_property_read_variable_u32_array" },
	{ 0x168a52f7, "irq_of_parse_and_map" },
	{ 0x5690142c, "ata_host_alloc_pinfo" },
	{ 0x36a78de3, "devm_kmalloc" },
	{ 0x527df72c, "devm_ioremap" },
	{ 0x63e23587, "clk_get" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4aee859e, "devm_phy_optional_get" },
	{ 0xd36458e3, "phy_power_on" },
	{ 0x23b87937, "ata_print_version" },
	{ 0xbb324372, "platform_get_irq" },
	{ 0x8f09f576, "of_device_is_compatible" },
	{ 0x84a10e08, "_dev_info" },
	{ 0x4fd701a, "ata_host_activate" },
	{ 0xf261f72a, "_dev_notice" },
	{ 0xb36396f8, "pcim_enable_device" },
	{ 0x55dc16b9, "pcim_iomap_regions" },
	{ 0xd9835348, "pcim_iomap_table" },
	{ 0x7cb3eec3, "dma_set_mask" },
	{ 0x76e09157, "dma_set_coherent_mask" },
	{ 0xb3e372b1, "ata_port_pbar_desc" },
	{ 0x42f7540f, "pci_read_config_byte" },
	{ 0x7cf55e07, "pci_set_master" },
	{ 0xccae933a, "pci_try_set_mwi" },
	{ 0x5179e37c, "pcim_pin_device" },
	{ 0xd0bf3c29, "pci_enable_msi" },
	{ 0xbc79eb0b, "sata_deb_timing_hotplug" },
	{ 0x9371ea58, "sata_deb_timing_normal" },
	{ 0xf9b95a1e, "sata_link_hardreset" },
	{ 0x89573ed1, "sata_scr_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xec24648d, "ata_bmdma_qc_issue" },
	{ 0xdf0c757f, "ata_tf_to_fis" },
	{ 0xc9d02d23, "ata_sff_queue_pio_task" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x4c70ff96, "ata_ehi_clear_desc" },
	{ 0x49456264, "ata_ehi_push_desc" },
	{ 0x6552f2a3, "ata_link_abort" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb6b70f87, "sata_scr_write_flush" },
	{ 0xff821630, "ata_bmdma_port_intr" },
	{ 0x5c8aa945, "ata_link_offline" },
	{ 0xb6472fe, "ata_port_abort" },
	{ 0xa8fa7105, "sata_async_notification" },
	{ 0x41fa1179, "ata_scsi_queuecmd" },
	{ 0x9f27f7da, "ata_scsi_ioctl" },
	{ 0xc0fb3da2, "ata_scsi_slave_alloc" },
	{ 0xdce3b81f, "ata_scsi_device_configure" },
	{ 0x5461a61b, "ata_scsi_slave_destroy" },
	{ 0x46dc42b7, "ata_scsi_change_queue_depth" },
	{ 0x48e90ad3, "ata_scsi_dma_need_drain" },
	{ 0xd7a91f2, "ata_std_bios_param" },
	{ 0x93099309, "ata_scsi_unlock_native_capacity" },
	{ 0x68e884f7, "ata_ncq_sdev_groups" },
	{ 0xd373eb2a, "ata_common_sdev_groups" },
	{ 0xa421f0f2, "ata_pci_remove_one" },
	{ 0x33065ee9, "ata_bmdma_port_ops" },
	{ 0xca6ddc2f, "ata_sff_port_ops" },
	{ 0x8b7bb3fc, "param_ops_int" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "libata");

MODULE_ALIAS("pci:v000011ABd00005040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001720sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001740sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001742sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000241sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000243sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00007042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002310sv*sd*bc*sc*i*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-370-sata");
MODULE_ALIAS("of:N*T*Cmarvell,armada-370-sataC*");
MODULE_ALIAS("of:N*T*Cmarvell,orion-sata");
MODULE_ALIAS("of:N*T*Cmarvell,orion-sataC*");

MODULE_INFO(srcversion, "E42AE79D6858BF81291B67A");
