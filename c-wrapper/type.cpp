//
//  type.cpp
//  dgmpp
//
//  Created by Artem Shimanski on 14.12.2017.
//

#include "type.h"
#include "internal.h"

dgmpp_type_id dgmpp_type_get_type_id (dgmpp_type_ptr type) {
	return static_cast<dgmpp_type_id>(type_cast<Type*>(type)->metaInfo().typeID);
}

dgmpp_group_id dgmpp_type_get_group_id (dgmpp_type_ptr type) {
	return static_cast<dgmpp_group_id>(type_cast<Type*>(type)->metaInfo().groupID);
}

dgmpp_category_id dgmpp_type_get_category_id (dgmpp_type_ptr type) {
	return static_cast<dgmpp_category_id>(type_cast<Type*>(type)->metaInfo().categoryID);
}

dgmpp_type_ptr dgmpp_type_get_parent (dgmpp_type_ptr type) {
	return dgmpp_make_type(type_cast<Type*>(type)->parent());
}
dgmpp_attribute_ptr dgmpp_type_get_attribute (dgmpp_type_ptr type, dgmpp_attribute_id attribute_id) {
	if (auto attribute = (*type_cast<Type*>(type))[static_cast<AttributeID>(attribute_id)])
		return reinterpret_cast<dgmpp_attribute_ptr>(new dgmpp_attribute_impl {attribute.get()});
	else
		return nullptr;
}

dgmpp_array_ptr dgmpp_type_get_affectors (dgmpp_type_ptr type) {
	return dgmpp_make_array<dgmpp_type_impl*>(type_cast<Type*>(type)->affectors());
}

dgmpp_array_ptr dgmpp_type_get_attributes (dgmpp_type_ptr type) {
	return dgmpp_make_array<dgmpp_attribute_impl*>(type_cast<Type*>(type)->attributes());
}

size_t dgmpp_type_get_identifier (dgmpp_type_ptr type) {
	return type_cast<Type*>(type)->identifier();
}

void dgmpp_type_set_identifier (dgmpp_type_ptr type, size_t identifier) {
	type_cast<Type*>(type)->identifier(identifier);
}