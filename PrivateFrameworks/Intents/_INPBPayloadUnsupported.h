//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBPayloadUnsupported.h"

@class INCodableAttribute, NSArray, NSString;

@interface _INPBPayloadUnsupported : PBCodable <_INPBPayloadUnsupported, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct {
        unsigned int requestPaymentIntentCurrencyAmountUnsupportedReason:1;
        unsigned int sendPaymentIntentCurrencyAmountUnsupportedReason:1;
        unsigned int createTimerIntentLabelUnsupportedReason:1;
        unsigned int sendPaymentIntentPayeeUnsupportedReason:1;
        unsigned int requestPaymentIntentPayerUnsupportedReason:1;
        unsigned int reason:1;
        unsigned int sendMessageIntentRecipientUnsupportedReason:1;
        unsigned int setTimerAttributeIntentTargetTimerUnsupportedReason:1;
    } _has;
    int _requestPaymentIntentCurrencyAmountUnsupportedReason;
    int _sendPaymentIntentCurrencyAmountUnsupportedReason;
    int _createTimerIntentLabelUnsupportedReason;
    int _sendPaymentIntentPayeeUnsupportedReason;
    int _requestPaymentIntentPayerUnsupportedReason;
    int _reason;
    int _sendMessageIntentRecipientUnsupportedReason;
    int _setTimerAttributeIntentTargetTimerUnsupportedReason;
    NSArray *_conflictingParameters;
    INCodableAttribute *_associatedCodableAttribute;
}

+ (Class)conflictingParametersType;
@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(nonatomic) int setTimerAttributeIntentTargetTimerUnsupportedReason; // @synthesize setTimerAttributeIntentTargetTimerUnsupportedReason=_setTimerAttributeIntentTargetTimerUnsupportedReason;
@property(nonatomic) int sendMessageIntentRecipientUnsupportedReason; // @synthesize sendMessageIntentRecipientUnsupportedReason=_sendMessageIntentRecipientUnsupportedReason;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(nonatomic) int requestPaymentIntentPayerUnsupportedReason; // @synthesize requestPaymentIntentPayerUnsupportedReason=_requestPaymentIntentPayerUnsupportedReason;
@property(nonatomic) int sendPaymentIntentPayeeUnsupportedReason; // @synthesize sendPaymentIntentPayeeUnsupportedReason=_sendPaymentIntentPayeeUnsupportedReason;
@property(nonatomic) int createTimerIntentLabelUnsupportedReason; // @synthesize createTimerIntentLabelUnsupportedReason=_createTimerIntentLabelUnsupportedReason;
@property(nonatomic) int sendPaymentIntentCurrencyAmountUnsupportedReason; // @synthesize sendPaymentIntentCurrencyAmountUnsupportedReason=_sendPaymentIntentCurrencyAmountUnsupportedReason;
@property(nonatomic) int requestPaymentIntentCurrencyAmountUnsupportedReason; // @synthesize requestPaymentIntentCurrencyAmountUnsupportedReason=_requestPaymentIntentCurrencyAmountUnsupportedReason;
@property(copy, nonatomic) NSArray *conflictingParameters; // @synthesize conflictingParameters=_conflictingParameters;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsSetTimerAttributeIntentTargetTimerUnsupportedReason:(id)arg1;
- (id)setTimerAttributeIntentTargetTimerUnsupportedReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasSetTimerAttributeIntentTargetTimerUnsupportedReason;
- (int)StringAsSendMessageIntentRecipientUnsupportedReason:(id)arg1;
- (id)sendMessageIntentRecipientUnsupportedReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasSendMessageIntentRecipientUnsupportedReason;
- (int)StringAsReason:(id)arg1;
- (id)reasonAsString:(int)arg1;
@property(nonatomic) BOOL hasReason;
- (int)StringAsRequestPaymentIntentPayerUnsupportedReason:(id)arg1;
- (id)requestPaymentIntentPayerUnsupportedReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasRequestPaymentIntentPayerUnsupportedReason;
- (int)StringAsSendPaymentIntentPayeeUnsupportedReason:(id)arg1;
- (id)sendPaymentIntentPayeeUnsupportedReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasSendPaymentIntentPayeeUnsupportedReason;
- (int)StringAsCreateTimerIntentLabelUnsupportedReason:(id)arg1;
- (id)createTimerIntentLabelUnsupportedReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasCreateTimerIntentLabelUnsupportedReason;
- (int)StringAsSendPaymentIntentCurrencyAmountUnsupportedReason:(id)arg1;
- (id)sendPaymentIntentCurrencyAmountUnsupportedReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasSendPaymentIntentCurrencyAmountUnsupportedReason;
- (int)StringAsRequestPaymentIntentCurrencyAmountUnsupportedReason:(id)arg1;
- (id)requestPaymentIntentCurrencyAmountUnsupportedReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasRequestPaymentIntentCurrencyAmountUnsupportedReason;
- (id)conflictingParametersAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long conflictingParametersCount;
- (void)addConflictingParameters:(id)arg1;
- (void)clearConflictingParameters;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

