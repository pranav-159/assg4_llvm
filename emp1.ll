; ModuleID = './examples/emp1.c'
source_filename = "./examples/emp1.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@a = dso_local global i32 1, align 4
@a1 = dso_local global i8 97, align 1
@b = dso_local global i16 1, align 2
@c = dso_local global i64 1, align 8
@d = dso_local global i64 1, align 8
@e = dso_local global float 0x3FF19999A0000000, align 4
@f = dso_local global double 2.100000e+00, align 8
@g = dso_local global i32* @a, align 8

!llvm.module.flags = !{!0}
!llvm.ident = !{!1}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{!"clang version 10.0.0-4ubuntu1 "}
