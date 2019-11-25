//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class FPItem, NSString, NSURL;

@interface FPActionOperationLocator : NSObject <NSCopying, NSSecureCoding>
{
    NSObject *_object;
}

+ (BOOL)supportsSecureCoding;
+ (id)locatorForItem:(id)arg1;
+ (id)locatorForURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL requiresCrossDeviceCopy;
- (void)attachSandboxExtensionOnXPCEncoding;
@property(readonly, nonatomic) BOOL isFolder;
@property(readonly, nonatomic) id parentIdentifier;
@property(readonly, nonatomic) id identifier;
- (BOOL)isDownloaded;
@property(readonly, nonatomic) unsigned long long size;
@property(readonly, nonatomic) NSString *filename;
@property(readonly, nonatomic) FPItem *asFPItem;
@property(readonly, nonatomic) NSURL *asURL;
@property(readonly, nonatomic) BOOL isProviderItem;
@property(readonly, nonatomic) BOOL isExternalURL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) id underlyingObject;
- (void)_setObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObject:(id)arg1;

@end

