CXX=g++
RM=rm -f
CPPFLAGS= -std=c++11
LDFLAGS= 
LDLIBS= -lm

SRCS=main.cpp CreditEligibility.cpp CreditEligibilityInterface.cpp EarlierRepayment.cpp EarlierRepaymentInterface.cpp MainInterface.cpp LoanSimulator.cpp LoanSimulatorInterface.cpp PrintAsCurrency.cpp UnitTesting.cpp UnitTestingInterface.cpp Input.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

all: Kredyty
debug: CPPFLAGS+=-g
debug: LDFLAGS+=-g
debug: Kredyty

Kredyty: $(OBJS)
	$(CXX) $(LDFLAGS) $(CPPFLAGS)  $(OBJS) -o Kredyty  $(LDLIBS) 

main.o: main.cpp MainInterface.h

MainInterface.o: MainInterface.h MainInterface.cpp CreditEligibilityInterface.h EarlierRepaymentInterface.h LoanSimulatorInterface.h

CreditEligibilityInterface.o: CreditEligibilityInterface.h CreditEligibilityInterface.cpp CreditEligibility.h PrintAsCurrency.h Input.h

CreditEligibility.o: CreditEligibility.h CreditEligibility.cpp 

EarlierRepaymentInterface.o: EarlierRepaymentInterface.h EarlierRepaymentInterface.cpp EarlierRepayment.h PrintAsCurrency.h Input.h

EarlierRepayment.o: EarlierRepayment.h EarlierRepayment.cpp

LoanSimulatorInterface.o: LoanSimulatorInterface.h LoanSimulatorInterface.cpp LoanSimulator.h Input.h

LoanSimulator.o: LoanSimulator.h LoanSimulator.cpp

PrintAsCurrency.o: PrintAsCurrency.h PrintAsCurrency.cpp

UnitTestingInterface.o: UnitTestingInterface.h UnitTestingInterface.cpp UnitTesting.h

UnitTesting.o: UnitTesting.h UnitTesting.cpp

Input.o: Input.h Input.cpp



clean:
	$(RM) $(OBJS)

distclean: clean
	$(RM) Kredyty

