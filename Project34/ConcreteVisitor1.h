#include"ConcreteComponentB.h"

class ConcreteVisitor1 : public Visitor {
public:
    void VisitConcreteComponentA(const ConcreteComponentA* element) const override;

    void VisitConcreteComponentB(const ConcreteComponentB* element) const override;
};