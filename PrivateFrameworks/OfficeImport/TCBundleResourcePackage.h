//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, OISFUZipArchive;

__attribute__((visibility("hidden")))
@interface TCBundleResourcePackage : NSObject
{
    OISFUZipArchive *mZipArchive;
    NSMutableDictionary *mEntryMap;
}

- (id)entryWithName:(id)arg1 cacheResult:(BOOL)arg2;
- (void)dealloc;
- (id)initWithZipArchive:(id)arg1;

@end

