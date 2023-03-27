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
	{ 0xe2bd2e91, "param_ops_string" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xe9664da1, "unregister_console" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x96550013, "netpoll_cleanup" },
	{ 0x4ffdc8a4, "register_console" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x85df9b6c, "strsep" },
	{ 0x4ac06e9f, "netpoll_setup" },
	{ 0xb8083c05, "netpoll_parse_options" },
	{ 0xdcb764ad, "memset" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa916b694, "strnlen" },
	{ 0x92997ed8, "_printk" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xfb6086da, "__netpoll_cleanup" },
	{ 0x96848186, "scnprintf" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa07a37f0, "memchr" },
	{ 0x6f5d47cf, "netpoll_send_udp" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb1c3a01a, "oops_in_progress" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "59AB6DED122C4E32C764A4A");
