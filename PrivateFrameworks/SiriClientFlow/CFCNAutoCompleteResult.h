//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SADomainCommand.h"

#import "SAAceSerializable.h"

@class NSNumber, NSString;

@interface CFCNAutoCompleteResult : SADomainCommand <SAAceSerializable>
{
}

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)autoCompleteResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)autoCompleteResult;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *valueIdentifier;
@property(copy, nonatomic) NSString *suffix;
@property(copy, nonatomic) NSString *sourceType;
@property(copy, nonatomic) NSString *resultType;
@property(copy, nonatomic) NSString *nickName;
@property(copy, nonatomic) NSString *lastSendingAddress;
@property(copy, nonatomic) NSString *lastName;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSNumber *isSourceTypeConsideredSuggestions;
@property(copy, nonatomic) NSString *instantMessageAddressService;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *firstName;
@property(copy, nonatomic) NSString *displayName;
@property(copy, nonatomic) NSString *diagnosticLog;
@property(copy, nonatomic) NSString *addressType;
@property(copy, nonatomic) NSString *address;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

