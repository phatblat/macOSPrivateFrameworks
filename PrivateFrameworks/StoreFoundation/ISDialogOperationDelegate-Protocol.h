//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperationDelegate.h"

@class ISDialogButton, ISDialogOperation;

@protocol ISDialogOperationDelegate <ISOperationDelegate>

@optional
- (BOOL)showDialogInSeperateProcessForOperation:(ISDialogOperation *)arg1;
- (void)operation:(ISDialogOperation *)arg1 selectedButton:(ISDialogButton *)arg2;
@end

