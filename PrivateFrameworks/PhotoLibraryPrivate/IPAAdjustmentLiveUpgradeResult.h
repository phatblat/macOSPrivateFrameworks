//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IPAAdjustmentEnvelope, NSArray, NSMutableArray;

@interface IPAAdjustmentLiveUpgradeResult : NSObject
{
    NSMutableArray *_errors;
    BOOL _invalidatePreviews;
    IPAAdjustmentEnvelope *_adjustmentEnvelope;
}

@property(readonly, nonatomic) BOOL invalidatePreviews; // @synthesize invalidatePreviews=_invalidatePreviews;
@property(readonly, nonatomic) IPAAdjustmentEnvelope *adjustmentEnvelope; // @synthesize adjustmentEnvelope=_adjustmentEnvelope;
@property(readonly, nonatomic) NSArray *errors; // @synthesize errors=_errors;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)markPreviewsAsInvalid;
- (void)appendError:(id)arg1;
- (void)setAdjustmentStack:(id)arg1;
- (void)setAdjustmentEnvelope:(id)arg1;
- (id)initWithAdjustmentEnvelope:(id)arg1;
- (id)init;

@end
