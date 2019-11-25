//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSString;

@interface MMAOSKeychainWrapper : NSObject
{
    NSString *_accountName;
    NSString *_serviceName;
    NSLock *_lock;
    BOOL _userCanceledKeychainUnlock;
}

+ (id)keychainWrapperWithAccountName:(id)arg1 serviceName:(id)arg2;
- (void).cxx_destruct;
- (BOOL)userCanceledKeychainUnlock;
- (void)setUserCanceledKeychainUnlock:(BOOL)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)serviceName;
- (void)setServiceName:(id)arg1;
- (id)accountName;
- (void)setAccountName:(id)arg1;
- (void)removeGenericPassword;
- (id)getAttributesForKeys:(id)arg1;
- (int)addGenericPasswordWithAttributes:(id)arg1 data:(id)arg2;
- (id)genericPassword;
- (id)genericPasswordAndItemRef:(struct __SecKeychainItem **)arg1;
- (void)dealloc;
- (id)initWithAccountName:(id)arg1 serviceName:(id)arg2;

@end

