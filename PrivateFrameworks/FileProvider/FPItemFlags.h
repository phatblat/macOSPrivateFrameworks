//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSFileProviderItemFlags.h"
#import "NSSecureCoding.h"

@class NSString;

@interface FPItemFlags : NSObject <NSCopying, NSSecureCoding, NSFileProviderItemFlags>
{
    BOOL _userExecutable;
    BOOL _userReadable;
    BOOL _userWritable;
    BOOL _hidden;
    BOOL _pathExtensionHidden;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isPathExtensionHidden) BOOL pathExtensionHidden; // @synthesize pathExtensionHidden=_pathExtensionHidden;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic, getter=isUserWritable) BOOL userWritable; // @synthesize userWritable=_userWritable;
@property(nonatomic, getter=isUserReadable) BOOL userReadable; // @synthesize userReadable=_userReadable;
@property(nonatomic, getter=isUserExecutable) BOOL userExecutable; // @synthesize userExecutable=_userExecutable;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqualToItemFlags:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemFlags:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
