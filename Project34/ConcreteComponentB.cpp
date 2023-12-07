#include"ConcreteComponentB.h"

void ConcreteComponentB::Accept(Visitor* visitor) const  {
    visitor->VisitConcreteComponentB(this);
}

std::string ConcreteComponentB::SpecialMethodOfConcreteComponentB() const {
    return "B";
}