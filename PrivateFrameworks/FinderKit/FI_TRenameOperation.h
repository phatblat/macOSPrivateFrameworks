//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TFileSystemOperation.h>

__attribute__((visibility("hidden")))
@interface FI_TRenameOperation : FI_TFileSystemOperation
{
}

- (struct TString)authorizationPrompt;
- (void)setUpOperationRecordForIndex:(unsigned long long)arg1 withName:(const struct TString *)arg2 andExtensionState:(struct TriStateBool)arg3;
- (void)configureOperationRecord:(struct TOperationRecord *)arg1 forNode:(const struct TFENode *)arg2;
- (id)makeDelegate;

@end

