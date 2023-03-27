rm -r ./output ./lib.tar.gz

mkdir ./output/
mkdir ./output/boot/
mkdir ./output/boot/overlays/

make -C ./linux ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- bcm2711_defconfig
make -C ./linux ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- menuconfig
make -C ./linux -j8 ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu-
make -C ./linux ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- INSTALL_MOD_PATH=../output/ modules_install

cp ./linux/arch/arm64/boot/Image ./output/boot/kernel8.img
cp ./linux/arch/arm64/boot/dts/broadcom/*.dtb ./output/boot
cp ./linux/arch/arm64/boot/dts/overlays/*.dtb* ./output/boot/overlays/
cp ./linux/arch/arm64/boot/dts/overlays/README ./output/boot/overlays/

tar -czvf lib.tar.gz -C ./output/ boot etc lib
scp ./lib.tar.gz piller@rasPiller:/home/piller


# cp ./lib.tar.gz /mnt/e/linux/ -rf

# 解压
# scp mnt/e/linux/lib.tar.gz piller@rasPiller:/home/piller
# scp E:\linux\lib.tar.gz piller@192.168.1.100:/home/piller
# sudo tar --no-same-owner --keep-directory-symlink -xzvf lib.tar.gz -C /