//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASDAppMetadata.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, NSURL;

@interface ASDEnterpriseAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding>
{
    BOOL _hideUserPrompts;
    NSURL *_manifestURL;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSURL *manifestURL; // @synthesize manifestURL=_manifestURL;
@property BOOL hideUserPrompts; // @synthesize hideUserPrompts=_hideUserPrompts;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) long long metadataType;
- (id)initWithManifestURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
