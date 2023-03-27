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
	{ 0xa24f23d8, "__request_module" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x82fd943e, "xt_unregister_table" },
	{ 0xa7c94f1d, "xt_compat_lock" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe7626d1d, "xt_check_target" },
	{ 0x9c995c69, "xt_percpu_counter_alloc" },
	{ 0xf0addf0a, "xt_compat_target_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xd87ae60d, "xt_check_entry_offsets" },
	{ 0x48cdae79, "xt_proto_fini" },
	{ 0xfbd6d6d4, "xt_table_unlock" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5557eb48, "xt_compat_target_offset" },
	{ 0xcb3e91cc, "xt_counters_alloc" },
	{ 0x999e8297, "vfree" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xb46945e5, "xt_find_table_lock" },
	{ 0x8f562edc, "xt_replace_table" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xedb967fd, "xt_proto_init" },
	{ 0xe4f357df, "xt_register_table" },
	{ 0xd9bb821b, "xt_copy_counters" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xd3e3ee89, "xt_target_to_user" },
	{ 0xd7f5fcd, "xt_alloc_entry_offsets" },
	{ 0xdcb764ad, "memset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa25fc115, "xt_compat_check_entry_offsets" },
	{ 0xea27ad7f, "nf_unregister_net_hooks" },
	{ 0x638c7455, "ns_capable" },
	{ 0x39467869, "xt_register_targets" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xd4a5245d, "xt_compat_target_from_user" },
	{ 0x9166fada, "strncpy" },
	{ 0x4e27719, "xt_compat_flush_offsets" },
	{ 0xc7fae024, "xt_compat_calc_jump" },
	{ 0x807d2b2c, "xt_recseq" },
	{ 0xc75ef391, "xt_unregister_targets" },
	{ 0x50873741, "xt_compat_init_offsets" },
	{ 0x1acd7981, "module_put" },
	{ 0x823edea5, "xt_compat_add_offset" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xa9af3739, "nf_register_net_hooks" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd2982207, "nf_unregister_sockopt" },
	{ 0x92997ed8, "_printk" },
	{ 0x7a9d4be4, "xt_request_find_table_lock" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x2739d806, "xt_find_table" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xe431dde6, "xt_request_find_target" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x4829a47e, "memcpy" },
	{ 0xfef779fa, "xt_find_jump_offset" },
	{ 0x3bf9d084, "xt_check_table_hooks" },
	{ 0xbfacb837, "xt_percpu_counter_free" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xc0efa09f, "nf_register_sockopt" },
	{ 0x977fd4bf, "xt_alloc_table_info" },
	{ 0xe204e042, "xt_free_table_info" },
	{ 0xd1e246a2, "xt_compat_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "D20BA6BB27BED3CE1647018");
