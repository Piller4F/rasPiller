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
	{ 0x33a860c8, "kmem_cache_destroy" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x81049b67, "__mark_inode_dirty" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9507547f, "ocfs2_cluster_disconnect" },
	{ 0xf5ad49bc, "simple_lookup" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x85fe2136, "generic_delete_inode" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7bd85b8d, "inc_nlink" },
	{ 0x9ed538b6, "init_user_ns" },
	{ 0x76f40744, "ocfs2_dlm_lvb" },
	{ 0x607d0006, "igrab" },
	{ 0x9558305a, "mount_nodev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0x5025b5a1, "kill_litter_super" },
	{ 0x591d2839, "default_llseek" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa1018fa2, "kmem_cache_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xafba5fd4, "setattr_copy" },
	{ 0xc5196999, "ocfs2_dlm_unlock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1475f64b, "ocfs2_dlm_lvb_valid" },
	{ 0xaf969565, "ocfs2_dlm_lock" },
	{ 0xcda10e9e, "inode_init_once" },
	{ 0xf528b94f, "simple_getattr" },
	{ 0x6a0c3847, "__mlog_printk" },
	{ 0x41314665, "kmem_cache_alloc" },
	{ 0xd344e4ee, "ocfs2_stack_glue_set_max_proto_version" },
	{ 0xfa9af439, "simple_unlink" },
	{ 0xe073cc5c, "simple_dir_operations" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x96b759ad, "kmem_cache_create" },
	{ 0x62346e86, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xbdfc304b, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb132cad9, "current_time" },
	{ 0xcafdd707, "ocfs2_dlm_lock_status" },
	{ 0xf777f0f4, "d_make_root" },
	{ 0xd81a9177, "simple_statfs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x23231c2c, "unregister_filesystem" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcfd3fc5, "ocfs2_cluster_connect_agnostic" },
	{ 0x3b42df26, "new_inode" },
	{ 0xdc30ae07, "clear_inode" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7336a49b, "d_instantiate" },
	{ 0xa21caea9, "simple_rmdir" },
	{ 0x5bf6fd5a, "setattr_prepare" },
	{ 0x80052ff, "inode_init_owner" },
};

MODULE_INFO(depends, "ocfs2_stackglue,ocfs2_nodemanager");


MODULE_INFO(srcversion, "C26D1C65E312F7ECDED9D90");
