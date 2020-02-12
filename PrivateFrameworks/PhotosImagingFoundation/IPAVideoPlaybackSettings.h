//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosImagingFoundation/IPAEditDescription.h>

@interface IPAVideoPlaybackSettings : IPAEditDescription
{
    CDStruct_1b6d18a9 _naturalDuration;
}

+ (id)presetifyAdjustmentStack:(id)arg1;
+ (Class)operationClassForIdentifier:(id)arg1;
+ (id)playbackSettingsForAdjustments:(id)arg1;
+ (Class)expectedOperationClass;
+ (void)initialize;
@property(readonly, nonatomic) CDStruct_1b6d18a9 naturalDuration; // @synthesize naturalDuration=_naturalDuration;
- (id)debugDescription;
- (id)archivalRepresentation;
- (id)slomoOperation;
- (id)trimOperation;
- (id)posterFrameOperation;
- (id)operationWithIdentifier:(id)arg1;
- (id)descriptionByReplacingOperation:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)descriptionByAddingOperation:(id)arg1;
- (id)descriptionByAddingOperation:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)descriptionWithOperations:(id)arg1;
- (unsigned long long)sortOrderForOperationWithIdentifier:(id)arg1;
- (BOOL)isEqualToDescription:(id)arg1;
- (id)initWithOperations:(id)arg1 naturalDuration:(CDStruct_1b6d18a9)arg2;
- (id)initWithOperations:(id)arg1;
- (CDStruct_1b6d18a9)naturalTimeForPosterFrame;
- (CDStruct_1b6d18a9)naturalTimeFromScaledTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)scaledTimeFromNaturalTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_e83c9415)scaledPlaybackRangeForScaledDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_e83c9415)naturalPlaybackRange;
- (CDStruct_1b6d18a9)scaledDuration;
- (id)descriptionByInsertingOrReplacingOperation:(id)arg1;

@end

