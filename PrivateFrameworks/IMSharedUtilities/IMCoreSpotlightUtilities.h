//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMCoreSpotlightUtilities : NSObject
{
}

+ (id)descriptionForReindexReason:(unsigned long long)arg1;
+ (BOOL)bypassIndexVersionCheck;
+ (unsigned long long)messageIndexBatchSize:(BOOL)arg1;
+ (unsigned long long)expectedIndexVersion;
+ (unsigned long long)currentIndexVersion;
+ (unsigned long long)lastIndexedRowID;
+ (void)setNeedsDeferredIndexing;
+ (BOOL)needsDeferredIndexing;
+ (BOOL)needsIndexing;

@end

