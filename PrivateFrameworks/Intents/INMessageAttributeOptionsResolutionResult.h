//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

@interface INMessageAttributeOptionsResolutionResult : INIntentResolutionResult
{
}

+ (id)confirmationRequiredWithValueToConfirm:(unsigned long long)arg1;
+ (id)confirmationRequiredWithMessageAttributeOptionsToConfirm:(unsigned long long)arg1;
+ (id)successWithResolvedValue:(unsigned long long)arg1;
+ (id)successWithResolvedMessageAttributeOptions:(unsigned long long)arg1;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;

@end

