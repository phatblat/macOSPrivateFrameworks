//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PowerlogCore/PLActivityCriterion.h>

@class NSDictionary, NSString, PLEntryNotificationOperatorComposition;

@interface PLActivityCriterionEntry : PLActivityCriterion
{
    NSString *_entryKey;
    CDUnknownBlockType _criterionBlock;
    NSDictionary *_filter;
    PLEntryNotificationOperatorComposition *_entryListener;
}

+ (id)audioOffCriterion;
+ (id)displayOffCriterion;
+ (id)pluggedInCriterion;
@property(retain) PLEntryNotificationOperatorComposition *entryListener; // @synthesize entryListener=_entryListener;
@property(retain) NSDictionary *filter; // @synthesize filter=_filter;
@property(copy) CDUnknownBlockType criterionBlock; // @synthesize criterionBlock=_criterionBlock;
@property(readonly) NSString *entryKey; // @synthesize entryKey=_entryKey;
- (void).cxx_destruct;
- (id)description;
- (void)scheduleEntryListener;
- (void)didDisableActivity:(id)arg1;
- (void)didEnableActivity:(id)arg1;
- (id)initWithEntryKey:(id)arg1 withFilter:(id)arg2 withCriterionBlock:(CDUnknownBlockType)arg3;
- (id)initWithEntryKey:(id)arg1 withCriterionBlock:(CDUnknownBlockType)arg2;

@end

