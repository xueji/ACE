# -*- makefile -*-
#----------------------------------------------------------------------------
#       GNU ACE Workspace
#
# $Id: GNUACEWorkspaceCreator.pm 94635 2011-10-06 12:59:23Z johnnyw $
#
# This file was generated by MPC.  Any changes made directly to
# this file will be lost the next time it is generated.
#
# MPC Command:
# /home/build/DOC_ROOT/stage-1038/ACE_wrappers/bin/mwc.pl -type gnuace -exclude "TAO/TAO_*.mwc,TAO/CIAO/CIAO_*.mwc" -workers 20 -recurse -hierarchy -relative ACE_ROOT=/home/build/DOC_ROOT/stage-1038/ACE_wrappers -relative TAO_ROOT=/home/build/DOC_ROOT/stage-1038/ACE_wrappers/TAO -relative CIAO_ROOT=/home/build/DOC_ROOT/stage-1038/ACE_wrappers/TAO/CIAO -relative DANCE_ROOT=/home/build/DOC_ROOT/stage-1038/ACE_wrappers/TAO/DAnCE
#
#----------------------------------------------------------------------------

MAKEFILE = GNUmakefile

ifeq ($(findstring k,$(MAKEFLAGS)),k)
  KEEP_GOING = -
endif

include $(ACE_ROOT)/include/makeinclude/macros.GNU

all: TTSConnector_idl_gen TTSConnector_lem_gen TTSConnector_stub TTSC_Sender_idl_gen TTSC_Sender_stub TTSC_Sender_lem_gen TTSC_Sender_exec TTSC_Sender_svnt TTSConnector_lem_stub TTSConnector_exec TTSConnector_svnt

REMAINING_TARGETS := $(filter-out all,$(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)

$(REMAINING_TARGETS):
	$(KEEP_GOING)@cd TTSConnector && $(MAKE) -f GNUmakefile.TTSConnector_idl_gen $(@)
	$(KEEP_GOING)@cd TTSConnector && $(MAKE) -f GNUmakefile.TTSConnector_lem_gen $(@)
	$(KEEP_GOING)@cd TTSConnector && $(MAKE) -f GNUmakefile.TTSConnector_stub $(@)
	$(KEEP_GOING)@cd Sender && $(MAKE) -f GNUmakefile.TTSC_Sender_idl_gen $(@)
	$(KEEP_GOING)@cd Sender && $(MAKE) -f GNUmakefile.TTSC_Sender_stub $(@)
	$(KEEP_GOING)@cd Sender && $(MAKE) -f GNUmakefile.TTSC_Sender_lem_gen $(@)
	$(KEEP_GOING)@cd Sender && $(MAKE) -f GNUmakefile.TTSC_Sender_exec $(@)
	$(KEEP_GOING)@cd Sender && $(MAKE) -f GNUmakefile.TTSC_Sender_svnt $(@)
	$(KEEP_GOING)@cd TTSConnector && $(MAKE) -f GNUmakefile.TTSConnector_lem_stub $(@)
	$(KEEP_GOING)@cd TTSConnector && $(MAKE) -f GNUmakefile.TTSConnector_exec $(@)
	$(KEEP_GOING)@cd TTSConnector && $(MAKE) -f GNUmakefile.TTSConnector_svnt $(@)

.PHONY: TTSConnector_idl_gen
TTSConnector_idl_gen:
	$(KEEP_GOING)@cd TTSConnector && $(MAKE) -f GNUmakefile.TTSConnector_idl_gen all

.PHONY: TTSConnector_lem_gen
TTSConnector_lem_gen: TTSConnector_idl_gen
	$(KEEP_GOING)@cd TTSConnector && $(MAKE) -f GNUmakefile.TTSConnector_lem_gen all

.PHONY: TTSConnector_stub
TTSConnector_stub: TTSConnector_lem_gen
	$(KEEP_GOING)@cd TTSConnector && $(MAKE) -f GNUmakefile.TTSConnector_stub all

.PHONY: TTSC_Sender_idl_gen
TTSC_Sender_idl_gen: TTSConnector_idl_gen
	$(KEEP_GOING)@cd Sender && $(MAKE) -f GNUmakefile.TTSC_Sender_idl_gen all

.PHONY: TTSC_Sender_stub
TTSC_Sender_stub: TTSConnector_lem_gen TTSC_Sender_idl_gen
	$(KEEP_GOING)@cd Sender && $(MAKE) -f GNUmakefile.TTSC_Sender_stub all

.PHONY: TTSC_Sender_lem_gen
TTSC_Sender_lem_gen: TTSC_Sender_idl_gen
	$(KEEP_GOING)@cd Sender && $(MAKE) -f GNUmakefile.TTSC_Sender_lem_gen all

.PHONY: TTSC_Sender_exec
TTSC_Sender_exec: TTSConnector_stub TTSC_Sender_stub TTSC_Sender_lem_gen
	$(KEEP_GOING)@cd Sender && $(MAKE) -f GNUmakefile.TTSC_Sender_exec all

.PHONY: TTSC_Sender_svnt
TTSC_Sender_svnt: TTSC_Sender_exec
	$(KEEP_GOING)@cd Sender && $(MAKE) -f GNUmakefile.TTSC_Sender_svnt all

.PHONY: TTSConnector_lem_stub
TTSConnector_lem_stub: TTSConnector_lem_gen TTSConnector_stub
	$(KEEP_GOING)@cd TTSConnector && $(MAKE) -f GNUmakefile.TTSConnector_lem_stub all

.PHONY: TTSConnector_exec
TTSConnector_exec: TTSConnector_stub TTSConnector_lem_stub
	$(KEEP_GOING)@cd TTSConnector && $(MAKE) -f GNUmakefile.TTSConnector_exec all

.PHONY: TTSConnector_svnt
TTSConnector_svnt: TTSConnector_stub TTSConnector_lem_stub TTSConnector_exec
	$(KEEP_GOING)@cd TTSConnector && $(MAKE) -f GNUmakefile.TTSConnector_svnt all

project_name_list:
	@echo TTSC_Sender_exec
	@echo TTSC_Sender_idl_gen
	@echo TTSC_Sender_lem_gen
	@echo TTSC_Sender_stub
	@echo TTSC_Sender_svnt
	@echo TTSConnector_exec
	@echo TTSConnector_idl_gen
	@echo TTSConnector_lem_gen
	@echo TTSConnector_lem_stub
	@echo TTSConnector_stub
	@echo TTSConnector_svnt
