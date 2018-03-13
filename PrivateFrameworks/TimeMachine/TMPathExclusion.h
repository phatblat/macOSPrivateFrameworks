//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TMPathExclusion : NSObject
{
    NSString *_path;
    NSString *_storedPath;
    unsigned char _type;
}

+ (id)userManagedExclusionWithStoredPath:(id)arg1;
+ (id)appManagedExclusionWithStoredPath:(id)arg1;
+ (id)userManagedExclusionWithPath:(id)arg1;
+ (id)appManagedExclusionWithPath:(id)arg1;
@property unsigned char type; // @synthesize type=_type;
@property(copy) NSString *storedPath; // @synthesize storedPath=_storedPath;
@property(copy) NSString *path; // @synthesize path=_path;
@property(readonly) BOOL userManaged;
@property(readonly) BOOL appManaged;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)_initWithStoredPath:(id)arg1 type:(unsigned char)arg2;
- (id)_initWithPath:(id)arg1 type:(unsigned char)arg2;

@end

