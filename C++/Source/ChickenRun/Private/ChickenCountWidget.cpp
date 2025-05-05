#include "ChickenCountWidget.h"
#include "Components/TextBlock.h"


void UChickenCountWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (ChickenCountText)
	{
		ChickenCountText->SetText(FText::FromString(TEXT("Poulet: 0")));
	}
}

void UChickenCountWidget::SetChickenCount(int32 Count)
{
	if (ChickenCountText)
	{
		ChickenCountText->SetText(FText::Format(FText::FromString(TEXT("Poulets: {0}")), FText::AsNumber(Count)));
	}
}