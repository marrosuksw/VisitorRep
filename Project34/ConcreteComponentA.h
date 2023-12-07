#include"Component.h"

class ConcreteComponentA : public Component {
    /**
     * Note that we're calling `visitConcreteComponentA`, which matches the
     * current class name. This way we let the visitor know the class of the
     * component it works with.
     */
public:
    void Accept(Visitor* visitor) const override;
    /**
     * Concrete Components may have special methods that don't exist in their base
     * class or interface. The Visitor is still able to use these methods since
     * it's aware of the component's concrete class.
     */
    std::string ExclusiveMethodOfConcreteComponentA() const;
};
