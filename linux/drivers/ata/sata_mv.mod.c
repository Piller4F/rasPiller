#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
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

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x211f6456, "ata_sff_port_ops" },
	{ 0x8414c9a, "ata_bmdma_port_ops" },
	{ 0xfb3b8776, "ata_pci_remove_one" },
	{ 0x828e99a, "ata_common_sdev_attrs" },
	{ 0x9203fcb1, "ata_ncq_sdev_attrs" },
	{ 0x3000dfa6, "ata_scsi_unlock_native_capacity" },
	{ 0xaa34e9ac, "ata_std_bios_param" },
	{ 0xb6a9a638, "ata_scsi_dma_need_drain" },
	{ 0xf803fcdc, "ata_scsi_change_queue_depth" },
	{ 0xbb38ca98, "ata_scsi_slave_destroy" },
	{ 0x76ee7223, "ata_scsi_slave_config" },
	{ 0xac59c9fe, "ata_scsi_ioctl" },
	{ 0x91a5392f, "ata_scsi_queuecmd" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x25ff1e01, "pci_unregister_driver" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0xf674d375, "__pci_register_driver" },
	{ 0x8a0ed425, "sata_async_notification" },
	{ 0x8c17fe5c, "ata_port_abort" },
	{ 0x183cbb32, "ata_link_offline" },
	{ 0xa8911808, "ata_bmdma_port_intr" },
	{ 0x8e3ab102, "sata_scr_write_flush" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa64f8679, "ata_link_abort" },
	{ 0x569a8b7b, "ata_ehi_push_desc" },
	{ 0xecfd553f, "ata_ehi_clear_desc" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x6890c7d5, "ata_sff_queue_pio_task" },
	{ 0xdf0c757f, "ata_tf_to_fis" },
	{ 0x531a17c1, "ata_bmdma_qc_issue" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2c17e929, "sata_scr_read" },
	{ 0xa1e7b67f, "sata_link_hardreset" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0x142480ae, "pci_enable_msi" },
	{ 0xc978e0c5, "pcim_pin_device" },
	{ 0xdfd71a4, "pci_try_set_mwi" },
	{ 0x594d14c, "pci_set_master" },
	{ 0xb7a14627, "pci_read_config_byte" },
	{ 0x6a6a46c2, "ata_port_pbar_desc" },
	{ 0x5966c90b, "dma_set_coherent_mask" },
	{ 0x60ccffd4, "dma_set_mask" },
	{ 0xde0bf20c, "pcim_iomap_table" },
	{ 0x70b0d587, "pcim_iomap_regions" },
	{ 0xb9a6fcf, "pcim_enable_device" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x3ef339, "_dev_notice" },
	{ 0x9a2abc3, "ata_host_activate" },
	{ 0x44239691, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa8bee638, "of_device_is_compatible" },
	{ 0x7606362, "platform_get_irq" },
	{ 0x7c5c128e, "ata_print_version" },
	{ 0x815588a6, "clk_enable" },
	{ 0xdbffb989, "phy_power_on" },
	{ 0xb62cfb97, "devm_phy_optional_get" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc6c74d12, "clk_get" },
	{ 0x7a86a83a, "devm_ioremap" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x61e73432, "ata_host_alloc_pinfo" },
	{ 0x2bcd02e8, "irq_of_parse_and_map" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0x5ff38fa7, "platform_get_resource" },
	{ 0x462ec8f6, "_dev_alert" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x65d9ba0e, "ata_qc_complete_multiple" },
	{ 0xddd6641, "ata_qc_get_active" },
	{ 0xaf5f680d, "ata_sff_dma_pause" },
	{ 0x72645383, "sata_std_hardreset" },
	{ 0x83cec5b1, "ata_sff_softreset" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x8527489d, "dmam_pool_create" },
	{ 0x13f68623, "sata_pmp_error_handler" },
	{ 0xedba53b9, "ata_port_freeze" },
	{ 0x4a144bd6, "ata_eh_analyze_ncq_error" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x92997ed8, "_printk" },
	{ 0xa10417cc, "phy_power_off" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xac302fbf, "ata_host_detach" },
};

MODULE_INFO(depends, "libata");

MODULE_ALIAS("of:N*T*Cmarvell,armada-370-sata");
MODULE_ALIAS("of:N*T*Cmarvell,armada-370-sataC*");
MODULE_ALIAS("of:N*T*Cmarvell,orion-sata");
MODULE_ALIAS("of:N*T*Cmarvell,orion-sataC*");
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

MODULE_INFO(srcversion, "7ED5C77ECE3ED11A853E11A");
