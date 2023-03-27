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
	{ 0xc75ef391, "xt_unregister_targets" },
	{ 0xb8b2cc6b, "xt_unregister_target" },
	{ 0x39467869, "xt_register_targets" },
	{ 0x8504eef1, "xt_register_target" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdcb764ad, "memset" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7c102184, "nf_ct_helper_ext_add" },
	{ 0xe2bcad0a, "nf_conntrack_helper_try_module_get" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x31aa6798, "nf_conntrack_helper_put" },
	{ 0xa916b694, "strnlen" },
	{ 0x2ff4d036, "nf_ct_ext_add" },
	{ 0xa85fd64a, "nf_ct_netns_put" },
	{ 0x187f64dc, "nf_ct_tmpl_free" },
	{ 0x6c4b52c0, "nf_ct_tmpl_alloc" },
	{ 0x5b9701f6, "nf_ct_netns_get" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack");


MODULE_INFO(srcversion, "C013D983E5ACFDD4EEF3CFF");
