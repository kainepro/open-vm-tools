/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (c) 2012 Vmware, Inc.  All rights reserved.
 *  -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppDoc". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef CClassIdentifierDoc_h_
#define CClassIdentifierDoc_h_

namespace Caf {

/// Tuple of values to uniquely identify a class
class CClassIdentifierDoc {
public:
	CClassIdentifierDoc() :
		_isInitialized(false) {}
	virtual ~CClassIdentifierDoc() {}

public:
	/// Initializes the object with everything required by this
	/// container. Once initialized, this object cannot
	/// be changed (i.e. it is immutable).
	void initialize(
		const std::string namespaceVal,
		const std::string name,
		const std::string version) {
		if (! _isInitialized) {
			_namespaceVal = namespaceVal;
			_name = name;
			_version = version;

			_isInitialized = true;
		}
	}

public:
	/// Accessor for the NamespaceVal
	std::string getNamespaceVal() const {
		return _namespaceVal;
	}

	/// Accessor for the Name
	std::string getName() const {
		return _name;
	}

	/// Accessor for the Version
	std::string getVersion() const {
		return _version;
	}

private:
	bool _isInitialized;

	std::string _namespaceVal;
	std::string _name;
	std::string _version;

private:
	CAF_CM_DECLARE_NOCOPY(CClassIdentifierDoc);
};

CAF_DECLARE_SMART_POINTER(CClassIdentifierDoc);

}

#endif