//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSAccount, IDSAccountController;

@protocol IDSAccountControllerDelegate <NSObject>

@optional
- (void)accountController:(IDSAccountController *)arg1 accountDisabled:(IDSAccount *)arg2;
- (void)accountController:(IDSAccountController *)arg1 accountEnabled:(IDSAccount *)arg2;
- (void)accountController:(IDSAccountController *)arg1 accountRemoved:(IDSAccount *)arg2;
- (void)accountController:(IDSAccountController *)arg1 accountUpdated:(IDSAccount *)arg2;
- (void)accountController:(IDSAccountController *)arg1 accountAdded:(IDSAccount *)arg2;
@end

