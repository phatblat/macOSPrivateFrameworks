//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBRideCompletionStatus.h"

@class INCodableAttribute, NSArray, NSString, _INPBCurrencyAmountValue, _INPBUserActivity;

@interface _INPBRideCompletionStatus : PBCodable <_INPBRideCompletionStatus, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    CDStruct_95bda58d _feedbackTypes;
    struct {
        unsigned int canceled:1;
        unsigned int canceledByService:1;
        unsigned int completed:1;
        unsigned int missedPickup:1;
        unsigned int outstanding:1;
    } _has;
    BOOL _canceled;
    BOOL _canceledByService;
    BOOL _completed;
    BOOL _missedPickup;
    BOOL _outstanding;
    _INPBUserActivity *_completionUserActivity;
    NSArray *_defaultTippingOptions;
    _INPBCurrencyAmountValue *_paymentAmount;
    INCodableAttribute *_associatedCodableAttribute;
}

+ (Class)defaultTippingOptionsType;
@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(retain, nonatomic) _INPBCurrencyAmountValue *paymentAmount; // @synthesize paymentAmount=_paymentAmount;
@property(nonatomic) BOOL outstanding; // @synthesize outstanding=_outstanding;
@property(nonatomic) BOOL missedPickup; // @synthesize missedPickup=_missedPickup;
@property(copy, nonatomic) NSArray *defaultTippingOptions; // @synthesize defaultTippingOptions=_defaultTippingOptions;
@property(retain, nonatomic) _INPBUserActivity *completionUserActivity; // @synthesize completionUserActivity=_completionUserActivity;
@property(nonatomic) BOOL completed; // @synthesize completed=_completed;
@property(nonatomic) BOOL canceledByService; // @synthesize canceledByService=_canceledByService;
@property(nonatomic) BOOL canceled; // @synthesize canceled=_canceled;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasPaymentAmount;
@property(nonatomic) BOOL hasOutstanding;
@property(nonatomic) BOOL hasMissedPickup;
- (int)StringAsFeedbackTypes:(id)arg1;
- (id)feedbackTypesAsString:(int)arg1;
- (int)feedbackTypeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long feedbackTypesCount;
- (void)addFeedbackType:(int)arg1;
- (void)clearFeedbackTypes;
@property(readonly, nonatomic) int *feedbackTypes;
- (void)setFeedbackTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)defaultTippingOptionsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long defaultTippingOptionsCount;
- (void)addDefaultTippingOptions:(id)arg1;
- (void)clearDefaultTippingOptions;
@property(readonly, nonatomic) BOOL hasCompletionUserActivity;
@property(nonatomic) BOOL hasCompleted;
@property(nonatomic) BOOL hasCanceledByService;
@property(nonatomic) BOOL hasCanceled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
