//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSMailPersistenceInfo, NSDictionary;

@interface TMMailPersistenceInfo : NSObject
{
    MSMailPersistenceInfo *_info;
}

+ (id)currentMailVersionDirectoryName;
- (id)previousMailVersionDirectoryNamesForVersionDirectoryName:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *v4MigratedAccountDirectories;
- (void)dealloc;
- (id)initWithMailLibraryDirectory:(id)arg1;

@end

