#include"ConcreteVisitor1.h"

void ConcreteVisitor1::VisitConcreteComponentA(const ConcreteComponentA* element) const {
    std::cout << element->ExclusiveMethodOfConcreteComponentA() << " + ConcreteVisitor1\n";
}

void ConcreteVisitor1::VisitConcreteComponentB(const ConcreteComponentB* element) const {
    std::cout << element->SpecialMethodOfConcreteComponentB() << " + ConcreteVisitor1\n";
}