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
	{ 0x1b30de3c, "bus_register" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x4bd261b0, "of_translate_address" },
	{ 0x13b96cf1, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x243b0418, "driver_register" },
	{ 0xdbe69fd4, "of_dma_configure_id" },
	{ 0x47cbb9ef, "irq_create_of_mapping" },
	{ 0xc41d1fc2, "pcie_set_readrq" },
	{ 0xb655b259, "pci_disable_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd88cb85b, "__of_get_address" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4fb653bd, "pci_release_regions" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x21012113, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x594d14c, "pci_set_master" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x9da0000f, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x20105980, "driver_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xefbfd9c, "platform_device_unregister" },
	{ 0xbc41d96d, "device_add" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x3533cb47, "bus_unregister" },
	{ 0x44239691, "_dev_info" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa1438c8f, "of_get_next_child" },
	{ 0x2363a3d, "of_irq_parse_raw" },
	{ 0x92997ed8, "_printk" },
	{ 0xd91c68b, "pci_read_config_dword" },
	{ 0x25ff1e01, "pci_unregister_driver" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe432eafd, "of_irq_parse_one" },
	{ 0xb18f4e29, "get_device" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0xcb2d5202, "pci_request_regions" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x3055489f, "device_initialize" },
	{ 0xedc03953, "iounmap" },
	{ 0xf674d375, "__pci_register_driver" },
	{ 0x26b33e0a, "of_platform_default_populate" },
	{ 0xe71535d7, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x975da2df, "pci_iomap" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0x46d359df, "pci_enable_device" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000014E4d00000576sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004313sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004331sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004353sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004357sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004358sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004359sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv00001028sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv00001028sd00000018bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv0000105Bsd0000E092bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004365sv0000103Csd0000804Abc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000043B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8DCsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A6D2F0290F7B048C013DD02");
