//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class MFUpdateAttachmentsWithAttachmentIDUpgradeStep, NSURL;

@protocol MFUpdateAttachmentsWithAttachmentIDUpgradeStepDataSource
- (BOOL)updateAttachmentsWithAttachmentIDUpgradeStep:(MFUpdateAttachmentsWithAttachmentIDUpgradeStep *)arg1 isDirectoryForFileURL:(NSURL *)arg2;
- (void (^)(void))skipDescendantsBlockForUpdateAttachmentsWithAttachmentIDUpgradeStep:(MFUpdateAttachmentsWithAttachmentIDUpgradeStep *)arg1;
- (id <NSFastEnumeration>)fileURLEnumeratorForUpdateAttachmentsWithAttachmentIDUpgradeStep:(MFUpdateAttachmentsWithAttachmentIDUpgradeStep *)arg1;
@end
