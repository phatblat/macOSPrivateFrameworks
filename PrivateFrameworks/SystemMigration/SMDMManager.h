//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DMManager;

@interface SMDMManager : NSObject
{
    DMManager *_dm;
    struct __DASession *_daSession;
}

+ (id)sharedSMDMManager;
+ (void)initialize;
- (void).cxx_destruct;
- (struct __DASession *)daSession;
- (id)manager;
- (struct __DADisk *)copyDiskForDiskIdentifier:(id)arg1;
- (void)tearDown;
- (id)init;

@end

