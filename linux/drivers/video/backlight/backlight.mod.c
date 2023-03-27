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
	{ 0x1bd03ce1, "class_find_device" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x80d68d3e, "fb_register_client" },
	{ 0x693a304d, "of_parse_phandle" },
	{ 0xb94969d9, "device_match_name" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x6c289ab5, "device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x70b03a70, "__devres_alloc_node" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8208e29b, "kobject_uevent_env" },
	{ 0x3d6a8166, "devm_add_action" },
	{ 0x23704fbf, "devres_release" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x92997ed8, "_printk" },
	{ 0xb76d6ccf, "sysfs_notify" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x12d5b817, "devres_add" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x551ab123, "class_destroy" },
	{ 0xb12cbacb, "fb_unregister_client" },
	{ 0xe71535d7, "device_unregister" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0x42824447, "__class_create" },
	{ 0x7b4da6ff, "__init_rwsem" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CDE4064E41BC20AF24F53FC");
