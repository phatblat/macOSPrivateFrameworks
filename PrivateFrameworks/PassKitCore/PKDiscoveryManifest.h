//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, PKDiscoveryMessagesMetadata;

@interface PKDiscoveryManifest : NSObject <NSSecureCoding>
{
    long long _version;
    NSArray *_rules;
    NSArray *_discoveryItems;
    PKDiscoveryMessagesMetadata *_messagesMetadata;
}

+ (BOOL)supportsSecureCoding;
+ (id)manifestFromURL:(id)arg1;
@property(readonly, nonatomic) PKDiscoveryMessagesMetadata *messagesMetadata; // @synthesize messagesMetadata=_messagesMetadata;
@property(readonly, nonatomic) NSArray *discoveryItems; // @synthesize discoveryItems=_discoveryItems;
@property(readonly, nonatomic) NSArray *rules; // @synthesize rules=_rules;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(long long)arg1 rules:(id)arg2 discoveryItems:(id)arg3 engagementMessagesMetadata:(id)arg4;
- (id)initWithDictionary:(id)arg1;

@end

