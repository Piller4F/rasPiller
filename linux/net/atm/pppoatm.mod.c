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
	{ 0x4ec65ab4, "deregister_atm_ioctl" },
	{ 0x11eaf5c8, "register_atm_ioctl" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x12baeca1, "skb_realloc_headroom" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf6393310, "vcc_process_recv_queue" },
	{ 0xd0148e6c, "__module_get" },
	{ 0x735acbb4, "ppp_register_channel" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x44e82637, "ppp_unit_number" },
	{ 0xb06525f1, "ppp_channel_index" },
	{ 0x1acd7981, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x29b001e2, "ppp_unregister_channel" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xfa7df4a5, "ppp_input_error" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xcfff5f4f, "ppp_input" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x41e3c466, "ppp_output_wakeup" },
};

MODULE_INFO(depends, "atm,ppp_generic");


MODULE_INFO(srcversion, "624DB693C091F1C66D94F7A");
