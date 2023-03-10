#pragma once

#include "$safeitemname$.generated.h"

UCLASS()
class U$safeitemname$ : public // UEngineSubsystem | UEditorSubsystem | UGameInstanceSubsystem | ULocalPlayerSubsystem | UWorldSubsystem
{
	GENERATED_BODY()

public:
	/** Override to control if the Subsystem should be created at all.
	 * For example you could only have your system created on servers.
	 * It's important to note that if using this is becomes very important to null check whenever getting the Subsystem.
	 *
	 * Note: This function is called on the CDO prior to instances being created!
	 */
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override { return true; }

	/** Implement this for initialization of instances of the system */
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	/** Implement this for deinitialization of instances of the system */
	virtual void Deinitialize() override;
};
