#!/bin/bash

# QEMU ARM vexpress-a9 启动脚本
# 使用方法: ./qemu_vexpress.sh

echo "启动 QEMU ARM vexpress-a9 模拟器..."

# 设置QEMU参数并启动
qemu-system-arm \
    -M vexpress-a9 \
    -m 256M \
    -kernel u-boot \
    -nographic \
    -net nic \
    -net user \
    -s -S
echo "QEMU已退出"
