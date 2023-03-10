// MyCustomization.cpp
#include "$safeitemname$.h"
#include "IDetailChildrenBuilder.h"

#define LOCTEXT_NAMESPACE "F$safeitemname$"

TSharedRef<IPropertyTypeCustomization> F$safeitemname$::MakeInstance()
{
    return MakeShareable(new F$safeitemname$());
}

void F$safeitemname$::CustomizeHeader(TSharedRef<IPropertyHandle> PropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& CustomizationUtils)
{
	// Customize the header here
}

void F$safeitemname$::CustomizeChildren(TSharedRef<IPropertyHandle> PropertyHandle, IDetailChildrenBuilder& ChildBuilder, IPropertyTypeCustomizationUtils& CustomizationUtils)
{
    // Customize the contents here
}

#undef LOCTEXT_NAMESPACE