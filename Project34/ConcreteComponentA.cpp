#include"ConcreteComponentA.h"

void ConcreteComponentA::Accept(Visitor* visitor) const {
    visitor->VisitConcreteComponentA(this);
}

std::string ConcreteComponentA::ExclusiveMethodOfConcreteComponentA() const {
    return "A";
}