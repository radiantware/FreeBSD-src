# $FreeBSD$

.include <bsd.own.mk>

PROG_CXX=lldb

LLDB_SRCS=${.CURDIR}/../../../contrib/llvm/tools/lldb

CFLAGS+=	-I${LLDB_SRCS}/include
CXXFLAGS+=	-std=c++11

SRCDIR=	tools/lldb/tools/driver
SRCS=	Driver.cpp \
	Platform.cpp

# Man page directory
.PATH: ${LLDB_SRCS}/docs

DPADD=	${LIBEDIT} ${LIBNCURSESW} ${LIBEXECINFO} ${LIBPANEL}
LDADD=	-ledit -lncursesw -lexecinfo -lpanel

LLDB_LIBS=\
	lldb \
	\
	lldbAPI \
	lldbBreakpoint \
	lldbCommands \
	lldbCore \
	lldbDataFormatters \
	lldbExpression \
	lldbHostFreeBSD \
	lldbHostCommon \
	lldbInterpreter \
	lldbSymbol \
	lldbTarget \
	lldbUtility \
	\
	lldbPluginABISysV_x86_64 \
	lldbPluginCXXItaniumABI \
	lldbPluginDisassemblerLLVM \
	lldbPluginInstructionARM \
	lldbPluginSymbolFileDWARF \
	lldbPluginSymbolFileSymtab \
	lldbPluginDynamicLoaderStatic \
	lldbPluginDynamicLoaderPosixDYLD \
	lldbPluginObjectContainerBSDArchive \
	lldbPluginObjectFileELF \
	lldbPluginSymbolVendorELF \
	lldbPluginPlatformFreeBSD \
	lldbPluginPlatformGDB \
	lldbPluginProcessElfCore \
	lldbPluginProcessFreeBSD \
	lldbPluginProcessGDBRemote \
	lldbPluginProcessUtility \
	lldbPluginProcessPOSIX \
	lldbPluginProcessFreeBSD \
	lldbPluginUnwindAssemblyInstEmulation \
	lldbPluginUnwindAssemblyX86

LDADD+=	-Wl,--start-group
.for lib in ${LLDB_LIBS}
DPADD+=	${.OBJDIR}/../../../lib/clang/lib${lib}/lib${lib}.a
LDADD+=	${.OBJDIR}/../../../lib/clang/lib${lib}/lib${lib}.a
.endfor
LDADD+=	-Wl,--end-group

# Clang and LLVM libraries
LIBDEPS=\
	clangfrontend \
	clangdriver \
	clangserialization \
	clangcodegen \
	clangparse \
	clangsema \
	clanganalysis \
	clangedit \
	clangast \
	clangbasic \
	clanglex \
	\
	llvmoption \
	llvmarmasmparser \
	llvmarmcodegen \
	llvminstrumentation \
	llvmirreader \
	llvmlinker \
	llvmmipsasmparser \
	llvmmipscodegen \
	llvmmipsdisassembler \
	llvmobjcarcopts \
	llvmpowerpccodegen \
	llvmx86asmparser \
	llvmx86codegen \
	llvmx86disassembler \
	llvmmcjit \
	llvmmcdisassembler \
	llvmarmdisassembler \
	llvmselectiondag \
	llvmipo \
	llvmbitwriter \
	llvmbitreader \
	llvmasmparser \
	llvminterpreter \
	llvmjit \
	llvmarmdesc \
	llvmasmprinter \
	llvmmipsdesc \
	llvmmipsinstprinter \
	llvmpowerpcdesc \
	llvmpowerpcinstprinter \
	llvmpowerpcasmparser \
	llvmruntimedyld \
	llvmvectorize \
	llvmx86desc \
	llvmx86instprinter \
	llvmexecutionengine \
	llvmcodegen \
	llvmscalaropts \
	llvmsparcdisassembler \
	llvmsparccodegen \
	llvmsparcasmparser \
	llvmsparcdesc \
	llvmsparcinfo \
	llvmsparcinstprinter \
	llvmarminfo \
	llvmarminstprinter \
	llvmmcparser \
	llvmmipsinfo \
	llvmpowerpcinfo \
	llvmx86info \
	llvmx86utils \
	llvmobject \
	llvminstcombine \
	llvmtransformutils \
	llvmipa \
	llvmanalysis \
	llvmtarget \
	llvmcore \
	llvmmc \
	llvmsupport

.include "../clang.prog.mk"

LDADD+=	-lpthread
