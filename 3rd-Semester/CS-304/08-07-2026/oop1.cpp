// Resolution Order:

// Ordinary Specialization
// Complete 
// Partial 
// General 

// If the Base Class is a Class Template (Primary/Ordinary Template)

// Derived Class	Can Inherit?
// Class Template	✅ Yes
// Ordinary Class	✅ Yes (e.g., Base<int>)
// Partial Specialization	✅ Yes
// Complete Specialization	✅ Yes

// If the Base Class is a Partial Specialization

// Derived Class	Can Inherit?
// Class Template	✅ Yes
// Ordinary Class	✅ Yes
// Partial Specialization	✅ Yes
// Complete Specialization	✅ Yes

// If the Base Class is a Partial Specialization

//     Derived Class	Can Inherit?
// Class Template	✅ Yes
// Ordinary Class	✅ Yes
// Partial Specialization	✅ Yes
// Complete Specialization	✅ Yes


// If the Base Class is a Complete (Full) Specialization

// Derived Class	Can Inherit?
// Class Template	❌ No
// Ordinary Class	✅ Yes
// Partial Specialization	❌ No
// Complete Specialization	❌ No

