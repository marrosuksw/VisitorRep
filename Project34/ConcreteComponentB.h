#include"ConcreteComponentA.h"
class ConcreteComponentB : public Component {
    /**
     * Same here: visitConcreteComponentB => ConcreteComponentB
     */
public:
    void Accept(Visitor* visitor) const override;
    std::string SpecialMethodOfConcreteComponentB() const;
};