APP = XMLer
CXX=g++
CXXFLAGS=-O2 -g -std=c++0x -DTIXML_USE_TICPP
LDFLAGS=
INCLUDES=-I. 

CMD = ./$(APP)

TINYXMLSRCS=ticpp.cpp tinystr.cpp tinyxml.cpp tinyxmlerror.cpp tinyxmlparser.cpp
SRCS= main.cpp control.cpp channel.cpp q2xmlfile.cpp exception.cpp $(TINYXMLSRCS)

OBJS=$(SRCS:%.cpp=%.o)

all: $(APP)

$(APP): $(OBJS)
	@echo Linking $(APP) 
	$(CXX) $(LDFLAGS) $(LIBS) $(OBJS) -o $(APP)

%.o: %.cpp
	@echo Compiling $< 
	@$(CXX) $(INCLUDES) $(CXXFLAGS) -c $<   

run: $(APP)
	$(CMD)

depend: .depend

.depend: $(SRCS)
	@-rm -f .depend
	$(CC) $(CFLAGS) -MM $^ > .depend;

include .depend

clean:
	@-rm -rf *.o .depend $(APP) *~
