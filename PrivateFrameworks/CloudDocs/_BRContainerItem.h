//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocs/BRQueryItem.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _BRContainerItem : BRQueryItem <NSSecureCoding, NSCopying>
{
    NSString *_containerID;
    NSString *_localizedName;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (unsigned long long)capabilities;
- (id)containerDisplayName;
- (id)typeIdentifier;
- (id)parentItemIdentifier;
- (BOOL)fp_isContainer;
- (id)fp_appContainerBundleIdentifier;
- (id)displayName;
- (id)filename;
- (id)itemIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithQueryItem:(id)arg1 container:(id)arg2 zoneRowID:(id)arg3;

@end

