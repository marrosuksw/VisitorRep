#include"ConcreteVisitor1.h"

class ConcreteVisitor2 : public Visitor {
public:
    void VisitConcreteComponentA(const ConcreteComponentA* element) const override;
    void VisitConcreteComponentB(const ConcreteComponentB* element) const override;
};