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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x6d5ef163, "vchiq_release_message" },
	{ 0xc911c0b7, "snd_pcm_hw_constraint_step" },
	{ 0x693a304d, "of_parse_phandle" },
	{ 0x6f3cc412, "snd_pcm_period_elapsed" },
	{ 0x62e68f09, "devres_find" },
	{ 0x92b2feb4, "vchiq_bulk_transmit" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x24140f6, "snd_pcm_stream_lock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x2f8c431, "vchiq_queue_kernel_message" },
	{ 0xb05b02ae, "vchiq_release_service" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x7a225b9c, "snd_pcm_set_managed_buffer_all" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x175ae848, "snd_pcm_set_ops" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x8ff6c2b1, "vchiq_get_peer_version" },
	{ 0x70b03a70, "__devres_alloc_node" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xd503cbd3, "snd_card_new" },
	{ 0x3d6a8166, "devm_add_action" },
	{ 0x44239691, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x281f0c05, "snd_pcm_stream_unlock" },
	{ 0xf971a1fd, "vchiq_shutdown" },
	{ 0x8809e6c, "snd_ctl_new1" },
	{ 0xe95e0941, "vchiq_close_service" },
	{ 0xc7144504, "vchiq_open_service" },
	{ 0x12d5b817, "devres_add" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xed549a5f, "rpi_firmware_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xb25437d4, "vchiq_initialise" },
	{ 0xe556a9c5, "snd_pcm_hw_constraint_minmax" },
	{ 0xb46ac3bf, "snd_pcm_stop" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc4378d43, "snd_card_free" },
	{ 0xb8714612, "snd_card_register" },
	{ 0x1c60d406, "vchiq_get_service_userdata" },
	{ 0x1c414e53, "vchiq_connect" },
	{ 0xa6257a2f, "complete" },
	{ 0x91201963, "snd_pcm_new" },
	{ 0xb87de145, "snd_ctl_add" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x9d6478fe, "vchiq_use_service" },
};

MODULE_INFO(depends, "snd-pcm,snd");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-audio");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-audioC*");

MODULE_INFO(srcversion, "7FA5309AB9281A52E202785");
