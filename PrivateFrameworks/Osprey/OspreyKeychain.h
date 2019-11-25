//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface OspreyKeychain : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)_deleteData:(id)arg1;
- (id)_fetchDataWithIdentifier:(id)arg1;
- (BOOL)_saveData:(id)arg1 withIdentifier:(id)arg2;
- (void)deleteDataWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchDataWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveData:(id)arg1 withIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)createKeychainQuery;
- (id)init;

@end

