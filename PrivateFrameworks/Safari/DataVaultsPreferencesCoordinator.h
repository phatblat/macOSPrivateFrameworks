//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, WBSCoalescedAsynchronousWriter;

__attribute__((visibility("hidden")))
@interface DataVaultsPreferencesCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_preferencesMap;
    WBSCoalescedAsynchronousWriter *_plistWriter;
    BOOL _haveReadFromDisk;
}

+ (id)_preferencesPlistURL;
+ (id)sharedCoordinator;
- (void).cxx_destruct;
- (void)savePendingChangesBeforeTermination;
- (void)setPreferenceValue:(id)arg1 forKey:(id)arg2;
- (id)preferenceValueByFetchingSynchronouslyFromDiskForKey:(id)arg1;
- (id)_preferencesForAsynchronousWriter;
- (id)init;

@end
