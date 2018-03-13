//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntentResponse.h>

#import "INMoveFileIntentResponseExport.h"

@class NSArray, NSNumber, NSSet, NSString, _INPBMoveFileIntentResponse;

@interface INMoveFileIntentResponse : INIntentResponse <INMoveFileIntentResponseExport>
{
    _INPBMoveFileIntentResponse *_responseMessagePBRepresentation;
}

+ (long long)_intentHandlingStatusFromCode:(long long)arg1;
+ (BOOL)_appLaunchRequestedFromCode:(long long)arg1;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)setPropertiesByName:(id)arg1;
- (id)propertiesByName;
- (id)_dictionaryRepresentation;
@property(copy) NSString *destinationName;
@property(copy) NSString *sourceName;
@property(copy) NSArray *entityNames;
@property unsigned long long entityTypes;
@property(copy) NSNumber *success;
@property(copy) NSNumber *overwrite;
- (id)_responseMessagePBRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) long long code;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)init;
@property(copy) NSSet *entityTypeSet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

