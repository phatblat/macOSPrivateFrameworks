//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBPayloadConfirmation, _INPBPayloadNeedsDisambiguation, _INPBPayloadNeedsValue, _INPBPayloadSuccess, _INPBPayloadUnsupported;

@protocol _INPBIntentSlotResolutionResult <NSObject>
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type;
@property(readonly, nonatomic) BOOL hasPayloadUnsupported;
@property(retain, nonatomic) _INPBPayloadUnsupported *payloadUnsupported;
@property(readonly, nonatomic) BOOL hasPayloadSuccess;
@property(retain, nonatomic) _INPBPayloadSuccess *payloadSuccess;
@property(readonly, nonatomic) BOOL hasPayloadNeedsValue;
@property(retain, nonatomic) _INPBPayloadNeedsValue *payloadNeedsValue;
@property(readonly, nonatomic) BOOL hasPayloadNeedsDisambiguation;
@property(retain, nonatomic) _INPBPayloadNeedsDisambiguation *payloadNeedsDisambiguation;
@property(readonly, nonatomic) BOOL hasPayloadConfirmation;
@property(retain, nonatomic) _INPBPayloadConfirmation *payloadConfirmation;
- (int)StringAsType:(NSString *)arg1;
- (NSString *)typeAsString:(int)arg1;
@end

