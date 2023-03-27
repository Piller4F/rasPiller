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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x693a304d, "of_parse_phandle" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8166570, "snd_soc_info_enum_double" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd0f9583a, "snd_soc_unregister_card" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9214249a, "snd_soc_info_volsw" },
	{ 0x4fc5fb1, "snd_soc_get_pcm_runtime" },
	{ 0x44239691, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x67ce7ef7, "snd_soc_component_write" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x96d0a463, "snd_ctl_remove" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0x37a0cba, "kfree" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0x7d8e8ea3, "snd_soc_component_read" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x47a230ac, "snd_soc_limit_volume" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x30f8c3c, "snd_soc_register_card" },
	{ 0xa0a7f6, "snd_soc_card_get_kcontrol" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "snd-soc-core,snd");

MODULE_ALIAS("of:N*T*Callo,piano-dac-plus");
MODULE_ALIAS("of:N*T*Callo,piano-dac-plusC*");

MODULE_INFO(srcversion, "9232C968ED7BD1E26878DE3");
