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
	{ 0x6c4b52c0, "nf_ct_tmpl_alloc" },
	{ 0x3a81b510, "nf_ct_seqadj_init" },
	{ 0x187f64dc, "nf_ct_tmpl_free" },
	{ 0x8cfd77b0, "ip_local_out" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x2f07a679, "seq_puts" },
	{ 0x393cac96, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x7592cb4f, "inet_proto_csum_replace4" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdcb764ad, "memset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0xea27ad7f, "nf_unregister_net_hooks" },
	{ 0x100588a9, "skb_ensure_writable" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x4a9c0c3d, "ip_route_me_harder" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7ca64a0b, "__cookie_v4_init_sequence" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x3bfe1899, "nf_ipv6_ops" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0xa9af3739, "nf_register_net_hooks" },
	{ 0xe3b0ed1b, "ipv6_skip_exthdr" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0xe4bddf10, "proc_create_net_data" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xf1e90979, "nf_ct_extend_unregister" },
	{ 0x5ab3e8e5, "nf_ct_extend_register" },
	{ 0x9843f501, "__cookie_v4_check" },
	{ 0xf7cd832d, "ip6_local_out" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x2fa8337c, "xfrm_lookup" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0x2ff4d036, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "F0330AE12B74F0B450069DD");
