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
	{ 0x2d3385d3, "system_wq" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x18a10592, "lwtunnel_encap_del_ops" },
	{ 0x54475510, "register_pernet_device" },
	{ 0xf188a662, "rhashtable_walk_exit" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3ac68802, "genl_register_family" },
	{ 0xcae0b5ea, "lwtunnel_encap_add_ops" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xc8c04121, "genl_unregister_family" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x54651f9b, "rhashtable_walk_next" },
	{ 0xf6149499, "dst_release" },
	{ 0x8f390533, "dst_cache_set_ip6" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x2d34183e, "lwtunnel_state_alloc" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0xdcb764ad, "memset" },
	{ 0x7f6cee89, "rhashtable_free_and_destroy" },
	{ 0x5d2aa5fb, "rhashtable_walk_peek" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x9cd7551a, "rhashtable_walk_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x435b23bf, "unregister_pernet_device" },
	{ 0xea27ad7f, "nf_unregister_net_hooks" },
	{ 0x9a5dce5c, "rhashtable_walk_start_check" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0xa03b50aa, "dst_cache_get" },
	{ 0x8162c74, "free_bucket_spinlocks" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x3350c520, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0xc4bfe3fb, "ip6_route_output_flags" },
	{ 0xa9af3739, "nf_register_net_hooks" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xe8fbf4fa, "__alloc_bucket_spinlocks" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe5ce1a56, "rhashtable_walk_enter" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x8ce4e137, "genlmsg_put" },
	{ 0x80418c53, "inet_proto_csum_replace_by_diff" },
	{ 0xf942e76e, "nla_put_64bit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x2fa8337c, "xfrm_lookup" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x219e54ee, "__do_once_done" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "B9AFE87F2ECB6BC48A0F080");
