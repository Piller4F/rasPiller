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
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x45a0916, "bcm2835_smi_write_buf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3a444f4b, "bcm2835_smi_read_buf" },
	{ 0xb4f71798, "bcm2835_smi_user_dma" },
	{ 0x92e683f5, "down_timeout" },
	{ 0xab7a4d1d, "bcm2835_smi_set_regs_from_settings" },
	{ 0x72db83c4, "bcm2835_smi_set_address" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xf6720336, "bcm2835_smi_get_settings_from_regs" },
	{ 0x12284cf8, "device_create" },
	{ 0x42824447, "__class_create" },
	{ 0xf355108, "cdev_add" },
	{ 0x4392e2ef, "cdev_init" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xc4be7060, "bcm2835_smi_get" },
	{ 0x693a304d, "of_parse_phandle" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x44239691, "_dev_info" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xc793df81, "cdev_del" },
	{ 0x551ab123, "class_destroy" },
	{ 0xc6bfeb6c, "device_destroy" },
};

MODULE_INFO(depends, "bcm2835_smi");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smi-dev");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smi-devC*");

MODULE_INFO(srcversion, "F357B389C8D0110064EAF71");
