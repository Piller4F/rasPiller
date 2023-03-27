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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0xc5e5573a, "frame_vector_to_pages" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xccd197c7, "vb2_destroy_framevec" },
	{ 0xffa0eccb, "dma_unmap_sg_attrs" },
	{ 0x592cc81e, "dma_get_sgtable_attrs" },
	{ 0x5041bb32, "dma_mmap_attrs" },
	{ 0x8f883095, "dma_buf_detach" },
	{ 0x66ae407d, "dma_map_resource" },
	{ 0x159a005a, "set_page_dirty_lock" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5cfccb, "dma_map_sgtable" },
	{ 0x3919be46, "dma_free_attrs" },
	{ 0xa21fa765, "vb2_create_framevec" },
	{ 0xa492c871, "dma_buf_vunmap" },
	{ 0x891b699c, "dma_sync_sg_for_device" },
	{ 0x4f7eb381, "sg_alloc_table_from_pages_segment" },
	{ 0xe1e570f, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4dd3be0a, "dma_buf_unmap_attachment" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0xdcbe4e96, "dma_buf_map_attachment" },
	{ 0x33571a94, "dma_buf_export" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xdffb744b, "frame_vector_to_pfns" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x129894f0, "dma_buf_attach" },
	{ 0xb18f4e29, "get_device" },
	{ 0x5142a62e, "dma_unmap_resource" },
	{ 0x37a0cba, "kfree" },
	{ 0x7581525a, "vb2_common_vm_ops" },
	{ 0x1d188b7b, "dma_sync_sg_for_cpu" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x5a18d882, "dma_buf_vmap" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "videobuf2-common,videobuf2-memops");


MODULE_INFO(srcversion, "79D82BDD5034B4D17B8AD3B");
