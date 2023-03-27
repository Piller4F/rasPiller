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
	{ 0x163f4a3f, "_dev_err" },
	{ 0x12284cf8, "device_create" },
	{ 0x42824447, "__class_create" },
	{ 0xf355108, "cdev_add" },
	{ 0x4392e2ef, "cdev_init" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x5ff38fa7, "platform_get_resource" },
	{ 0x26559349, "of_match_device" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x69d7d62c, "remap_pfn_range" },
	{ 0x7d61a4f0, "phys_mem_access_prot" },
	{ 0x44239691, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xc793df81, "cdev_del" },
	{ 0x551ab123, "class_destroy" },
	{ 0xc6bfeb6c, "device_destroy" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-hevc-decoder");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-hevc-decoderC*");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-h264-decoder");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-h264-decoderC*");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-vp9-decoder");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-vp9-decoderC*");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-local-intc");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-local-intcC*");

MODULE_INFO(srcversion, "172E55C090236D5E5327EC4");
