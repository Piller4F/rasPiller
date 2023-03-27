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
	{ 0xa2f06cb2, "xt_unregister_matches" },
	{ 0x6e60e22a, "xt_register_matches" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xcdc86b55, "sched_clock" },
	{ 0x4d7272e4, "migrate_enable" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x49608959, "migrate_disable" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe77b035, "bpf_prog_get_type_dev" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x68fa94a8, "bpf_prog_create" },
	{ 0x75aa6006, "bpf_prog_get_type_path" },
	{ 0xa916b694, "strnlen" },
	{ 0x69d7c4f1, "bpf_prog_destroy" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "D3EE0220C3C869B56194D98");
