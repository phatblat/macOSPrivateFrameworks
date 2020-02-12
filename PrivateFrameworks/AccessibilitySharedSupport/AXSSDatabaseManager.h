//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext;

@interface AXSSDatabaseManager : NSObject
{
    int _lockNotificationToken;
    BOOL _isScreenedLocked;
    NSManagedObjectContext *_managedObjectContext;
}

+ (id)sharedDatabase;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void).cxx_destruct;
- (id)cloudObjectFromLocalObjects:(id)arg1 withTable:(id)arg2 andObjectID:(id)arg3;
- (void)userAuthChanged;
@property(readonly, nonatomic) BOOL canSave;
- (void)dealloc;
- (id)init;

@end

