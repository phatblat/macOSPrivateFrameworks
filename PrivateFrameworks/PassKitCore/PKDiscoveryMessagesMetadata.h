//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface PKDiscoveryMessagesMetadata : NSObject
{
    long long _version;
    NSURL *_messagesBundleURL;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSURL *messagesBundleURL; // @synthesize messagesBundleURL=_messagesBundleURL;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

