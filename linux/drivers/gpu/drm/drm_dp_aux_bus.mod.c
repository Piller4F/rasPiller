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
	{ 0x243b0418, "driver_register" },
	{ 0xb0bbcb9a, "dev_err_probe" },
	{ 0x764e1aa0, "of_device_uevent_modalias" },
	{ 0x6c289ab5, "device_register" },
	{ 0x20105980, "driver_unregister" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x3533cb47, "bus_unregister" },
	{ 0x26559349, "of_match_device" },
	{ 0xf1d26d04, "of_get_child_by_name" },
	{ 0x3d6a8166, "devm_add_action" },
	{ 0x703142cd, "dev_pm_domain_detach" },
	{ 0x76f2249d, "device_for_each_child_reverse" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xc6421d46, "of_get_next_available_child" },
	{ 0xf39a08fd, "dev_pm_domain_attach" },
	{ 0xe315b3eb, "of_node_get" },
	{ 0x68893ef0, "of_device_modalias" },
	{ 0x37a0cba, "kfree" },
	{ 0xe71535d7, "device_unregister" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3C78294FCB502340D6018A3");
