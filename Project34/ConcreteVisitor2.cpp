#include"ConcreteVisitor2.h"

void ConcreteVisitor2::VisitConcreteComponentA(const ConcreteComponentA* element) const {
    std::cout << element->ExclusiveMethodOfConcreteComponentA() << " + ConcreteVisitor2\n";
}
void ConcreteVisitor2::VisitConcreteComponentB(const ConcreteComponentB* element) const {
    std::cout << element->SpecialMethodOfConcreteComponentB() << " + ConcreteVisitor2\n";
}