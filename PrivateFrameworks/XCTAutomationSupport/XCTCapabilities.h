//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary;

@interface XCTCapabilities : NSObject <NSSecureCoding>
{
    NSDictionary *_capabilitiesDictionary;
}

+ (id)emptyCapabilities;
+ (BOOL)supportsSecureCoding;
@property(readonly, copy) NSDictionary *capabilitiesDictionary; // @synthesize capabilitiesDictionary=_capabilitiesDictionary;
- (void).cxx_destruct;
- (BOOL)hasCapability:(id)arg1;
- (unsigned long long)versionForCapability:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

