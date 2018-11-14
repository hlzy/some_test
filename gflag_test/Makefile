##############################################################################
#
#    Copyright (c) 2016-2022 by Bitmain Technologies Inc. All rights reserved.
#
#    The material in this file is confidential and contains trade secrets
#    of Bitmain Technologies Inc. This is proprietary information owned by
#    Bitmain Technologies Inc. No part of this work may be disclosed,
#    reproduced, copied, transmitted, or used in any way for any purpose,
#    without the express written permission of Bitmain Technologies Inc.
#
##############################################################################

LIBRARIES += glog gflags
INCLUDE_DIR += -I/usr/include

CXX = g++
CXXFLAGS += -std=c++11

LDFLAGS += -L./lib
LDFLAGS += -L/usr/lib/x86_64-linux-gnu
LDFLAGS += $(foreach library,$(LIBRARIES),-l$(library))

all:
	$(CXX) -g test.cpp $(INCLUDE_DIR) $(LDFLAGS) $(CXXFLAGS) -o main 

clean:
	-rm -f main

run:
	-./main > /dev/null 2>&1
