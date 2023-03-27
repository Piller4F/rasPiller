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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xf188a662, "rhashtable_walk_exit" },
	{ 0x53b954a2, "up_read" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x54651f9b, "rhashtable_walk_next" },
	{ 0xf6149499, "dst_release" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x642a7d20, "nf_ct_acct_add" },
	{ 0x7592cb4f, "inet_proto_csum_replace4" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4cc8288a, "neigh_destroy" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe88e7940, "inet_proto_csum_replace16" },
	{ 0x668b19a1, "down_read" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0xdcb764ad, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x9cd7551a, "rhashtable_walk_stop" },
	{ 0xa4b0a244, "flow_indr_dev_setup_offload" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x9a5dce5c, "rhashtable_walk_start_check" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x24ff8dbf, "dev_get_by_index_rcu" },
	{ 0xe99db1f6, "dev_get_by_index" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xe5ce1a56, "rhashtable_walk_enter" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c858436, "flow_block_cb_free" },
	{ 0x86ca5a92, "neigh_xmit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9fa52c93, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x18e9a846, "skb_gso_validate_network_len" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x6853aa31, "flow_rule_alloc" },
	{ 0x200b2041, "in6addr_any" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "F93BC3D466A1793AC10EC40");
