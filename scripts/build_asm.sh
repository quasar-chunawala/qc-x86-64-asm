#!/usr/bin/env bash
set -e
src="$(realpath "$1")"
cd "$(dirname "$0")/.."
mkdir -p bin
nasm -f elf64 -w+all -g -F dwarf -I "$(dirname "$src")/" "$src" -o "bin/$(basename "${src%.asm}").o"
